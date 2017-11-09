#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;

}node;

node *createNode(node *,int);



int  main()
{
	node *head;
	head=createNode(head,1);
	head=createNode(head,2);
	head=createNode(head,3);

	return 0;
}

node *createNode(node *head,int data)
{
	node *p;
	if (head==NULL)
	{
		head=(node*)malloc(sizeof(node));
		p=head;
		p->next=NULL;
		p->prev=NULL;
	}
	else
	{
		node *temp;
		temp=(node*)malloc(sizeof(node));
		p->next=temp;
		temp->prev=temp;
		p=temp;
		p->next=NULL;


	}
	p->data=data;

	return head;
}
