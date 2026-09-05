class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }

        int original = x;
        long long reverse_num = 0;

        while(x>0){
            int remainder = x % 10;
            reverse_num=(reverse_num*10)+remainder;
            x/=10;
        }

        if (original == reverse_num){
            return true;
        }
        else{
            return false;
        }

        
    }
};