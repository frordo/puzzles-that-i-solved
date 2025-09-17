#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a] = true;
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i] != true)
        {
            cout << i << "\n";
            break;
        }
    }
}