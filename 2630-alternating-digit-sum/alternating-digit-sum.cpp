class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;

        int l = s.length();

        for(int i = 0; i<l; i++)
        {
            if(i % 2 == 0)
            {
                sum = sum + (s[i] - '0');
            }
            else
            {
                sum = sum - (s[i] - '0');
            }
        }

        return sum;
    }
};