// shv

void backtrack(ll pos){
    if(pos>n){
        FOR(i,1,n) cout<<a[i];
        cout<<'\n';
        return;
    }
    FOR(i,1,n){
        if(kt[i]) continue;
        a[pos]=i;
        kt[i]=true;
        backtrack(pos+1);
        kt[i]=false;
    }
}
// main{ backtrack(1); }