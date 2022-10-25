#include <bits/stdc++.h>

using namespace std;
char c , x[26];
int k;

void in()
{
    for(int i = 1 ; i <= k ; i++)
        cout << x[i];
    cout << endl;
}

void Try(int i)
{
    for(char j = x[i - 1] ; j <= c ; j++)
    {
        x[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}
int main()
{
    cin >> c >> k;
    x[0] = 'A';
    Try(1);
}
