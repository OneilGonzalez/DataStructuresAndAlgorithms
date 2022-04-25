#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node*next;
	struct Node*prev;
};

void display(Node*head,Node*tail)
{
	struct Node*currentnode=head->next;
		while(currentnode!=tail)
		{
			cout<<currentnode->data<<endl;
			currentnode=currentnode->next;
		}
}

void addbeginning(struct Node** head, int data)
{
	struct Node*newnode=new Node; //create new node
	newnode->data=data; //add data
	newnode->next=(*head)->next;
	((*head)->next)->prev=newnode;
	(*head)->next=newnode; // from head it goes to the next input to make it the current node
	newnode->prev=*head;
}

void addmiddle(Node**head, int data, int n)
{
	struct Node*newnode=new Node;
	newnode->data=data;
	int counter=1;
	struct Node*currentnode=(*head)->next; //n= h->1->2-> add here
	
	while(counter!=n)
	{
		currentnode=currentnode->next; //if tail newnode=newnode->prev;
		counter+=1;
	}
	//now that it reaches the middle, the thing that you need to do is to connect
	newnode->prev=currentnode;
	newnode->next=currentnode->next;
	(currentnode->next)->prev=newnode;
	currentnode->next=newnode;
}

void addending(struct Node** tail, int data)
{
	struct Node*newnode=new Node;
	newnode->data=data;
	newnode->prev=((*tail)->prev);
	((*tail)->prev)->next=newnode;
	newnode->next=(*tail);
	(*tail)->prev=newnode;	
	//before new node->
}

int main()
{
/* Initialize nodes */
struct Node *head= new Node;
head->prev=NULL;
struct Node *tail= new Node;
tail->next=NULL;
head->next=tail;
tail->prev=head;
addbeginning(&head,10); // u can do here is that (addbeggining/ending/middle then put (&head, number u chose)
addbeginning(&head,20);
addbeginning(&head,30);
addending(&tail,40);
addmiddle(&head,50,3);
display(head,tail);
}
