class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.size();
        if(!length)
            return true;
        for(int i = 0, j = length-1; i < j;)
        {
            
            while(!isalnum(s[i]) && i < j)
                i++;
            while(!isalnum(s[j]) && i < j)
                j--;
            if(i >= j)
                return true;
            char first = tolower(s[i]);
            char second = tolower(s[j]);
            if(first == second)
            {
                i++;
                j--;
            }
            else 
                return false;
        }
        return true;
    }
};