#include <bits/stdc++.h>

using namespace std;
vector <string> v;
void bubbleSort(int a[] , int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        bool ok = false;
        for(int j = 0 ; j < n - i - 1 ; j++)
            if(a[j] > a[j + 1])
            {
                swap(a[j] , a[j + 1]);
                ok = true;
            }
        if(ok)
        {
            string s = "";
            s += "Buoc " + to_string(i + 1) + ": ";
            for(int j = 0 ; j < n ; j++)
                s += to_string(a[j]) + " ";
            v.push_back(s);
        }
        else return;
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
        bubbleSort(a , n);
        reverse(v.begin() , v.end());
        for(string x : v) cout << x << endl;
    }
}
