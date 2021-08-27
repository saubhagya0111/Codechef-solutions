#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int c = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (i % 9 == 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
