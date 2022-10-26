#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        getline(cin >> ws , s);
        stringstream ss(s);
        string temp;
        stack<string> st;

        while(ss >> temp)
        {
            st.push(temp);
        }
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
