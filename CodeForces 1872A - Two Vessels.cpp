#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        double moves;
        if(a == b)
        {
            cout << "0" << endl;
        }
        else if(c >= abs(a - b))
        {
            cout << "1" << endl;
        }
        else
        {
            double diff = abs(a - b);
            if(diff>c)
            {
                moves=ceil((double)diff/(2*c));
            }       
            cout <<  moves << endl;
        }
    }
    return 0;
}