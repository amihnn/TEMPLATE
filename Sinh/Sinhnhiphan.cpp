// snp

void backtrack(long long pos){
    for(long long i=0;i<=1;i++){
        x[pos]=i;
        if(pos==n){
           for(long long i=1;i<=n;i++) cout<<x[i];
           cout<<'\n';
        }
        else backtrack(pos+1);
    }
}
// main{ backtrack(1); }