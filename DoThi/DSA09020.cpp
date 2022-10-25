#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ke[n + 1];
    for(int i = 1 ; i <= n ; i++)
    {
        string s;
        getline(cin >> ws , s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp)
        {
            ke[i].push_back(stoi(tmp));
        }
    }
    int a[n + 1][n + 1];
    memset(a , 0 , sizeof(a));
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j : ke[i])
            a[i][j] = a[j][i] = 1;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
