class Solution {
public:
    int maxProduct(int n) {
        int first = 0, second = 0;

        while(n > 0)
        {
            int k = n % 10;

            if(k > first)
            {
                second = first;
                first = k;
            }
            else
            {
                second = max(second, k);
            }

            n = n / 10;
        }

        return first * second;
    }
};