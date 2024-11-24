class Solution {
public:
    string removeDuplicates(string s) {
        int i=1;
        while( i<s.length()){
            if(i>0 &&  s[i]==s[i-1]){
                s.erase(i-1, 2);
                i--;
            }
            else{
                i++;
            }
        }
            return s;
    }
};

