class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while(x != 0){
            int disit = x % 10;
            x/=10;

             if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && disit > 7)) {
            return 0; 
        }
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && disit < -8)) {
            return 0;
        }

            ans = ans*10+disit;
        }
        return ans;
    }
};