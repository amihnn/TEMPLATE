// bfs

vi v[N+5];
void bfs(ll s, ll d[]){
    dq q;
    FOR(i,1,N) d[i]=-1;
    d[s]=0, q.pb(s); //s là node đầu tiên
    while(!q.empty()){
        ll x=q.front();
        q.pfs;
        FORA(y,v[x])
            if(d[y]==-1) d[y]=d[x]+1, q.pb(y);
    }
}
// O(n+m)