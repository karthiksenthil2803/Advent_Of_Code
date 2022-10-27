#include<bits/stdc++.h>
using namespace std;

int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        string input;
        cin >> input;
        int floor = 0;

        for(int i = 0; i < input.length(); i++) {
                if(input[i] == '(') floor++;
                else floor--;
        }

        cout << floor << "\n";
        return 0;
}