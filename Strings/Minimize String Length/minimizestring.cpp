class Solution {
public:
    int minimizedStringLength(string s) {
        sort(s.begin(), s.end());
     int i= 1;
     while(i<s.size()){
        if(i>0 && s[i]==s[i-1]){
            s.erase(i-1, 1);
        }
        else{
            i++;
        }
     }
     return s.size();
    }
};