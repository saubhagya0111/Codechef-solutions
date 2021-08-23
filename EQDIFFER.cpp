#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1;
        map<int, int> frequency;
        int n, element, frq = 0,result;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            v1.push_back(element);
            frequency[element]++;
            frq = max(frq, frequency[element]);
        }
        map<int, int>::iterator i1;
        // for (i1 = frequency.begin(); i1 != frequency.end(); i1++)
        // {
        //     frq = max(frq, i1->second);
        // }
        result = 0;
        if (v1.size() > 2)
        {
            if (frq == 1)
            {
                // cout << n - 2 << endl;
                result = n - 2;
            }
            else
            {
                // cout << n - frq << endl;
                result = n - frq;
            }
        }
        else
        {
            // cout << 0 << endl;
        }
        cout << result << endl;
    }
}
