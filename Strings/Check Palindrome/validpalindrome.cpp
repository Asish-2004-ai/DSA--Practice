class Solution {
public:

    char lower(char arr){
        if(arr>='a' && arr<='z'){
            return arr;
        }
        else{
            int temp = arr-'A'+'a';
            return temp;
        }
    }

    bool isPalindrome(string s) {
        int st=0;
        int e=s.size()-1;
       
       while(st<e){
         if(!isalnum(s[st])){
            st++;
        }
        else if(!isalnum(s[e])){
            e--;
        }
        else if(lower(s[st])==lower(s[e])){
            st++;
            e--;
        }
        else{
            return false;
        }
       }
        return true;
    }
};