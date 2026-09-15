class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
       vector<int>answer(n);
       
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(j>i && prices[j]<=prices[i])
            {
                answer[i]=prices[i]-prices[j];
                break;
            }
            else
            {
                answer[i]=prices[i];
            }
        }
       }
       return answer;
    }
};