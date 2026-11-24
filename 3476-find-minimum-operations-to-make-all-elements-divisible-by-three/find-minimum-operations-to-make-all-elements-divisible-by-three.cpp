class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%3!=0){
                if((nums[i]-1)%3==0){
                    op++;
                }
                else if((nums[i]+1)%3==0){
                    op++;
                }
            }
        }
        return op;
    }
};