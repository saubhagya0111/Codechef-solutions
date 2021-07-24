#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3;
        int a=0, b=0;
        cin >> a1 >> a2 >> a3;
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        if (a1 > b1)
        {
            a++;
        }
        else if(a1 < b1)
        {
            b++;
        }
        if (a2 > b2)
        {
            a++;
        }
        else if(a2 < b2)
        {
            b++;
        }
        if (a3 > b3)
        {
            a++;
        }
        else if(a3 < b3)
        {
            b++;
        }
        if (a < b)
        {
            cout << "B" << endl;
        }
        else if (a > b)
        {
            cout << "A" << endl;
        }
    }
    return 0;
}
