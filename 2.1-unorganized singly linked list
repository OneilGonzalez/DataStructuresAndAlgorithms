#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node*next;
};

void display(Node*head)
{
	struct Node*currentnode=head;
		while(currentnode!=NULL)
		{
			cout<<currentnode->data<<endl;
			currentnode=currentnode->next;
		} 
}

void add_node_start(Node**head, int data)
{
	struct Node*newNode=new Node;//define new node
	newNode->data=data;//it initialize the value of node data
	newNode->next=NULL;// it initialize the next point of the node
	newNode->next=(*head);
	(*head)=newNode;
}

void add_node_mid(Node**head, int data, int n) //n is the number of times a program will go through an element of a list
{
	struct Node*newNode=new Node;
	newNode->data=data;
	int counter=1;
	struct Node*currentnode=(*head);
	
	while(counter!=n) // the program will continuously run until it reached n.
	{
		currentnode=currentnode->next;
		counter+=1;
	}
	newNode->next= currentnode->next;
	currentnode->next=newNode;	
}

void add_node_end(Node**head, int data)
{
	struct Node*newNode=new Node;
	newNode->data=data;
	newNode->next=NULL;
	if(*head==NULL)
		(*head)=newNode;
	else
	{
	struct Node*currentnode=(*head);
	
		while(currentnode->next!=NULL)
		{
			currentnode=currentnode->next;
		}
	currentnode->next=newNode;
	}	
}

int main()
{
	struct Node*head;
	head=NULL;	
	add_node_start(&head,10);
	add_node_start(&head,20);
	add_node_start(&head,30);
	add_node_end(&head, 40);
	add_node_mid(&head,50,2);
	display(head);		
}
