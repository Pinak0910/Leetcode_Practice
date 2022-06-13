class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        int i = 0;
        while(i<s.length()){
            ans = ans^s[i];
            ans = ans^t[i];
            i++;
        }
        ans = ans^t[i];
        return ans;
    }
};
