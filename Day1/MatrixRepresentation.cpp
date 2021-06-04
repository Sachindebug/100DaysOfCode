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

int main()
{
    int n, m, u, v; //n=number of nodes,m=number of edges
    cin >> n;
    int arr[n + 1][n + 1] = {0}; //0 indicates there is currently no edge
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        arr[u + 1][v + 1] = 1; //adding edge between u and v by making 0 to 1
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " "; //printing matrix where 1 represent edge between i and j
        }
        cout << endl;
    }
    return 0;
}
