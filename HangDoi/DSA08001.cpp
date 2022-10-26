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
        deque<int> dq;
        while(n--)
        {
            int x;
            cin >> x;
            if(x == 1) cout << dq.size();
            else if(x == 2)
            {
                cout << (dq.empty() ? "YES" : "NO");
            }
            else if(x == 3)
            {
                int k;
                cin >> k;
                dq.push_back(k);
            }
            else if(x == 4)
            {
                if(!dq.empty()) dq.pop_front();
            }
            else if(x == 5)
            {
                if(!dq.empty()) {
                    cout << dq.front();
                    //dq.pop_front();
                }
                else cout << -1;
            }
            else
            {
                if(!dq.empty())
                {
                    cout << dq.back();
                    //dq.pop_back();
                }
                else cout << -1;
            }
            cout << endl;
        }
    }
}
