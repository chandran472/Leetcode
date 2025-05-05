//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    
    bool isAlpha(char ch)
    {
        return (ch >='A'&& ch <= 'Z') || (ch >='a'&& ch <= 'z');
    }
  
    string reverse(string str) {
        // code here.
        int n=str.size();
        int low=0;
        int high=n-1;
        
        while(low <= high)
        {
            if(!isAlpha(str[low])) low++;
            else if(!isAlpha(str[high])) high--;
            else
            {
                swap(str[low],str[high]);
                low++;
                high--;
            }
        }
        
        return str;
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends