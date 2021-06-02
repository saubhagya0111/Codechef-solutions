#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, rem, sum;
    cin >> t;
    while (t > 0)
    {
        --t;
        cin >> n;
        // int temp = n;
        sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum += rem;
            n /= 10;
        }
        cout << sum << "\n";
    }

    return 0;
}
