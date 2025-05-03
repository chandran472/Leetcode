//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
         long long n = arr.size();
         vector<long long> odd;
         vector<long long> even;
         
         for(long long i=0;i<n;i++)
         {
             if(arr[i] % 2 == 0) even.push_back(arr[i]);
             else odd.push_back(arr[i]);
         }
         
         sort(even.begin(),even.end());
         sort(odd.begin(),odd.end(),greater<int>());
         
         for(int i=0;i<odd.size();i++)
         {
             arr[i]=odd[i];
         }
         
         int eind = 0;
         for(int i=odd.size();i<n;i++)
         {
             arr[i]=even[eind];
             eind++;
         }
    }
};


//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends