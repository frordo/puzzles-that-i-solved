#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1\n";
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }

    vector<int> o;
    vector<int> e;

    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            e.push_back(i);
        }
        else
        {
            o.push_back(i);
        }
        return 0;
    }

    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }

    for (int i = 0; i < o.size(); i++)
    {
        cout << o[i] << " ";
    }
}
