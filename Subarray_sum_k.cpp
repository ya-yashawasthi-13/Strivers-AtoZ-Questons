#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestsubarray(vector<int> &a, long long k)
{
    map<long long, int> presum;
    long long sum = 0;
    int maxlen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if (presum.find(rem) != presum.end())
        {
            int len = i - presum[rem];
            maxlen = max(maxlen, len);
        }
        if (presum.find(sum) == presum.end())
        {
            presum[sum] = i;
        }
    }
    return maxlen;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    long long k = 12;

    int m;
    m = longestsubarray(a, k);
    cout << m << endl;
    return 0;
}
