#include <bits/stdc++.h>

using namespace std;
string s;
deque <int> q;
int main()
{
    while(1)
    {
        cin >> s;
        if(s == "push")
        {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if(s == "pop")
        {
            q.pop_back();
        }
        else if(s == "show")
        {
            if(q.empty()) {
                cout << "empty";
                break;
            }
            else
            {
                deque <int> q1 = q;
                while(!q.empty())
                {
                    cout << q.front() << " ";
                    q.pop_front();
                }
                cout << endl;
                q = q1;
            }
        }
    }
}
