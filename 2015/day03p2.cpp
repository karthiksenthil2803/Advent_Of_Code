#include<bits/stdc++.h>
using namespace std;

pair<int,int> updatePos(pair<int,int>pos, char c) {
	if(c == '^')
		return make_pair(pos.first, pos.second+1);
	else if(c == 'v')
		return make_pair(pos.first, pos.second-1);
	else if(c == '>')
		return make_pair(pos.first+1, pos.second);
	else if(c == '<')
		return make_pair(pos.first-1, pos.second);
	else
		return pos;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string st;
	cin >> st;
	
	pair<int, int> robo = {0,0}, santa = {0,0};
	set<pair<int,int>> visit;
	visit.insert({0,0});
	
	for(int i = 0; i <st.length(); i++) {
		if(i %2 == 0) {
			santa = updatePos(santa, st[i]);
			visit.insert(santa);
		} else {
			robo = updatePos(robo, st[i]);
			visit.insert(robo);
		}
	}
	
	cout << visit.size() << "\n";
}