#include <bits/stdc++.h>

using namespace std;

void Try(int n , char dau , char temp , char cuoi)
{
    // neu con 1 coc thi chuyen tu A -> C
    if(n == 1)
    {
        cout << dau << " -> " << cuoi << endl;
        return;
    }
    Try(n - 1 , dau , cuoi , temp); //chuyen n - 1 coc tu A -> B
    Try(1 , dau , temp , cuoi); //chuyen coc cuoi tu A -> C
    Try(n - 1 , temp , dau , cuoi); //chuyen n - 1 coc tu B -> C
}
int main()
{
    int n;
    cin >> n;
    Try(n , 'A' , 'B' , 'C');
}
