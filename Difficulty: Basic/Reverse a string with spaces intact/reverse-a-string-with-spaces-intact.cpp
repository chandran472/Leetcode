//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:

    string reverseWithSpacesIntact(string s) {
        // code here.
        int n=s.size();
        int low=0;
        int high=n-1;
        
        while(low < high)
        {
            if(s[low] == ' ') ++low ;
            else if(s[high] == ' ')--high;
            else
            {
                swap(s[low],s[high]);
                low++;
                high--;
            }
        }
        
        return s;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends