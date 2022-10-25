#include <bits/stdc++.h>

using namespace std;
vector <string> v;
int a[] = {0 , 2};
int x[4];

void xuli()
{
    string s = "";
    for(int i = 1 ; i < 4 ; i++)
        s += char(x[i] + '0');
    v.push_back(s);
}

void Try(int i)
{
    for(int j = 0 ; j <= 1 ; j++)
    {
        x[i] = a[j];
        if(i == 3) xuli();
        else Try(i + 1);
    }
}
int main()
{
    string s[] = {"02" , "20" , "22"};
    Try(1);
    for(string i : s)
    {
        for(string j : v)
            cout << i << "/02/2" << j << endl;
    }
    //for(string j : v) cout << j;
}
