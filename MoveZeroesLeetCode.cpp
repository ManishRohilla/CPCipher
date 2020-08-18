 using namespace std;
 #include<bits/stdc++.h>

 void moveZeroes(vector<int>& nums) {
 	int count=0;
        for(int i=0;i<nums.size();i++)
        {
        	if(nums[i]!=0)
        	{
        		nums[count++]=nums[i];
        	}
		}
		while(count<nums.size())
		{
			nums[count++]=0;
		}
		for(int i=0;i<nums.size();i++)
		cout<<nums[i]<<" ";
    }
    int main()
    {
    	vector<int>nums{1,0,3,0,12};
    	moveZeroes(nums);
    	
	}
