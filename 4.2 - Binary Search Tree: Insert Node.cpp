#include<iostream>
using namespace std;

struct BSTNode
{
	int key;
	struct BSTNode*left=nullptr;//same as pointing NULL
	struct BSTNode*right=nullptr;
	BSTNode(int data): key(data)
	{
	}
};

void search(BSTNode* p, int el)  
{
	bool found=false;
		while (p != NULL)
		{
		
			if (el == p->key) // is it equal to the key youre looking for? if not go next line
			{
				found=true;
				break;
				}
			else if (el < p->key) //is it less than the key youre looking for? if not go to the next line // go left if yes
			{
			 	p = p->left;
			}
			else //is it greater than the key youre looking for? if not go to the next line // go right if yes
			{
				p = p->right;
			}
				
		}
		cout<<found;
}

void insertnode(BSTNode* &root, int el)
{
	if(root==nullptr) //root= in which placement will the new node be placed.
	{
		root=new BSTNode(el);
		return;
	}
	BSTNode* parentnode=nullptr;
	BSTNode* currentnode=root;
	while(currentnode!=nullptr)
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

int main()
{
int key[]={10,15,5,7,12,9,20};
BSTNode*root=nullptr;
for(int i=0; i<7;i++)
{
	insertnode(root,key[i])
}
