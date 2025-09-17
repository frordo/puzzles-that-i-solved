#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int c = 1, d = 1;

    for (int i = 0; i < n - 1; i++) 
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            c = 1;
        }
        d = max(d, c);
    }
    cout << d;
    return 0;
}

