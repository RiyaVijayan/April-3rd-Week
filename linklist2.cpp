/*find a node*/
#include <iostream>
#include<cstdlib>
using namespace std;

struct node{				//declarea node
	int data;
	node * next;
};

node *newnode(int k){			 //defining new node
	node *temp=(node*)malloc(sizeof(node)); 
	temp->data=k; 
	temp->next=NULL; 
	return temp; 
}

node *addnode(node* head, int k){
	if(head==NULL){
		head=newnode(k);	//to add new node at the end
	}
	else{
		node* temp=head;
		node* node=newnode(k);
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}

	return head;
}

node *createnewLL(){			//to create new linked list
	int data,cont=1;
	node* head=NULL;
	while(cont){
		cout<<"Enter the data of the Node"<<endl;
		cin>>data;
		head=addnode(head,data);
		cout<<"Do you want to continue?(0/1)"<<endl;
		cin>>cont;
	}
	return head;
}

int findnodeinLL(node* head, int data){
	int index=0;              
	node* temp=head;
	while(temp!=NULL){		//finding the node
		if(temp->data==data){         
		return index;               
		}
		temp=temp->next;
		index++;
	}   
	return -1;                  
}


					//main pgm
int main(){
	node* head=createnewLL();

	int data;
	cout<<"Enter the data of the linked list to be found."<<endl;
	cin>>data;
	int index = findnodeinLL(head,data);
	cout<<"It is present at "<<index<< endl;

	return 0;
}
