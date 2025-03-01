class Solution {
public:
    string reverseWords(string s) {
       stringstream obj;
       obj.str(s);
       string token="";
       string res="";
       while(obj>>token)
       {
        res=token+" "+res;
       }
       return {res.begin(),res.end()-1};
    }
};