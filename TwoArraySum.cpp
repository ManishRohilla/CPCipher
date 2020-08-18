using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sa1=0,sa2=0;
		cin>>sa1;
		int e=0;
		vector<int>a;
		for(int i=0;i<sa1;i++)
		{
			cin>>e;
			a.push_back(e);
		}
		cin>>sa2;
		vector<int>b;
		for(int i=0;i<sa2;i++)
		{
			cin>>e;
			b.push_back(e);	
		}
		if(sa1>sa2)
		{
			for(int i=0;i<(sa1-sa2);i++)
			{
				b.insert(b.begin(),0);
			}
			
		}
		if(sa2>sa1)
		{
			for(int i=0;i<(sa2-sa1);i++)
			{
				a.insert(a.begin(),0);
			}
		}
		int s=0,carry=0;
		int sum[a.size()];
		for(int i=a.size()-1;i>=0;i--)
		{
			if(i==0)
			{
				sum[i]=a[i]+b[i]+carry;
				break;
			}
			s=a[i]+b[i]+carry;
			sum[i]=s%10;
			carry=s/10;
		}
		for(int i=0;i<a.size();i++){
			if(i ==0 && sum[i]==0)
			continue;
	  
		cout<<sum[i];
	}
		cout<<endl;
	
	}
}
