class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        string ans;
      for(int i=0;ss>>temp;i++){
        if(i==0){
            ans=temp;
            i++;
        }
        else{
            ans=temp+" "+ans;
        }
      }
        return ans;
    }
};