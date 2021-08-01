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
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define out2(x, y) cout << x << ' ' << y;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
typedef set<int> si;
typedef set<char> scr;
typedef set<string> sst;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
void solution()
{
    int i, j, n, m, n1 = 0, element;
    in2(n, m);
    vi v;
    ll easy = 0, hard = 0;
    incr_loop(n1, n)
    {
        in(element);
        if (element >= (m / 2))
        {
            easy++;
        }
        else if (element <= (m / 10))
        {
            hard++;
        }
        v.push_back(element);
    }
    if (easy == 1 && hard == 2)
    {
        out("yes\n");
    }
    else
    {
        out("no\n");
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
