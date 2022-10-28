#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, w ,h;
	int sum = 0;
		
	while(scanf("%dx%dx%d", &l, &w, &h) == 3)
	{
	int p1 = l * w, p2 = l * h, p3 = w * h;
	int minArea = min(p1,min(p2,p3));
	int area = 2 * l * w + 2 * w * h + 2 * h * l + minArea;
	sum += area;
	}
	cout << sum << "\n";
	return 0;
}