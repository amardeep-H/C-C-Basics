#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + (x * y);
        x = x * 2;
        n = n / 10;
    }
    return ans;
}
int octalToDecimal(int n)
{
    int x = 1;
    int y = 0;
    int ans = 0;
    while (n > 0)
    {
        y = n % 10;
        ans = ans + (x * y);
        x = x * 8;
        n = n / 10;
    }
    return ans;
}
int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main()
{
    string n;
    cin >> n;
    cout << hexadecimalToDecimal(n) << endl;
}
