//Problem Code:T20MCH
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, o, c;
    //r:runs scored by team A,o:Overs remaining in the T-20 match,c:Runs already on the score board by the Team B
    cin >> r>>o>>c;
    /*Approach:-
    1.Declared a variable to determine the maximum number of runs possible in next overs
    2.Used an if condition if there is a possibility of winning the game by comparing the maximum possible runs with the target
    3.Displaying the possibility post the determination
    */
    float max = (20 - o) * 36;
    if (max > (r - c))
    {
        cout << "\nYes" << endl;
    }
    else if (max <= (r - c))
    {
        cout << "\nNo" << endl;
    }
    return 0;
}
/* Link to the problem:- Appeared in Div 3 in March Codechef Starters March'21
https://www.codechef.com/START2C/problems/T20MCH */
