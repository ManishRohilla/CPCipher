using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		vector<int>vec;
		int e;
		for(int i=0;i<a;i++)
		{
			cin>>e;
			vec.push_back(e);
		}
		bool flag=true;
		for(int i=0;i<a;i++)
		{
			if(i!=vec[vec[i]])
			flag=false;
			
		}
		cout<<flag<<" ";
	}
}
