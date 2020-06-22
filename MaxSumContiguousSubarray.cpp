int Solution::maxSubArray(const vector<int> &A) {
    int max=0;
    int m=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        max=max+A[i];
        if(max<A[i])
        {
            max=A[i];
        }
        if(m<max)
        {
            m=max;
        }
    }
    return m;
}
