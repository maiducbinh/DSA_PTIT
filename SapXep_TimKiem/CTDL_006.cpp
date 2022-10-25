#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    unordered_set<int> s;
    for(int &i : a) {
        cin >> i;
        if(!s.count(i))
        {
            cout << i << " ";
            s.insert(i);
        }
    }
}
