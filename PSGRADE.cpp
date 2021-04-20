#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, a1, b1, c1, t1, s, s1;
    cin >> t;
    //t:test cases
    while (t > 0)
    {
        --t;
        cin >> a1 >> b1 >> c1 >> s >> a >> b >> c;
        //a1,b1 and c1 respectively represent the marks required to pass in the subject
        //a,b and c are the marks scored by the chef
        //s:Minimum threshold required to pass the subjects
        //s1:Marks scored by the chef
        s1 = a + b + c;
        //Comparing the criteria as stated in the problem statement using if else condition and then printing the verdict (here:result)
        if (a >= a1 && b >= b1 && c >= c1 && s1 >= s)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
