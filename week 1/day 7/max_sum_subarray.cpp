class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        long s = 1;
        long i = 0;
        long sum1 = 0;
        while (s <= K)
        {
            sum1 += Arr[i];
            i++;
            s++;
        }
        long sum2 = sum1;
        long mx = sum1;
        long j = K;
        i = 0;
        while (j < N)
        {
            sum2 = sum2 + Arr[j] - Arr[i];
            j++;
            i++;
            mx = max(mx, sum2);
        }
        return mx;
    }
};