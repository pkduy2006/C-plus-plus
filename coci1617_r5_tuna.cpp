#include <bits/stdc++.h>
using namespace std;

int n, x, res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> x;
    for(int i = 1; i <= n; i++)
    {
        int p1, p2;
        cin >> p1 >> p2;

        if(abs(p1 - p2) > x)
        {
            int p3;
            cin >> p3;
            
            res += p3;
        }
        else
            res += max(p1, p2);
    }

    cout << res;

    return 0;
}