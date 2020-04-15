/* link list*/
#include <iostream>
using namespace std;
  
struct node{				 //Declare Node
    int num;
    node *next;
};
 
struct node *head=NULL;			//declare head node 
void insertnode(int n){
    struct node *newnode=new node;
    newnode->num=n;			//insert node at start
    newnode->next=head;
    head=newnode;
}
 
void display(){
    if(head==NULL){			//printing all nodes
        cout<<"List is empty!"<<endl;
        return;
    }
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
void deleteitem(){			//deleting node from start
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<head->num<<" is removed."<<endl;
    head=head->next;
}
int main(){
     
    display();
    insertnode(10);
    insertnode(20);
    insertnode(30);
    insertnode(40);
    insertnode(50);
    display();
    deleteitem();
    deleteitem();
    deleteitem();
    deleteitem();
    deleteitem();
    deleteitem();
    display();
    return 0;
}
