class Solution {
public:
    int reverse(int x) {
        long long int s = 0;
        long long int t = x;
        if(x == 0)
            return 0;
        if(x < 0)
            t = -t;
        while(t != 0)
        {
            int tmp = t % 10;
            s = s * 10 + tmp;
            t /= 10;
        }
        if(s > INT_MAX) /*必须要注意反转后的数是不是大于int的最大值*/
            return 0; 
        if(x < 0)
            s = -s;
        return s;
    }
};