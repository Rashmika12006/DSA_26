class Solution {
public:

int SumSquared(int n)
{
    int sum=0;
    while(n>0)
    {
        int dig=n%10;
        sum = sum+ dig*dig;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
       int slow=SumSquared(n);
       int fast=SumSquared(SumSquared(n));
     
     while(fast != slow)
     {
        slow=SumSquared(slow);
        fast=SumSquared(SumSquared(fast));
     }
     return slow==1;
    }
};