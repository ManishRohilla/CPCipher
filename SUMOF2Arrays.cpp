using namespace std;
#include<bits/stdc++.h>
int calSumUtil(vector<int> arr1,vector<int> arr2,int n,int m)
{
	cout<<"Fun2"<<endl;
	int i=n-1,j=m-1,s=0,k=n-1,carry=0;
	int sum[k];
	while(j>=0)
	{
		s=arr1[i]+arr2[j]+carry;
		
		sum[k]=s%10;
		carry=s/10;
		k--;
		j--;
		i--;
	}
	cout<<"Fun2.1"<<endl;
	while(i>=0)
	{
		sum[k]=arr1[i]+carry;
		sum[k]=s%10;
		carry=s/10;
		i--;
		k--;
	}
	cout<<"Fun2.2"<<endl;
	int an=0;
	if(carry)
	an=10;
	for(int i=0;i<n;i++)
	{
		an=an+sum[i];
		an=an*10;
	}
	cout<<an<<endl;
   return an/10;
}

int calSum(vector<int> arr1,vector<int> arr2,int n,int m)
{ 
    // Making first array which have 
    // greater number of element 
    cout<<"Fun1";
    if (n >= m) 
        return calSumUtil(arr1, arr2, n, m); 
  
    else
        return calSumUtil(arr2, arr1, m, n); 
} 

int main()
{
	int t;
	cin>>t;
	cout<<endl;
	while(t--)
	{
		int sa1,sa2;
		cin>>sa1>>sa2;
		cout<<endl;
		vector<int>arr1;
		vector<int>arr2;
		int a=0;
		for(int i=0;i<sa1;i++)
		{
			cin>>a;
			arr1.push_back(a);
		}
		cout<<endl;
		for(int i=0;i<sa1;i++)
		{
			cout<<arr1[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<sa2;i++)
		{
			cin>>a;
			arr2.push_back(a);
		}
		cout<<endl;
		for(int i=0;i<sa2;i++)
		{
			cout<<arr2[i]<<" ";
		}
		cout<<endl;
		cout<<calSum(arr1,arr2,sa1,sa2);
	}

	
}

