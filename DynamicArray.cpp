vector<int> dynamicArray(int n, vector<vector<int>> queries) {
vector < vector<int> > seq(n);
int lastAnswer =0;
int len = queries.size();
vector <int> res;
for(int i=0; i<len; i++)
{   int k = (lastAnswer ^ queries[i][1])%n;
    if(queries[i][0]==1)
    {
        seq[k].push_back(queries[i][2]);
    }
    else if(queries[i][0]==2)
    {
        int index = queries[i][2]%(seq[k].size());
        lastAnswer = seq[k][index];
        res.push_back(lastAnswer);
    }
}
return res;
}
