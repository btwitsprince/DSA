class Solution {
public:
    int minMoves(vector<int>& nums) {
        int total = 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
            total+=(nums[nums.size()-1]-nums[i]);
        }
        return total;
    }
};