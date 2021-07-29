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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//y litres of water consumed per day brought down to (y/2)
//H:Households are present and x: x L of water is
//Consumption of one house= (x+(y/2))*c
void solution()
{
    int i, j, n, m, n1 = 0;
    int h, x, y, c;
    in3(h, x, y);
    in(c);
    int individual = x + (y / 2);
    ll total = individual * h;
    if (total <= c)
    {
        out("yes\n");
    }
    else 
    {
        out("No\n");
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
