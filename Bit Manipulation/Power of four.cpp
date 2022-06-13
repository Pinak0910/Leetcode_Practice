class Solution {
public:
    bool isPowerOfFour(int n) {
        // if(n == 0)
        //     return false;
        // while( n != 1){
        //     if(n % 4 != 0)
        //         return false;
        //     n = n/4;
        // }
        // return true;
        
        if (n <= 0)
            return false;
        //Because for intermediate values ceil and floor values will be different
        return ceil(log10(n) / log10(4)) == floor(log10(n) / log10(4));
    }
};
