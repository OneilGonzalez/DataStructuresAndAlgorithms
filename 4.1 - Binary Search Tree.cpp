#include<iostream>
using namespace std;

struct BSTNode
{
	int key;
	struct BSTNode*left;
	struct BSTNode*right;
};

void search(BSTNode* p, int el)  {
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
int main()
{
	BSTNode *a= new BSTNode();
	a->key=17;
	a->left=NULL;
	a->right=NULL;

	BSTNode *b= new BSTNode();
	b->key=6;
	b->left=NULL;
	b->right=NULL;

	BSTNode *c= new BSTNode();
	c->key=20;
	c->left=NULL;
	c->right=NULL;

	BSTNode *d= new BSTNode();
	d->key=3;
	d->left=NULL;
	d->right=NULL;

	BSTNode *e= new BSTNode();
	e->key=14;
	e->left=NULL;
	e->right=NULL;

	a->left=b;
	a->right=c;
	b->left=d;
	b->right=e;

	search(a,14);
}
