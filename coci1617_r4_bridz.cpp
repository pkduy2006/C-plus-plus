#include <bits/stdc++.h>
using namespace std;

int n, total;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--)
    {
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'X')
                continue;
            
            if(s[i] == 'A')
                total += 4;
            else if(s[i] == 'K')
                total += 3;
            else if(s[i] == 'Q')
                total += 2;
            else if(s[i] == 'J')
                total++;
        }
    }

    cout << total;
    
    return 0;
}