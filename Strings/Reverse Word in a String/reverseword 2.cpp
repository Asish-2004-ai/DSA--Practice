class Solution {
public:
    
    void reverse(vector<char> &arr, int first, int last){
        while(first<last){
            swap(arr[first++], arr[last--]);
        }
    }

    string reverseWords(string s) {
        vector<char> ans(s.begin(),s.end());
        int f=0;
        for(int l=0;l<ans.size();l++){
            if(ans[l]==' '){
                reverse(ans, f, l-1);
                f=l+1;
            }
            else if(l == ans.size()-1){
                reverse(ans, f, l);
                f=l+1;
            }
        }
        return string(ans.begin(), ans.end());
    }
};