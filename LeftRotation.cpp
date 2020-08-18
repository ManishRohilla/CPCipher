using namespace std;
#include<bits/stdc++.h>
void rightrotate(int a[],int n)
{
	int temp=a[n-1],i;
	for(int i=0;i<n;i++)
	{
		a[i+1]=a[i];
	}
	a[0]=temp;
}
void right(int a[],int  d,int n)
{
	for(int i=0;i<d;i++)
	rightrotate(a,n);
}
void leftrotate(int a[],int n)
{
	int temp=a[0],i;
	for(int i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
void left(int a[],int  d,int n)
{
	for(int i=0;i<d;i++)
	leftrotate(a,n);
}
int main()
{
	int n;
	cin>>n;
	int d;
	cin>>d;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	left(a,d,n);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	right(a,d,n);
		for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
