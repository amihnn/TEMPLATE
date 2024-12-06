// sth

void backtrack(ll pos){
    for (ll i=a[pos-1]+1; i<=n-(k-pos); i++){
        a[pos]=i;
        if(pos==k){
            for(ll i=1; i<=k; i++) cout<<a[i]<<' ';
            cout<<'\n'; 
        }
        else backtrack(pos+1);
    }
}

// main { backtrack(1); }