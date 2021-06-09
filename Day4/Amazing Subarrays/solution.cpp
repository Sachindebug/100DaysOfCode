int Solution::solve(string A) {
    int n=A.length(),count=0;
for(int i=0;i<n;i++){
    if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || 
       A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){            
        count+=n-i;
    }
}
return count%10003;
}
