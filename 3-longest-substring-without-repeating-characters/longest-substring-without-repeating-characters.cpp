class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_map<char, int> mp;
        int l = 0;

        for (int h = 0; h < n; h++) {
            while (mp[s[h]] > 0) {
                mp[s[l]]--;
                l++;
            }

            mp[s[h]]++;

            maxLength = max(maxLength, h - l + 1);
        }

        return maxLength;
    }
};