// rand

mt19937_64 rng(static_cast<ll>(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count()));
ll rand(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}