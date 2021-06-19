#include <bits/stdc++.h>
using namespace std;
#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
#define long long int ll
#define in(x) cin >> x;
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
    int A[10][10];
    int c = 0;
    incr_loop(0, 10)
    {
        nested_incr_loop(0, 10)
        {
            in(A[i][j]);
            if (A[i][j] <= 30)
            {
                c++;
            }
        }
    }
    if (c>=60)
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
