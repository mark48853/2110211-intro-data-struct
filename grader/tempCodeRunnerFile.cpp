#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,k,cnt=0,node=1;
    cin >> n >> k;
    while(node < n) {
        node+=k,cnt++, k*=k;

    }
    cout << cnt;
}