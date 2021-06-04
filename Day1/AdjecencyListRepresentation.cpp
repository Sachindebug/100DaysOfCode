/*
_____________sachin7777_______________
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define INF 2e18
const long long mod = 1e9 + 7;
#define dbg(x) cerr << #x << " = " << x << endl
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
vector<int> arr[1000]; //array of vectors to contain list of egde connected to given node

int main()
{
    int n, m, u, v; //n=number of nodes,m=number of edges
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        arr[u].pb(v);
        arr[v].pb(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << ":";
        for (auto x : arr[i]) //printing list crossponding to given node
        {
            cout << x << "->";
        }
        cout << "NULL";
        cout << endl;
    }

    return 0;
}
