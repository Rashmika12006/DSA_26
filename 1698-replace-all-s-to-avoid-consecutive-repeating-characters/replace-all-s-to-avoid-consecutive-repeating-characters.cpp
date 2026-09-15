class Solution {
public:
    string modifyString(string s) {
        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '?')
            {
                if((i == 0 || s[i-1] != 'a') && (i == n-1 || s[i+1] != 'a'))
                {
                    s[i] = 'a';
                }
                else if((i == 0 || s[i-1] != 'b') && (i == n-1 || s[i+1] != 'b'))
                {
                    s[i] = 'b';
                }
                else
                {
                    s[i] = 'c';
                }
            }
        }

        return s;
    }
};