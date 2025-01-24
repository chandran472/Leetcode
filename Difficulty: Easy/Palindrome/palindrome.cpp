//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int temp = n;
        int ld,revn=0;
        while(n>0){
            ld=n%10;
            n=n/10;
            revn=(revn*10)+ld;
        }
        
        if(temp==revn)
            return true;
        else
            return false;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends