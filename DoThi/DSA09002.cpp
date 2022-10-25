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
    for(int i = 1 ; i <= n ; i++)
    {
        sort(ke[i].begin() , ke[i].end());
        for(int j : ke[i])
            if(i < j) cout << i << " " << j << endl;
    }
}
