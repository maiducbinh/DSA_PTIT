#include <bits/stdc++.h>

using namespace std;
vector <string> v;

void insertionSort(int a[] , int n)
{
    set <int> se;
    for(int i = 0 ; i < n ; i++)
    {
        string s = "";
        se.insert(a[i]);
        s += "Buoc " + to_string(i) + ": ";
        for(int j : se)
            s += to_string(j) + " ";
        v.push_back(s);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    insertionSort(a , n);
    reverse(v.begin() , v.end());
    for(string x : v) cout << x << endl;
}

