#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    long long sum = 0;
    for(int i : a)
        sum += i + abs(i);
    cout << sum;
}
