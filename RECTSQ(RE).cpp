#include <bits/stdc++.h>
using namespace std;
#define incr_loop(i, n) for (i = 0; i < n; i++)
#define decr_loop(i, n) for (i = n; i > 0; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long int ll;
#define space cout << ' ';
#define in(x) cin >> x;
#define out(x) cout << x;
#define in3(x, y, z) cin >> x >> y >> z;
#define in2(x, y) cin >> x >> y;
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
    int i, j, n, m, n1 = 0;
    ll a, b;
    in2(a, b);
    //Finding out the gcd as the square of the area will have the side equivalent to the highest common factor of the sides
    ll side = __gcd(a, b);
    //In order to find the maximum number of squares that can be carved out of the the rectangle (unitary method)
    ll number = (a * b) / pow(side, 2);
    out(number);
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
