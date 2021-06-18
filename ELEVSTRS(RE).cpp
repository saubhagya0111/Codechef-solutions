#include <bits/stdc++.h>
using namespace std;
#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
#define long long int ll
#define in(x) cin >> x;
#define input(a, b, c) cin >> a >> b >> c;
#define out(x) cout << x;
#define line cout << "\n";
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
    int v1, v2;
    float e, s;
    input(n, v1, v2);
    float d1 = n * sqrt(2); //This condition was given
    float d2 = n * 2;       //To and fro journey takes 2x time so n is multiplied with 2
    s = d1 / v1;            //Time for stairs
    e = d2 / v2;            //Time for elevator
    if (s > e)
    {
        out("Elevator");
        line;
    }
    else
    {
        out("Stairs");
        line;
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
