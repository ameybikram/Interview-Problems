#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string st;
		cin>>st;
		int start;
		int n = st.length();
		string st1 = "", st2 = "";
		for(int i=0;i<n/2;i++){
			st1 += st[i];
		}

		if(n&1)
			start = (n+1)/2;
		else
			start = n/2;
		for(int i=start;i<n;i++)
			st2 += st[i];

		sort(st1.begin(), st1.end());
		sort(st2.begin(), st2.end());

		if(st1 == st2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
