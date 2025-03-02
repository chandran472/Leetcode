class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int ind=0,i=0;
        while(i<n)
        {
            char cur_char=chars[i];
            int cnt=0;

            while(i<n && cur_char == chars[i])
            {
                cnt++;
                i++;
            }

            chars[ind]=cur_char;
            ind++;

            if(cnt>1)
            {
                string s=to_string(cnt);
                for(char ch : s)
                {
                    chars[ind]=ch;
                    ind++;
                }
            }
        }
        return ind;

    }
};