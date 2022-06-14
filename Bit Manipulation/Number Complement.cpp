class Solution {
public:
    int findComplement(int num) {
        int cnt = 0,ans=0;
        while(num!=0){
            if(num & 1){
                cnt++;
            }else{
                ans+=pow(2,cnt);
                cnt++;
            }
            num = num >> 1;
        }
        return ans;
    }
};
