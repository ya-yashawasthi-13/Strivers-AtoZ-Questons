#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0};
    int n = v.size();
    vector<int> lg;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                lg.push_back(count);
                count = 0;
            }
        }
    }
    if (count > 0)
    {
        lg.push_back(count);
        count = 0;
    }

    int larg = 0;
    for (int i = 0; i < lg.size(); i++)
    {
        if (lg[i] > larg)
        {
            larg = lg[i];
        }
    }
    cout << "The largest consecutive 1's are: " << larg << endl;
    return 0;
}
