// bfs

vi v[N+5];
void bfs(ll s, ll d[]){
    vi vis(n+1,0);
    queue<ll> q;
    d[s]=0, vis[s]=1, q.push(s); //s là node đầu tiên
    while(!q.empty()){
        ll x=q.front();
        q.pop();
        FORA(y,v[x])
            if(!vis[y]) vis[y]=1, d[y]=d[x]+1, q.push(y);
    }
}
// O(n+m)