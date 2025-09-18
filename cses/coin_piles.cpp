// a rough sketch of my solution process
//  the first thing that i noticed was the case a = 2b, as in a = 3 and b = 6, for which the strategy
//  is to pick 1 coin a times and 1 coin b times
//  another thing i noticed was that each time we take away three coins
//  so (a+b) == 0 (mod 3)
//  but this is not sufficient. consider the case a = 11 and b = 4.
//  so there are (11+4)/3 = 5 moves we may make. but even if all 5 moves were to take away one coin
//  we could not empty b. therefore i concluded
//  (a+b)/3 < a,b < 2(a+b)/3
//  it's pretty easy to show all values in between are achievable. done!
// this code passes, albeit a bit slow.

#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
        }
        else if (a * b == 0)
        {
            cout << "NO" << endl;
        }
        else if ((a + b) % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (a <= 2 * b && b <= 2 * a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}