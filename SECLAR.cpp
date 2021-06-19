#include <bits/stdc++.h>
using namespace std;

#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
typedef long long ll;
#define in(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int>
    vi;
typedef vector<char> vc;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
void solution()
{
    int i, j, n;
    int a, b, c;
    in(a, b, c);
    int m = a > b ? a > c ? a : c : b > c ? b
                                          : c;
    if (m==a)
    {
        out(max(b, c));
    }
    else if (m==b)
    {
        out(max(a, c));
    }
    else if (m==c)
    {
        out(max(a, b));
    }
}
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solution();

    return 0;
}
