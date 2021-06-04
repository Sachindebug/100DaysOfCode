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
vi arr[10001];
int vis[10001];

void dfs(int s)
{
    vis[s] = 1;
    cout << s << "->";
    for (auto x : arr[s])
    {
        if (vis[x] == 0)
        {
            vis[x] = 1;
            dfs(x);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    int s;
    cin >> s;
    dfs(s);

    return 0;
}
