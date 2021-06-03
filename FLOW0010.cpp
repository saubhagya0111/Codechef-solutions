#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        if (ch == 'C' || ch == 'c')
        {
            cout << "Cruiser\n";
        }
        else if (ch == 'B' || ch == 'b')
        {
            cout << "BattleShip\n";
        }
        else if (ch == 'D' || ch == 'd')
        {
            cout << "Destroyer\n";
        }
        else if (ch == 'F' || ch == 'f')
        {
            cout << "Frigate\n";
        }
    }
    return 0;
}
