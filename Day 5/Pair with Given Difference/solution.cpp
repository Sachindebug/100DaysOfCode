int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> umap ;
    
    for (int i : A) {
        umap[i]++ ;
    }
    if (B==0) {
        for (int i : A)
            if (umap[i]>1)
                return 1 ;
        return 0 ;
    }
    for (int i : A) {
        if ( umap[i-B]>0  || umap[i+B]>0) {
            return 1 ;
        }
    }
    return 0 ;
}
