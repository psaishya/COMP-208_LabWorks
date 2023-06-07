#include "linkedBst.h"
#include "BstNode.h"
#include <iostream>

#include <assert.h>

LinkedListBST::LinkedListBST(BstNode* root): root(root) {}

bool LinkedListBST::isempty()
{
    return (this->root == nullptr);
}

void LinkedListBST::addBST(int key, int data)
{
  BstNode *newNode = new BstNode(key, data);
  BstNode *temp = root;
  BstNode *ptr = nullptr;
  while (temp != nullptr)
  {
    ptr = temp;
    if (key > temp->GetKey())
    {
      temp = temp->GetRightChild();
    }
    else
    {
      temp = temp->GetLeftChild();
    }
  }
  if (ptr == nullptr)
  {
    root = newNode;
  }
  else if (key < ptr->GetKey())
  {
    ptr->AssignLeftChild( newNode);
  }
  else
  {
    ptr->AssignRightChild( newNode);
  }
}
void LinkedListBST::removeBST(int key)
{
    return this->removeBST(key, this->root);
}

void LinkedListBST::removeBST(int key, BstNode* subtree)
{

    BstNode* traversingBstNode = this->findBstNode(key, subtree);

    
    if (traversingBstNode == nullptr) return ;

    if (traversingBstNode == this->root)
    {   
        
        if (traversingBstNode->GetLeftChild() == nullptr && traversingBstNode->GetRightChild() == nullptr)
        {
            this->root = nullptr;
        }
                else if(traversingBstNode->GetLeftChild() == nullptr)
        {
            this->root = traversingBstNode->GetRightChild();
        }
        
        else if(traversingBstNode->GetRightChild() == nullptr)
        {
            this->root = traversingBstNode->GetLeftChild();
        }
        
        else
        {
            BstNode* rightSubtree = traversingBstNode->GetRightChild();

            
            int minKeyRight;
            bool found = this->min(rightSubtree, minKeyRight);

            assert(found); 

            BstNode* BstNodeCorrespondingToMinKey = this->findBstNode(minKeyRight, rightSubtree);

            

            
            int valueCopy = BstNodeCorrespondingToMinKey->GetValue();
            int keyCopy = minKeyRight;

            
            this->removeBST(minKeyRight, rightSubtree);

            traversingBstNode->AssignValue(valueCopy);
            traversingBstNode->AssignKey(keyCopy);

            

            traversingBstNode = nullptr; 
        }
        if (this->root != nullptr)
        {
            this->root->AssignParent(nullptr); 
        }

    }
    else 
    {
       
        assert(traversingBstNode->GetParent() != nullptr);

       
        if (traversingBstNode->GetLeftChild() == nullptr && traversingBstNode->GetRightChild() == nullptr)
        {
            
            if (traversingBstNode->GetParent()->GetLeftChild() == traversingBstNode)
            {
                traversingBstNode->GetParent()->AssignLeftChild(nullptr);
            }
            else 
            {
                traversingBstNode->GetParent()->AssignRightChild(nullptr);
            }
        }
        
        else if (traversingBstNode->GetLeftChild() == nullptr)
        {
            
            if (traversingBstNode->GetParent()->GetLeftChild() == traversingBstNode)
            {
                traversingBstNode->GetParent()->AssignLeftChild(traversingBstNode->GetRightChild());
            }
            else
            {
                traversingBstNode->GetParent()->AssignRightChild(traversingBstNode->GetRightChild());
            }
            
            traversingBstNode->GetRightChild()->AssignParent(traversingBstNode->GetParent());
        }
        
        else if (traversingBstNode->GetRightChild() == nullptr)
        {
            
            if (traversingBstNode->GetParent()->GetLeftChild() == traversingBstNode)
            {
                traversingBstNode->GetParent()->AssignLeftChild(traversingBstNode->GetLeftChild());
            }
            else
            {
                traversingBstNode->GetParent()->AssignRightChild(traversingBstNode->GetLeftChild());
            }
            
            traversingBstNode->GetLeftChild()->AssignParent(traversingBstNode->GetParent());
        }
        
        else
        {
            BstNode* rightSubtree = traversingBstNode->GetRightChild();

            
            int minKeyRight;
            bool found = this->min(rightSubtree, minKeyRight);

            assert(found); 

            BstNode* BstNodeCorrespondingToMinKey = this->findBstNode(minKeyRight, rightSubtree);

            

            
            int valueCopy = BstNodeCorrespondingToMinKey->GetValue();
            int keyCopy = minKeyRight;

            
            this->removeBST(minKeyRight, rightSubtree);

            traversingBstNode->AssignValue(valueCopy);
            traversingBstNode->AssignKey(keyCopy);

            
            
            
            
            traversingBstNode = nullptr;
        }
    }

    delete traversingBstNode;

    return ;
}
void LinkedListBST::display() 
{
    InPreorder(root);
    
    

    
}
void LinkedListBST::InPreorder(BstNode* root) //function for ptinting the BST in pre-order
{
    if (root == NULL)
        return;
    // print data of node 
    std::cout << "<" << root->GetKey() << ">" << " " << root->GetValue() << "\n";

    //going to left node
    InPreorder(root->GetLeftChild());

    //going to right
    InPreorder(root->GetRightChild());
}

bool LinkedListBST ::search(int targetKey)
{
  BstNode *temp = root;
  while (temp != nullptr)
  {
    if (temp->GetKey() > targetKey)
    {
      temp = temp->GetLeftChild();
    }
    else if (temp->GetKey() < targetKey)
    {
      temp = temp->GetRightChild();
    }
    else
    {
      return true;
    }
  }
  return false;
}

bool LinkedListBST::exists(int tarGetKey)
{

    BstNode* traversingBstNode = this->findBstNode(tarGetKey);

    
    if (traversingBstNode == nullptr) return false;
    
    else return true;

}

BstNode* LinkedListBST::findBstNode(int tarGetKey)
{   
    return this->findBstNode(tarGetKey, this->root);
}

BstNode* LinkedListBST::findBstNode(int tarGetKey, BstNode* subtree)
{
    BstNode* traversingBstNode = subtree;

    
    while(traversingBstNode != nullptr && traversingBstNode->GetKey() != tarGetKey)
    {
        if (tarGetKey > traversingBstNode->GetKey()) traversingBstNode = traversingBstNode->GetRightChild();
        else traversingBstNode = traversingBstNode->GetLeftChild();
    }

    return traversingBstNode;

}

bool LinkedListBST::max(int &outputKey)
{
    return this->max(root, outputKey);
}

bool LinkedListBST::min(int &outputKey)
{
    return this->min(root, outputKey);
}

bool LinkedListBST::max(BstNode* subtree, int& outputKey)
{
    BstNode* traversingBstNode = subtree;

    if (traversingBstNode == nullptr) return false;

    while(traversingBstNode->GetRightChild() != nullptr)
    {
        traversingBstNode = traversingBstNode->GetRightChild();
    }

    outputKey = traversingBstNode->GetKey();

    return true;
}

bool LinkedListBST::min(BstNode* subtree, int& outputKey)
{
    BstNode* traversingBstNode = subtree;

    if (traversingBstNode == nullptr) return false;

    while(traversingBstNode->GetLeftChild() != nullptr)
    {
        traversingBstNode = traversingBstNode->GetLeftChild();
    }

    outputKey = traversingBstNode->GetKey();

    return true;

}