// bfs

vi v[N+5];
dq q;
void bfs(ll s, ll d[]){
    memset(d,-1,sizeof d);
    d[s]=0, q.pb(s); //s là node đầu tiên
    while(!q.empty()){
        ll x=q.front();
        q.pop_front();
        FORA(y,v[x])
            if(d[y]==-1) d[y]=d[x]+1, q.pb(y);
    }
}