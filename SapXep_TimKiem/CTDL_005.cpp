#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    int x; cin >> x;
    for(int i : a)
        if(i != x) cout << i << " ";
}
