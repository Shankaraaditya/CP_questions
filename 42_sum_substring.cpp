#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    string s;
    cin >> s;
    long long int sum = 0;
    long long int ANS = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            sum = sum + stoi((s.substr(i, j - i + 1)));
            sum = sum % (1000000007);
        }
    }

    //    ANS=sum%(1000000007);

    cout << sum << endl;

    return 0;
}
