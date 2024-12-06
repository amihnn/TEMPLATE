// ktsnt

bool check(ll n){
    if(n<=1) return false;
    if(n==2 || n==3 || n==5 || n==7) return true;
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0) return false;
    for(ll i=5; i<=trunc(sqrt(n)); i+=6) {
        if(n%i==0) return false;
        if(n%(i+2)==0) return false;
    }
    return true;
}