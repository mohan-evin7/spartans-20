vector<int> Solution::getRow(int A) {
    vector<int>res;
    for(int i=0;i<=A;i++)
    {
        vector<int>temp;
        for(int j=0;j<i;j++)
        {
            if(j<1)
            temp.push_back(1);
            else
            temp.push_back(res[j]+res[j-1]);
        }
        temp.push_back(1);
        res=temp;
    }
    return res;
}
