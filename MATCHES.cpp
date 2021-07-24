#include <bits/stdc++.h>
using namespace std;
//Problem Code/Link:MATCHES
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
//0:6,1:2,2:5,3:5,4:4,5:5,6:6,7:3,8:7,9:6
void solution()
{
    int i, j, n, m, n1 = 0;
    ll a, b, result = 0, number = 0, rem;
    in2(a, b);
    result = a + b;
    ll temp = result;
    while (temp > 0)
    {
        rem = temp % 10;
        if (rem == 0)
        {
            number += 6;
        }
        else if (rem == 1)
        {
            number += 2;
        }
        else if (rem == 2)
        {
            number += 5;
        }
        else if (rem == 3)
        {
            number += 5;
        }
        else if (rem == 4)
        {
            number += 4;
        }
        else if (rem == 5)
        {
            number += 5;
        }
        else if (rem == 6)
        {
            number += 6;
        }
        else if (rem == 7)
        {
            number += 3;
        }
        else if (rem == 8)
        {
            number += 7;
        }
        else if (rem == 9)
        {
            number += 6;
        }
        temp /= 10;
    }
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
