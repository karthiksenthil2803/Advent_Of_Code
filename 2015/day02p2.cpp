#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int h, w, l;
	int sum = 0;
	
	while(scanf("%dx%dx%d", &h, &w, &l) == 3) {
		int ext = h * w * l;
		int p1 = h + w, p2 = w + l, p3 = h + l;
		int perim = min(p1, min(p2,p3)) * 2;
		sum += ext + perim;
	}
	cout << sum <<"\n";
	return 0;
}