using namespace std;
#include<bits/stdc++.h>
struct Node{
	int data;
	Node * next;
};
Node * newNode(int data)
{
	Node *newnode=new Node;
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
int length(Node *head)
{
	Node*temp=head;
	int count=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	return count;
}
Node * middle(Node *head)
{
	Node*slow=head;
	Node*fast=head->next;
	while (fast!=NULL and fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
			
}

Node * insert()
{
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1)
	{
		Node *newnode= newNode(data);
		if (head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
void print(Node * head)
{
	Node* temp= head;
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

	cout<<length(head)<<endl;
	Node * mid=middle(head);
	cout<<mid->data<<" ";
	
}
