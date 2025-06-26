class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr) {
        // code here
        int i=1;
        while(i<arr.size())
        {
            
            if(arr[i-1] >= arr[i] && arr[i] <= arr[i+1])
            {
                i+=2;
            }
            else if(arr[i] > arr[i-1])
            {
               swap(arr[i],arr[i-1]);
               if(i+1 < arr.size())
               {
                   if(arr[i] <= arr[i+1])
               {
                   i+=2;
               }
               else
               {
                   swap(arr[i],arr[i+1]);
               }
               }
               else
               {
                   break;
               }
               
                
            }
        }
    }
};