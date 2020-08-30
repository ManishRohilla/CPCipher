using namespace std;
#include<bits/stdc++.h>
class Node{
	public:
		int data;
		Node*next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}
};
Node* insert()
{
	int data;
	cin>>data;
	Node*head=NULL;
	Node*tail=NULL;
	while(data!=-1)
	{
		Node*newnode=new Node(data);
		if(head==NULL)
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

void insert_between(int data,int i,Node *head)
{
	Node*temp=head;
	int count=0;
	Node*newnode=new Node(data);
	while(count<i-1)
	{
		temp=temp->next;
		count++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void print(Node* head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{

	
	print(insert());
	Node*head=insert();
	print(head);
	int data,i;
	cin>>data>>i;
	insert_between(data,i,head);
	print(head);

	
}


