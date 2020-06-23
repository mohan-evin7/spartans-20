vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> res;
    vector<int> d;
    
    int n = A.size();
    if(n == 0)
        return res;
    for(int i = 0; i <= 2*(n-1); i++) {
       for(int j = 0; j <= i; j++) {
           int k = i - j;
           if(j >= n || k >= n)
                continue;
           d.push_back(A[j][k]);
       }
       res.push_back(d);
       d.clear();
   }
   return res;
}
