// st

ll st[4*N+5];
void build(ll id, ll l, ll r){
    if(l==r){
        st[id]=a[r];
        return;
    }
    ll mid=(l+r)/2;
    build(id*2, l, mid);
    build(id*2+1, mid+1, r);
    st[id]=max(st[id*2], st[id*2+1]);
}

void update(ll id, ll l, ll r, ll pos, ll val) {
    if(r<pos || pos<l) return;
    if(l==r){
        st[id]=val;
        return;
    }
    ll mid=(l+r)/2;
    update(id*2, l, mid, pos, val);
    update(id*2+1, mid+1, r, pos, val);
    st[id]=max(st[id*2], st[id*2+1]);
}

ll get(ll id, ll l, ll r, ll u, ll v) {
    if(u>r || v<l) return -1e18;
    if(u<=l && v>=r) return st[id];
    ll mid=(l+r)/2;
    return max(get(id*2, l, mid, u, v), get(id*2+1, mid+1, r, u, v));
}