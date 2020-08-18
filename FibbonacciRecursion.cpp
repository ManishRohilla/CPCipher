using namespace std;
#include<bits/stdc++.h>
int fibb(int n)
{
	if(n==0 )
	return 0;
	if( n==1)
	return 1;
	return fibb(n-1)+fibb(n-2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		cout<<fibb(i);
	}
}

