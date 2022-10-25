#include <bits/stdc++.h>

using namespace std;

int Max(int x)
{
    string s = to_string(x);
    for(char &i : s)
        if(i == '5') i = '6';
    return stoi(s);
}

int Min(int x)
{
    string s = to_string(x);
    for(char &i : s)
        if(i == '6') i = '5';
    return stoi(s);
}
int main()
{
    int a , b;
    cin >> a >> b;
    cout << Min(a) + Min(b) << " " << Max(a) + Max(b);
}
