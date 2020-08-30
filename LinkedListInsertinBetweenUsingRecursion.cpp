using namespace std;
#include<bits/stdc++.h>
class Node{
	public:
		int data;
		Node* next;
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
	Node *head=NULL;
	Node* tail=NULL;
	while(data!=-1)
	{
		Node *newnode=new Node(data);
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
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
void insert_between(int data,int i,Node* head)
{
	if(head==NULL and i==0)
	{
		Node *newnode=new Node(data);
		head=newnode;
		return;
	}
	if(i==1)
	{
		Node* newnode=new Node(data);
		newnode->next=head->next;
		head->next=newnode;
		return;
	}
	else
	insert_between(data, i-1,head->next);
	
}
int main()
{
	Node *head=insert();
	print(head);
	int i,data;
	cin>>i>>data;
	insert_between(data,i,head);
	print(head);
}

