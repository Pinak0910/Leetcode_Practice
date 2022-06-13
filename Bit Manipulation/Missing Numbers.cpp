class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int result = (n*(n+1))/2;
        // int i = 0;
        // while(i<n){
        //     result-=nums[i];
        //     i++;
        // }
        // return result;
        
        int result=0;
        for(int i =0; i <= nums.size();i++){
            
            if(i < nums.size()){
                result=result^nums[i]^i;
            }else{
                result=result^i;
            }
            
        }
        return result;
    }
};
