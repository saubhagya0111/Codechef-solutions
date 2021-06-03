#include <bits/stdc++.h>
//Editorial was refereed as I couldn't solve the problem wrt RE:(Refereed Editorial)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << max(a, b) << " " << a + b << endl;
        //Refer the case of the union and interesection of the sets
        //Minimum occurs when the maximum of the observations is considered and maximum is the sum of the observations
    }
    return 0;
}
