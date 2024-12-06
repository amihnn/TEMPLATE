// bit

ll sb(ll n, ll k) {return n|(1<<k);} // set bit - bật bit
ll cb(ll n, ll k) {return n&~(1<<k);} // clear bit - tắt bit
ll tb(ll n, ll k) {return n^(1<<k);} // toggle bit - đảo ngược bit