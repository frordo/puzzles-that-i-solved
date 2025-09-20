// the key to tower of hanoi is to actually play with it
// once the recursion is spotted, it is pretty trivial
// this is also true of some variants of TOH.

#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int start, int end)
{
    int open_space = 6 - start - end;
    if (n == 1)
    {
        cout << start << " " << end << endl;
        return;
    }
    if (n < 1)
    {
        return;
    }
    hanoi(n - 1, start, open_space);
    cout << start << " " << end << endl;
    hanoi(n - 1, open_space, end);
}

int main()
{
    int n;
    cin >> n;
    cout << ((1LL << n) - 1) << endl;
    hanoi(n, 1, 3);
    return 0;
}