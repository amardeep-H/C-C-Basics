#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string restOfTheString = s.substr(1);
    reverse(restOfTheString);
    cout << s[0] << endl;
}
int main()
{
    reverse("binod");

    return 0;
}