 #include <iostream>
 using namespace std;
 #include <LinkedList.h>


 int main()
 {
    LinkedList l1;
    bool x=l1.isEmpty();
    (x==1)?cout<<"It is empty":cout<<"It is not empty";
    cout<<endl;

    l1.addToHead(3);
    cout<<"List after addition of 3 to head is: "<<endl;
    l1.traverse();
    cout<<endl;

    l1.addToHead(73123);
    cout<<"List after addition of 73123 to head is: "<<endl;
    l1.traverse();
    cout<<endl;

    l1.addToHead(56);
    cout<<"List after addition of 56 to head is: "<<endl;
    l1.traverse();
    cout<<endl;

    l1.addToTail(90);
    cout<<"List after addition of 90 to tail is: "<<endl;
    l1.traverse();
    cout<<endl;

    l1.addToTail(27);
    cout<<"List after addition of 27 to tail is: "<<endl;
    l1.traverse();
    cout<<endl;
    //Node *y=l1.HEAD->next;
    
    l1.add(50,l1.HEAD->next);
    cout<<"List after addition of 50 is: "<<endl;
    l1.traverse();
    cout<<endl;

    l1.removeFromHead();
    cout<<"List after deletion is: "<<endl;
    l1.traverse();
    cout<<endl;

    cout<<"Searching for 90 for deletion";
    l1.remove(90);
    l1.traverse();
    cout<<endl;

    cout<<"Searching for 80 for deletion";
    l1.remove(80);
    l1.traverse();
    cout<<endl;

    bool z1=l1.search(29);
    cout<<endl<<"Searching for 29 in list"<<endl;

    if ((z1==true))
    {
        cout<<"The data is found"<<endl;
    }
    else{
        cout<<"The data is not found"<<endl;
    }
    
    bool z2=l1.search(50);
    cout<<endl<<"Searching for 50 in list"<<endl;

    if ((z2==true))
    {
        cout<<"The data is found";
    }
    else{
        cout<<"The data is not found";
    }
    
    cout<<endl<<"Retrieving value of 50";
    Node *z=l1.retrieve(50,NULL);
    cout<<"z="<<z<<endl;
    // cout<<"&z="<<&z;
    

    

 }