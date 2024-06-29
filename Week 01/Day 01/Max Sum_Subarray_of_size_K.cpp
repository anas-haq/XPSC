class Solution
{
public:
    long maximumSumSubarray(int k, vector<int> &v, int n)
    {
        int l = 0, r = 0;
        long long ans = 0, sum = 0;
        while (r < n)
        {
            sum += v[r];
            if (r - l + 1 == k)
            {

                ans = max(ans, sum);
                sum -= v[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};