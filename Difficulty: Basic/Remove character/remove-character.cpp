//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        int n=str1.size();
        int m=str2.size();
        string str3;
        
        map<char,int>mp;
        for(int i=0;i<m;i++) mp[str2[i]]++;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(str1[i]) == mp.end()) str3+=str1[i];
        }
        
        return str3;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1;
        cin >> str2;
        Solution ob;
        cout << ob.removeChars(str1, str2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends