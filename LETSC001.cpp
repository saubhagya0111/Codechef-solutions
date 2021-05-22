#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag, c = 0; //Initializing the counter=0
    //taking the input from the user
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        flag = 0;
        //Initializing the flag variable as 0
        for (int j = 2; j <= sqrt(i); j++)
        //secondary loop will function till sqrt of the number the rationale being that if the number is non prime you'll find at least one factor of the number from 2 to sqrt(number)
        {
            if (i % j == 0)
            {
                flag = 1;
                //If the number is non prime the loop terminates
                break;
            }
        }
        if (flag == 0)
        {
            //Incrementing the value of the counter variable whenever a prime number is found
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
