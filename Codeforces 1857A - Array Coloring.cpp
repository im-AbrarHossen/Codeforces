#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int sum_even = 0, sum_odd = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
            {
                sum_even += a[i];
            }
            else
            {
                sum_odd += a[i];
            }
        }
        if (sum_even % 2 == 0 && (sum_odd % 2 == 0 && n > 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
