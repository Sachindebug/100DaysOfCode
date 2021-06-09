int strStr(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
       
        for(int i=0;i<=(n-m);i++)
        {
            int j;
            for(j=0;j<m;j++)
            {
                if(s2[j]!=s1[i+j])
                {
                    break;
                }
                
            }
            if(j==m)
            {
                return i;
            }
            
        }
        return -1;
        
        
    }
//neive string pattarn matching
