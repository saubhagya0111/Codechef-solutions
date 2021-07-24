#include <bits/stdc++.h>
using namespace std;

//Problem Code/Link:
#define incr_loop(i, n) for (i = 0; i < n; i++)
#define decr_loop(i, n) for (i = n; i > 0; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long int ll;
#define space cout << ' ';
#define in(x) cin >> x;
#define out(x) cout << x;
#define in3(x, y, z) cin >> x >> y >> z;
#define in2(x, y) cin >> x >> y;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
void solution()
{
    int i, j, n, m, n1 = 0;
    ll x, y;
    cin >> x >> y;
    ll sum = 0, probab;
    sum = x + y;
    if (sum == 1)
    {
        cout << 0.833333 << "\n";
    }
    else if (sum == 2)
    {
        cout << 0.666666 << "\n";
    }
    else if (sum == 3)
    {
        cout << 0.5 << "\n";
    }
    else if (sum == 4)
    {
        cout << 0.333333 << "\n";
    }
    else if (sum == 5)
    {
        cout << 0.166666 << "\n";
    }
    else if (sum == 0)
    {
        cout << 1 << "\n";
    }
    else if (sum >= 6)
    {
        cout << 0 << "\n";
    }
}
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    in(t);

    while (t--)
    {

        solution();
    }

    return 0;
}
