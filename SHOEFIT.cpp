#include <bits/stdc++.h>
using namespace std;

//Problem Code/Link:
#define incr_loop(i, n) for (i = 0; i < n; i++)
#define decr_loop(i, n) for (i = n; i > 0; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long ll;
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
    ll a, b, c;
    in3(a, b, c);
    if (a == 0 && (b == 1 || c == 1))
    {
        cout << 1 << "\n";
    }
    else if (b == 0 && (a == 1 || c == 1))
    {
        cout << 1 << "\n";
    }
    else if (c == 0 && (a == 1 || b == 1))
    {
        cout << 1 << "\n";
    }
    else if (a == 1 && (b == 0 || c == 0))
    {
        cout << 1 << "\n";
    }
    else if (b == 1 && (a == 0 || c == 0))
    {
        cout << 1 << "\n";
    }
    else if (c == 1 && (a == 0 || b == 0))
    {
        cout << 1 << "\n";
    }
    else
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
