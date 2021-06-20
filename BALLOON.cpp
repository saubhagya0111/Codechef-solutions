#include <bits/stdc++.h>
using namespace std;
//Cookoff June'21
#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
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
    in(n);
    int(A[n]);
    incr_loop(0, n)
    {
        in(A[i]);
    }
    int B[7] = {1, 2, 3, 4, 5, 6, 7};
    int c = 0, o = 1;
    i = 0;
    while (c != 7)
    {
        incr_loop(0, n)
        {
            nested_incr_loop(0, 7)
            {
                if (A[i] == B[j])
                {
                    c++;
                    o = i;
                }
            }
        }
    }
    out(o+1);
    //one is added to the output as i is the index of the array and it starts from zero which excludes one problem that has been solved
    line;
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
