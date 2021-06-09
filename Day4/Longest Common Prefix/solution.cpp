string Solution::longestCommonPrefix(vector<string> &v) {
    if(v.size()==0)
    return "";
    int m=INT_MAX;
    
    string c=v[0];
    for(int i=1;i<v.size();i++)
    {
        int j=0,k=0;
        int a=0;
        while(j<c.size()&& k<v[i].size())
        {
            if(c[j]==v[i][k])
            {
                a++;
            }
            else
            {
                break;
            }
            j++;
            k++;
        }
        m=min(a,m);
    }
    return c.substr(0,m);
    
    
}
