#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0 ; i < n ; i++)
            cin >> v[i];
        while(v.size() > 1)
        {

            cout << "[";
            for(int i = 0 ; i < v.size() - 1 ; i++)
                cout << v[i] << " ";
            cout << v[v.size() - 1] << "]" << endl;
            for(int i = 0 ; i < v.size() - 1 ; i++)
                v[i] = v[i] + v[i + 1];
            v.pop_back();
        }
        cout << "[" << v[0] << "]" << endl;
    }
}
