// sinhso

void build(ll pos){
    for(char c:{'4','7'}){
        s+=c;
        v.pb(stoll(s));
        if(pos==10) {s.pop_back(); return;}
        else build(pos+1);
        s.pop_back();
    }
}
//sort(all(v))