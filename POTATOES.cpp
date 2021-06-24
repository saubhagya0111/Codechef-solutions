#include <iostream>
#include <cmath>
#define dontquit int main(void)
using namespace std;
int is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
dontquit
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (int i = 1; i < 100; i++)
        {
            sum = x + y + i;
            if (is_prime(sum) == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
