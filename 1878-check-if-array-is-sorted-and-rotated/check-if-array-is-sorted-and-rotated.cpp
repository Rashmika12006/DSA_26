class Solution {
public:
    bool check(vector<int>& nums) {

       int n=nums.size();
       vector<int>ans(n);
      
       for(int i=0;i<n;i++)
       {
         ans[i]=nums[i]; 
       } 
       sort(ans.begin(),ans.end());
       
       for(int x=0;x<n;x++)
       {
         int count=0;
       for(int j=0;j<n;j++)
       {
        if(ans[j]==nums[(j+x)%nums.size()])
        {
            count++;
        }
        if(count==nums.size())
        {
            return true;
        }
       }
       }
       return false;
    }
};