long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long int> v(n+1,0);
    long int m=INT_MIN;
    for(long int i=0;i<queries.size();i++){
        for(long int j=queries[i][0]; j<=queries[i][1] ;j++){
            v[j]+=queries[i][2];
            if(m<v[j])
                m=v[j];
        }
    }
    return m;

}
