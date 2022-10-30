#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string stn;
	cin >> stn;
	
	set<pair<int,int>> visit;
	pair<int,int> p = make_pair(0,0);
	visit.insert(p);
	for(int i = 0; i<stn.length(); i++) 
	{
		if(stn[i] == '^') {
			p = make_pair(p.first, p.second+1);
		} else if (stn[i] == 'v') {
			p = make_pair(p.first, p.second-1);
		} else if (stn[i] == '>') {
			p = make_pair(p.first+1, p.second);
		} else if (stn[i] == '<') {
			p = make_pair(p.first-1, p.second);
		}
		visit.insert(p);
	}
	
	cout << visit.size() << "\n";
	return 0;
}
