int findJudge(int n, vector<vector<int>>& trust) {
        

        int indegree[n+1];
        int outdegree[n+1];
        for(int i=0;i<n+1;i++)
        {
            indegree[i]=0;
            outdegree[i]=0;

        }

        for(int i=0;i<trust.size();i++)
        {
            int u=trust[i][0];
            int v=trust[i][1];
            indegree[v]++;
            outdegree[u]++;

        }
        for(int i=1;i<=n;i++)
        {
            if(indegree[i]==n-1 && outdegree[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
