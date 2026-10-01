class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int previous_sum=0;
        for(int i=0; i<nums.size(); i++){
            previous_sum += nums[i];  
            nums[i] = previous_sum;
        }
        return nums;
    }
};