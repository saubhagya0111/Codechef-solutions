#include <iostream>
using namespace std;
int divisible(int x)
{
    int temp = x;
    //Numbers divisible by 10 will anyways need no manipulations and zero steops are needed
    if (temp % 10 == 0)
    {
        return 0;
    }
    //If the last digit of the number is 5 it is too be multiplied with 2 so as to make the last digit zero and a single step is required
    else if (temp % 10 == 5)
    {
        return 1;
    }
    //In any other scenerio except the above two its not possible to make the number divisible by 10
    //As only 5*2 yields the last digit as zero which makes the divisibility true
    else
    {
        return -1;
    }
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << divisible(x) << "\n";
    }
    return 0;
}
