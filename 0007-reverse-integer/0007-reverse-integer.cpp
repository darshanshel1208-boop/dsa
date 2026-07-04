class Solution {
public:
    int reverse(int x) {
        long long order=0;
        long long digit;
        while(x!=0){
            digit=x%10;
            order=(order*10)+digit;
            if(order>INT_MAX || order < INT_MIN)
             return 0;
            x=x/10;
        }
        return order;
    }
};