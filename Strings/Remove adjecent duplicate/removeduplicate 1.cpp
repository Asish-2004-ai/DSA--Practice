class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<int> ans(s.length(), 0);
        int i=0;
        int n = s.length();
        while(i<n){
            if(i>0 && s[i]==s[i-1]){
                ans[i] = ans[i-1]+1;
            }
            else{
                ans[i] = 1;
            }

            if(ans[i]==k){
                s.erase(i-k+1, k);
                i=i-k;
                if(i<0) i=0;
            }
            else{
                i++;
            }
        }
        return s;
    }
};