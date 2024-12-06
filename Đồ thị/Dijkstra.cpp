// dijkstra

void dijkstra(ll s, ll d[]){
    pdq q;
    FOR(i,1,n) d[i]=1e18;
    d[s]=0, q.push({d[s],s});
    while(!q.empty()){
        ll w=q.top().fi, x=q.top().se;
        q.pop();
        if(w>d[x]) continue;
        FORA(y,v[x])
            if(d[y.fi]>d[x]+y.se) d[y.fi]=d[x]+y.se, q.push({d[y.fi],y.fi});
    }
}