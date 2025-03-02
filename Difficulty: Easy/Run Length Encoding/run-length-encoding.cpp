//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string encode(string s) {
        int n=s.size();
        int ind=0,i=0;
        string res;
        while(i<n)
        {
            char cur_char=s[i];
            int cnt=0;
            while(i<n && cur_char == s[i])
            {
                cnt++;
                i++;
            }
            
            res+=cur_char;
            ind++;
            
            
           
                string s1=to_string(cnt);
                for(char ch : s1)
                {
                    res+=ch;
                    ind++;
                }
               
            
        }
        return res;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends