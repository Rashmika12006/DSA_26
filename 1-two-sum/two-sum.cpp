class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;

        for(int i=0;i<n;i++)
        {
            sum=target-nums[i];

            for(int j=1;j<n;j++)
            {
                if(i!=j && nums[j]==sum)
                {
                    return {i,j};
                }
            }

        }
        return {};
    }
};