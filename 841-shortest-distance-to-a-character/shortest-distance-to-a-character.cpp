class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int l = s.length();
        vector<int> ans(l, 0);

        for(int i = 0; i < l; i++)
        {
            int left = l;
            int right = l;
            
            for(int j = i; j >= 0; j--)
            {
                if(s[j] == c)
                {
                    left = i - j;
                    break;
                }
            }

            for(int j = i; j < l; j++)
            {
                if(s[j] == c)
                {
                    right = j - i;
                    break;
                }
            }

            ans[i] = min(left, right);
        }

        return ans;
    }
};