#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, D, d, a, b, c;
    float p;
    cin >> t;
    while (t > 0)
    {
        t--;
        /*D:Number of days
        d:distance that can be covered in a day
        a:Prize if the first condition is satisfied
        b:Prize if the second condition is satisfied
        c:Prize if the third condition is satisfied*/
        cin >> D >> d >> a >> b >> c;
        //Calculation of maximum distance that an individual can cover in the stipulated time
        p = D * d;
        //Checking the appropriate conditions using if/else statements
        if (p < 10)
        {
            cout << 0 << endl;
            //Displaying 0 as the chef is not eligible to get the prize
        }
        else if (p >= 10 && p < 21)
        {
            cout << a << endl;
        }
        else if (p >= 21 && p < 42)
        {
            cout << b << endl;
        }
        else if (p >= 42)
        {
            cout << c << endl;
        }
    }

    return 0;
}
