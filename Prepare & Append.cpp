#include <bits/stdc++.h>
using namespace std;

#define one ios_base::sync_with_stdio(0);
#define two cin.tie(0);
#define three cout.tie(0);
typedef long long ll;
typedef vector<int> vc;
typedef set <int> st;
typedef map<int, int> mp;
typedef pair<ll,ll> pr;

//const int modulo 1e9+7;

int main()
{
    one two three
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int x = n;
        string s; cin >> s;
        for(int i=0; i<n/2; i++)
        {
            if(s[i]=='1' && s[n-i-1]== '0')
            {
                x -= 2;
            }
            else if(s[i]=='0' && s[n-i-1]=='1')
            {
                x -= 2;
            }
            else{
                break;
            }
        }
        cout << x << endl;
    }
}

