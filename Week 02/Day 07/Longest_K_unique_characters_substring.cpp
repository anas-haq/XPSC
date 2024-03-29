// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        map<char, int> mp;
        int i = 0, j = 0, n = s.size(), ans = 0;
        while (j < n)
        {
            mp[s[j]]++;
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            if (mp.size() == k)
            {
                ans = max(ans, j - i + 1);
            }
            j++;
        }
        if (ans == 0)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};