class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        int x,y;
        result.push_back(0);
        for(int i=1;i<=n;i++){
            x = i;
            if(x%2==0){
                result.push_back(result[x/2]);
            }else{
                result.push_back((result[x/2]+1));
            }
        }
        return result;
    }
};
