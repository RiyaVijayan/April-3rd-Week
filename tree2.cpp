/* implement BST*/

#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int info;
	struct node *left;		//node declaration
	struct node *right;
}*root;
class BST
{
	public:					//class declaration
		void find(int, node **, node **);    
		void insert(node *, node *);
		void preorder(node *);
		void inorder(node *);
		void postorder(node *);
		void display(node *, int);
		BST()
		{
			root=NULL;
		}
};
int main()				//main pgm
{
	int choice,num;
	BST bst;
	node *temp;
	while (1)
	{
		cout<<"Operations on BST"<<endl;
		cout<<"1.Insert Element "<<endl;
		cout<<"2.Inorder Traversal"<<endl;
		cout<<"3.Preorder Traversal"<<endl;
		cout<<"4.Postorder Traversal"<<endl;
		cout<<"5.Display"<<endl;
		cout<<"6.Quit"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				temp=new node;
				cout<<"Enter the number to be inserted : ";
				cin>>temp->info;
				bst.insert(root, temp);
				break;
			case 2:
				cout<<"Inorder Traversal of BST:"<<endl;
				bst.inorder(root);
				cout<<endl;
				break;
			case 3:
				cout<<"Preorder Traversal of BST:"<<endl;
				bst.preorder(root);
				cout<<endl;
				break;
			case 4:
				cout<<"Postorder Traversal of BST:"<<endl;
				bst.postorder(root);
				cout<<endl;
				break;
			case 5:
				cout<<"Display BST:"<<endl;
				bst.display(root,1);
				cout<<endl;
				break;
			case 6:
				exit(1);
			default:
				cout<<"Wrong choice"<<endl;

		}
	}
}

void BST::find(int item, node **par, node **loc)  //finding element in tree
{
	node *ptr, *ptrsave;
	if(root==NULL)
	{
		*loc=NULL;
		*par=NULL;
		return;
	}
	if(item==root->info)
	{
		*loc=root;
		*par=NULL;
		return;
	}
	if(item<root->info)
		ptr=root->left;
	else
		ptr=root->right;

	ptrsave=root;

	while(ptr!=NULL)
	{
		if(item==ptr->info)
		{
			*loc=ptr;
			*par=ptrsave;
			return;
		}
		ptrsave=ptr;
		if(item<ptr->info)
			ptr=ptr->left;
		else
			ptr=ptr->right;
	}
	*loc=NULL;
	*par=ptrsave;
}

void BST::insert(node *tree, node *newnode)		//insering ele into tree
{
	if(root==NULL)
	{
		root=new node;
		root->info=newnode->info;
		root->left=NULL;
		root->right= NULL;
		cout<<"Root Node is Added"<<endl;
		return;
	}
	if(tree->info==newnode->info)
	{
		cout<<"Element already in the tree"<<endl;
		return;
	}
	if(tree->info>newnode->info)
	{
		if(tree->left!=NULL)
		{
			insert(tree->left, newnode);	
		}
		else
		{
			tree->left=newnode;
			(tree->left)->left=NULL;
			(tree->left)->right=NULL;
			cout<<"Node Added To Left"<<endl;
			return;
		}
	}
	else
	{
		if(tree->right!=NULL)
		{
			insert(tree->right,newnode);
		}
		else
		{
			tree->right = newnode;
			(tree->right)->left=NULL;
			(tree->right)->right=NULL;
			cout<<"Node Added To Right"<<endl;
			return;
		}	
	}
}
void BST::preorder(node *ptr)			//preorder
{
	if(root==NULL)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	if(ptr!=NULL)
	{
		cout<<ptr->info<<"  ";
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void BST::inorder(node *ptr)					//inorder
{
	if(root==NULL)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->info<<"  ";
		inorder(ptr->right);
	}
}
void BST::postorder(node *ptr)					//postorder
{
	if(root==NULL)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->info<<"  ";
	}
}

void BST::display(node *ptr, int level)				//display
{
	int i;
	if(ptr!=NULL)
	{
		display(ptr->right,level+1);
		cout<<endl;
		if(ptr==root)
			cout<<"Root->:  ";
		else
		{
			for(i=0;i<level;i++)
				cout<<"       ";
		}
		cout<<ptr->info;
		display(ptr->left, level+1);
	}
}
