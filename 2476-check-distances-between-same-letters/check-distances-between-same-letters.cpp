class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                int diff=0;
                if(s[i]==s[j])
                {
                  diff=j-i-1;

                  if(diff!=distance[s[i]-'a'])
                  {
                    return false;
                  }
                  break;
                }
            }
        }
      return true;
    }
};