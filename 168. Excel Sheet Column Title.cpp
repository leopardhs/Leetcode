class Solution {
public:
    string convertToTitle(int n) {
        string s;
        int m = 0;
        while(n != 0)
        {
            if(n <= 26)
            {   
                s.insert(s.begin(), n);
                break;
            }
            m = n % 26;
            s.insert(s.begin(), m);
            n = n / 26;
        }
        cout << s;
        for(int i = s.size()-1; i >= 0 ; i--)
        {
            if(s[i] == 0)
            {
                int j = i;
                while(s[j] == 0 && j - 1 >= 0)
                {
                    s[j-1]--;
                    s[j] += 26;
                    j--;
                }
            }
            s[i] += 64;
        }
        if(s[0] == 64)
            s.erase(s.begin());
        return s;
    }
};