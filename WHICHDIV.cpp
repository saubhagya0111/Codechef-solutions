#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rating;
        cin >> rating;
        if (rating >= 2000)
        {
            cout << 1 << "\n";
        }
        else if (rating < 1600)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
