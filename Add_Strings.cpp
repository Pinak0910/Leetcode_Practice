class Solution {
public:
    string addBinary(string a, string b) {
       reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string ans = "";
        
        int i=0, j = 0, c = 0;
        while(i<a.size() or j<b.size() or c!=0) {
            if(i<a.size()){
                c += a[i]-'0';
                i++;
            }
            if(j<b.size()){
                c += b[j]-'0';
                j++;
            }
            ans += (c%2 + '0');
            c = c / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
