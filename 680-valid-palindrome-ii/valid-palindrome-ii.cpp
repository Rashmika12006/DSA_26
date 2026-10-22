class Solution {
public:
    bool check(string s) {
        string a = s;
        reverse(a.begin(), a.end());
        return s == a;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) 
        {
            if (s[i] != s[j]) 
            {
                string a = s, b = s;
                a.erase(i, 1);
                b.erase(j, 1);

                return check(a) || check(b);
            }
            i++;
            j--;
        }
        return true;
    }
};