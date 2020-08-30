#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}
};
Node *tailreturn(Node *tail)
{
	return tail;
}
Node* insert()
{
	int data;
	cin>>data;

	Node *head=NULL;
	Node *tail=NULL;
	while (data!=-1)
	{
		Node *newnode=new Node(data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	tailreturn(tail);
	return head;
	
}
void insert_between(Node* head,int i,int data)
{
	Node *temp=head;
	Node* newnode=new Node(data);
	int count=0;
	while(count<i-1)
	{
		temp=temp->next;
		count++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}

void delete_between(int i,Node* head)
{
	Node *temp=head;
	int count =0;
	while(count<i-1)
	{
		temp=temp->next;
		count++;
	}
	Node *a = temp->next;
	Node *b = a->next;
	temp->next = b;
	delete a;

}
void print(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	Node *head=insert();
	print(head);
	int i,data;
	cin>>i>>data;
	insert_between(head,i,data);
	print(head);
	cin>>i;
	delete_between(i,head);
	print(head);
}
