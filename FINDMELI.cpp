#include <bits/stdc++.h>
using namespace std;

#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
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
    int k, flag = 0;
    in2(n, k);
    int A[n];
    incr_loop(0, n)
    {
        in(A[i]);
    }
    incr_loop(0, n)
    {
        if (A[i]==k)
        {
            out(1);
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        out(-1);
    }
}
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solution();

    return 0;
}
