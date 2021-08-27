#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        int element;
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            v1.push_back(element);
        }
        sort(v1.begin(), v1.end());
        for (int i = 0; i <n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
