#include <bits/stdc++.h>
using namespace std;

#define incr_loop(a, b) for (int i = a; i <= b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
#define dontquit int main(void)
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
typedef long long ll;
#define in(x) cin >> x;
#define out(x) cout << x;
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
    int i, j, n, m;
    in(n);
    vi v;
    int element;
    incr_loop(1, 10)
    {
        if (n%i==0)
        {
            element = i;
            v.push_back(element);
        }
    }
    out(*max_element(v.begin(), v.end()));
}
dontquit
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solution();

    return 0;
}
