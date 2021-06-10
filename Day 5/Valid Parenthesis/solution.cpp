bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{'|| s[i]=='[' )
            {
                st.push(s[i]);
            }
            if(st.empty()==true)
            {
            return false;
            }
            else if(s[i]==')')
            {
                char temp=st.top();
                st.pop();
                if(temp!='(')
                {
                   
                    return false;
                }
                        
            }
            else if(s[i]=='}')
            {
                char temp=st.top();
                st.pop();
                if(temp!='{')
                {
                    
                    return false;
                }
                        
            }
            else if(s[i]==']')
            {
                char temp=st.top();
                st.pop();
                if(temp!='[')
                {
                  
                    return false;
                }
                        
            }
        }
        if(st.empty()==true)
        {
            return true;
        }
        return false;
        
        
    }
