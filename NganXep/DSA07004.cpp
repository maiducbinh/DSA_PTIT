#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for(char i : s)
        {
            if(i == '(') st.push(i);
            else{
                if(!st.empty()) st.pop();
                else{
                    st.push('(');
                    cnt++;
                }
            }
        }
        cout << st.size() / 2 + cnt << endl;
        //cnt luu so luong dau ngoac ) can doi chieu
        //st.size() = so dau ngoac ( bi du ra nen / 2 de tinh bi doi chieu
    }
}
