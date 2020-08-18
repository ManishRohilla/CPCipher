using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int a;
		cin>>a;
		int b=1,dec=0;
		long int temp=a;
		while(temp)
		{
			int d=temp%10;
			temp=temp/10;
			dec=dec+d*b;
			b=b*2;
		}
		cout<<dec<<endl;
		
	}
}
