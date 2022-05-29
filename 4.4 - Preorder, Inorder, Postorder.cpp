//preorder transversal - PLR = print left right.
//inorder transversal - LPR = left print right
//postorder transversal - LRP = left right print
#include<iostream>
#include<queue>
using namespace std;

struct BSTNode
{
	int key;
	struct BSTNode*left=NULL;//same as pointing NULL
	struct BSTNode*right=NULL;
	BSTNode(int data): key(data)
	{
	}
};

void insertnode(BSTNode* &root, int el)
{
	if(root==NULL) //if tree is empty make new node as root.
	{
		root=new BSTNode(el);
		return;
	}
	BSTNode* parentnode=NULL;
	BSTNode* currentnode=root;
	while(currentnode!=NULL) // to find appropriate place to insert a new node
	{
		parentnode=currentnode;
	
		if(currentnode->key >= el)
		{
			currentnode=currentnode->left;
		}
		else
		{
			currentnode=currentnode->right;
		}
	}
	//focuses on parent pointer now
	if(parentnode->key>= el)
	{
		parentnode->left=new BSTNode(el);
	}
	else
	{
		parentnode->right=new BSTNode(el);
	}
}

void preorder(BSTNode* root)
{
	if(root==NULL)
	{
		return;
	}
	
	cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder (BSTNode* root)
{
	if(root==NULL)
	{
		return;
	}
		
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

void postorder(BSTNode* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->key<<" ";
}

int main()
{
int key[]={10,17,5,7,16,4,20,2,6,25,19,3}; //may be switched according to the level
BSTNode*root=NULL;
for(int i=0; i<12;i++)
	{
	insertnode(root,key[i]);
	}
//preorder(root); //print pre order
//inorder(root); //print inorder
postorder(root); //print post order

}
