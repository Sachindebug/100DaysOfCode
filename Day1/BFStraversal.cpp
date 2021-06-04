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
int dis[10001];

vector<int> bfs(int v)
{
    vector<int> res;
    vis[v] = 1;
    dis[v] = 0;
    res.pb(v);

    queue<int> q;
    q.push(v);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (auto x : arr[s])
        {
            if (!vis[x])
            {
                vis[x] = 1;
                res.pb(x);
                dis[x] = dis[s] + 1;
                q.push(x);
            }
        }
    }
    return res;
}
int main()
{

    int n, m;
    cin >> n >> m;

    int a, b;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int source;
    cin >> source;
    vector<int> pp = bfs(source);
    for (auto x : pp)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << dis[i] << " ";
    }

    return 0;
}
