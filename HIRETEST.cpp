#include <bits/stdc++.h>
using namespace std;
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
    int i, j, n, m, sol, par, x, y;
    in2(n, m);
    in2(x, y);
    incr_loop(0, n)
    {
        char A[m];
        sol = 0, par = 0;
        //Using a nested loop to take the input and then compare them with the desired cases of the problem statement 
        nested_incr_loop(0, m)
        {
            in(A[j]);
            if (A[j] == 'F')
            {
                sol++;
            }
            else if (A[j] == 'P')
            {
                par++;
            }
        }
        //Displaying the output for the conditions accordingly
        if (sol >= x)
        {
            out("1");
        }
        else if (sol == (x - 1) && par >= y)
        {
            out("1");
        }
        else
        {
            out("0");
        }
    }
    out("\n");
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
