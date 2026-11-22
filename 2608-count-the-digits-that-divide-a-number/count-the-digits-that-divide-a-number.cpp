class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int num2 = num; 
        while(num>0){
            int digit =num%10;
            num/=10;
            if(num2%digit==0){
                ans++;
            }  
        }
        return ans;
    }
};