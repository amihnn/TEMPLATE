//dsu

const ll N=1e5;
ll par[N+1],sz[N+1];
void make_set(ll node) {
    par[node]=node;
    sz[node]=1;
    // sum[node]=a[node];
}
ll find_set(ll node) { return node == par[node] ? node : par[node] = find_set(par[node]);}
void join(ll a, ll b) {
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b]) swap(a,b);
        par[b]=a;
        sz[a]+=sz[b];
        // sum[a] += sum[b];
    }
}