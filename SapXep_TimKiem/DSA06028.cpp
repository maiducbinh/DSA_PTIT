#include <bits/stdc++.h>

using namespace std;
vector <string> v;

void selectionSort(int a[] , int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        string s = "";
        int m = a[i] , pos = i;
        for(int j = i + 1 ; j < n ; j++)
            if(m > a[j])
            {
                pos = j;
                m = a[j];
            }
        swap(a[i], a[pos]);
        s += "Buoc " + to_string(i + 1) + ": ";
        for(int j = 0 ; j < n ; j++)
            s += to_string(a[j]) + " ";
        v.push_back(s);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    selectionSort(a , n);
    reverse(v.begin() , v.end());
    for(string x : v) cout << x << endl;
}

