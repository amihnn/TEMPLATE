// dfs

ll f[N+5];
vi v[N+5];
void dfs(ll x){
    f[x]=true;
    FORA(y,v[x])
        if(!f[y]) dfs(y);
}