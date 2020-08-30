using namespace std;
#include<bits/stdc++.h>
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
Node* insert(int s)
{
	int data=0;
	Node*head=NULL;
	Node*tail=NULL;
	for(int i=0;i<s;i++)
	{
	
		cin>>data;
		Node *newnode=new Node(data);
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
		
	}

	return head;
}
void print(Node *head)
{
	Node * temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
Node* mergesort(Node* head1,Node* head2)
{
	if(head1==NULL)
	return head2;
	if(head2==NULL)
	return head1;
	if(head1->data < head2->data){
	
		head1->next=mergesort(head1->next,head2->next);
		return head1;}
	else
	{
	
		head2->next=mergesort(head1,head2->next);
		return head2;
	}
}

int main()
{
	int n;
	cin>>n;
	Node *head1=insert(n);
	print(head1);
	int n1;
	cin>>n1;
	Node *head2=insert(n1);
	print(head2);
	Node* headF=mergesort(head1,head2);
	print(headF);
}
