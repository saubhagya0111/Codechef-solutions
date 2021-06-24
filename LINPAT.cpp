#include <iostream>
#define dontquit int main(void)
using namespace std;

dontquit
{
    ios_base::sync_with_stdio(0);
    int n;
    int i = 0, j = 0;
    cin >> n;
    while (n > 0)
    {
        n -= 2;
        i += 10;
        j += 2;
        cout << i << " " << j << " ";
    }

    return 0;
}
