class Solution {
public:
    bool isPowerOfTwo(int n) {
      //1073741824 largest odd
        return n>0 && !(1073741824%n);
    }
};
