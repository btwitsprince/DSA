class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
     vector<int>ans;
     for(int i=0; i<=order.size()-1; i++){
        bool exists = std::find(friends.begin(), friends.end(), order[i]) != friends.end();
        
        if(exists == true ){
            ans.push_back(order[i]);
        }
    }
        return ans;   
    }
};