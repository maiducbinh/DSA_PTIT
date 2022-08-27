#include <bits/stdc++.h>

using namespace std;
vector <string> v;

void interchangeSort(int a[] , int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        string s = "";
        for(int j = i + 1 ; j < n ; j++)
            if(a[i] > a[j]) swap(a[i] , a[j]);
        s += "Buoc " + to_string(i + 1) + ": ";
        for(int j = 0 ; j < n ; j++)
            s += to_string(a[j]) + " ";
        v.push_back(s);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        interchangeSort(a , n);
        reverse(v.begin() , v.end());
        for(string x : v) cout << x << endl;
    }
}
