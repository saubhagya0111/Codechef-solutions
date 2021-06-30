#include <bits/stdc++.h>
using namespace std;

#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
#define dontquit int main(void)
typedef long long int ll;
#define space cout << ' ';
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in4(x, y, z, a) cin >> x >> y >> z >> a;
#define out(x) cout << x;
#define line cout << endl;
#define str_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//June'21 Starters
void solution()
{
    int i, j, n, m;
    int a, b, c, d;
    in4(a, b, c, d);
    if ((a + c) == 180 || (b + d) == 180)
    {
        out("Yes\n");
    }
    else
    {
        out("No\n");
    }
    
}
dontquit
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
