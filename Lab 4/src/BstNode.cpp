#include "BstNode.h"

BstNode::BstNode(int key, int value, BstNode* parent, BstNode* leftChild, BstNode* rightChild):
key(key), value(value),
parent(parent),
LeftChild(leftChild), RightChild(rightChild)
{

}


BstNode::BstNode()

{


}
