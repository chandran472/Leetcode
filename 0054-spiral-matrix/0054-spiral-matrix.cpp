class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>vec;
        int l=0,t=0,r=m-1,b=n-1;
        while(t<=b && l<=r)
        {
            for(int i=l;i<=r;i++)
            {
                vec.push_back(matrix[t][i]);
            }
            t++;

            for(int i=t;i<=b;i++)
            {
                vec.push_back(matrix[i][r]);
            }
            r--;

            if(t<=b)
            {
                for(int i=r;i>=l;i--)
                {
                    vec.push_back(matrix[b][i]);
                }
                b--;
            }

             if(l<=r)
            {
                for(int i=b;i>=t;i--)
                {
                    vec.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return vec;
    }
};