#include <bits/stdc++.h>
using namespace std;

#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
#define dontquit int main(void)
#define long long int ll
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
    //Set will be used as it can have only unique values which will ultimately ease the job
    //Error committed used <v> instead of sets
    set<int> s1;
    in2(n, m);
    incr_loop(0, n)
    {
        int x;
        in(x);
        s1.insert(x);
    }
    if (s1.size()<m)
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
