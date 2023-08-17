#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> grid(8);
        for (int i = 0; i < 8; ++i)
        {
            cin >> grid[i];
        }
        string word;
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (grid[j][i] != '.')
                {
                    word += grid[j][i];
                }
            }
        }
        cout << word << endl;
    }
    return 0;
}
