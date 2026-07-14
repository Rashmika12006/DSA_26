class Solution {
public:
    int minimumChairs(string s) {
        
        int count=0;
        int maxcount=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'E')
            {
                count++;
            }
            else if(s[i] == 'L')
            {
                count--;
            }
            maxcount= max(maxcount,count);
        }
        return maxcount;
    }
};