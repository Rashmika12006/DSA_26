class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans(n);

        for(int i=0; i<n; i++)
        {
            int j;
            for(j=0; j<m; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    break;
                }
            }
                ans[i]=-1;

                for(int k=j+1; k<m; k++)
                {
                    if(nums2[k]>nums2[j])
                    {
                        ans[i]=nums2[k];
                        break;
                    }
                }
            }
        
        return ans;
    }
};