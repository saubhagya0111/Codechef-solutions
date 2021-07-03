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
#define in3(x, y, z) cin >> x >> y >> z;
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
void solution()
{
    int i, j, n, m;
    string s;
    in(s);
    int hole = 0;
    while (s[i]!='\0')
    {
        if (s[i]=='A'|| s[i]=='D'|| s[i]=='O' || s[i]=='P'|| s[i]=='Q'|| s[i]=='R')
        {
            hole += 1;
        }
        else if (s[i]=='B')
        {
            hole += 2;
        }
        i++;
    }
    out(hole);
    line;
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
