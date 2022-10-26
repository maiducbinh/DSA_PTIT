#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    stack<int> st;
    while(q--)
    {
        string s;
        cin >> s;
        if(s == "PUSH") {
            int x; cin >> x;
            st.push(x);
        }
        else if(s == "POP")
        {
            if(!st.empty()) st.pop();
        }
        else
        {
            if(!st.empty())
            {
                cout << st.top() << endl;
            }
            else cout << "NONE\n";
        }
    }
}
