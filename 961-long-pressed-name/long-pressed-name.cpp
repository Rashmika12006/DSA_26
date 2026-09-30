class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        if(typed.length() < name.length())
        {
            return false;
        }

        int i = 0;

        for(int j = 0; j < typed.length(); j++)
        {
            if(i < name.length() && name[i] == typed[j])
            {
                i++;
            }
            else if(j > 0 && typed[j] == typed[j-1])
            {
                continue;
            }
            else
            {
                return false;
            }
        }

        if(i == name.length())
        {
            return true;
        }

        return false;
    }
};