#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    vector<int> v1 , v2;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        if(i % 2) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    sort(v1.begin() , v1.end());
    sort(v2.begin() , v2.end() , greater<int>());
    int i = 0 , j = 0;
    while(i < v1.size() && j < v2.size())
    {
        cout << v1[i++] << ' ' << v2[j++] << ' ';
    }
    if(i < v1.size()) cout << v1[i];
    else if(j < v2.size()) cout << v2[j];
    cout << endl;
}
