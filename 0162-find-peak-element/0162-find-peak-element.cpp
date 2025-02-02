class Solution {
public:
    int findPeakElement(vector<int>& arr) {
          int n=arr.size();
        
        if(n==1) return 0;
        if(arr[0]>arr[1])
        {
            return 0;
        }
        if(arr[n-1]>arr[n-2])
        {
            return n-1;
        }
        
        int ind=0;
        
        int left=0;
        int right=0;
        for(int i=1;i<n;i++)
        {
            right=i+1;
            if(arr[i]>arr[left] && arr[i]>arr[right])
            {
                ind=i;
                break;
            }
            else
            {
                if(right<n)
                {
                    right++;
                    left++;
                }
                else
                    break;
            }
        }
        return ind;
    }
};