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

void levelorder(BSTNode* root)
{
	//all should be pointed to null as it needs to create another order which is 10,5,17,3,7,15,20,6,9,16
	//in order, first in first out, 
	queue<BSTNode*>Q;
	
	Q.push(root);
	
	while(!Q.empty())
	{
		BSTNode*currentnode=Q.front();
		cout<<currentnode->key<<" ";
		Q.pop();
		if(currentnode->left!=NULL)
		{
			Q.push(currentnode->left);
		}
		if(currentnode->right!=NULL)
		{
			Q.push(currentnode->right);
		}
		
	}
	
}

int main()
{
int key[]={10,17,5,20,7,15,3,16,9,6}; //may be switched according to thewi
BSTNode*root=NULL;
for(int i=0; i<10;i++)
	{
	insertnode(root,key[i]);
	}
levelorder(root);

}
