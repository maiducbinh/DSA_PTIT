#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <stack>
#include <map>
#include <queue>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>
#define LL long long
#define PII pair<int,int>
using namespace std;
const int N=2e5+5;
vector<int> a;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		char c=s[i];
		int cnt=1;			//Record the length of the substring of the same letter
		while(s[i+1]==c)
		{
			i++;
			cnt++;
		}
		a.push_back(cnt);
	}
	LL ans=(LL)n*(n-1)/2;			//The number of all substrings of s
	for(int i=1;i<a.size();i++)
	{
		ans-=a[i-1]+a[i]-1;			//subtracting the number of non-substring good string
	}
	cout<<ans<<endl;
	return 0;
}
