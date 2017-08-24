#include <bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
//sort(arr, arr+size);
int big_mod(int base, int power, int mod){if(power==0){return 1;}else if(power%2==1){int p1 = base % mod;int p2 = (big_mod(base, power-1, mod))%mod;return (p1*p2)%mod;}else if(power%2==0){int p1 = (big_mod(base, power/2, mod))%mod;return (p1*p1)%mod;}}
bool prime(long long int p){if(p==1){return false;}else if(p==2){return true;}else if(p%2==0){return false;}else{for(long long int i=3; i<=sqrt(p); i=i+2){if(p%i==0){return false;break;}}}return true;}

int main(){
    int t, mid, arr[30000];
    sf("%d",&t);
    while(t--){
        int r,res=0;
        sf("%d", &r);
        for(int i=0; i<r; i++){
            sf("%d",&arr[i]);
        }
        sort(arr, arr+r);
            mid=arr[(r-1)/2];

        for(int i=0; i<r; i++){
            res=res+abs(mid-arr[i]);
        }
        pf("%d\n",res);

    }
}

