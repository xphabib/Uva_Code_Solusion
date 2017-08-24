#include <bits/stdc++.h>
using namespace std;

bool prime(long long int p){
    long long int i, j, k;
    if(p==1){
        return 0;
    }else if(p==2){
        return 1;
    }else if(p%2==0){
        return 0;
    }else{
        for(i=3; i<=sqrt(p);i=i+2){
            if(p%i==0){
                return 0;
            }
        }
    }
    return 1;
}

//bool is_perfect(int p){
//    bool ct=false;
//    int x = (pow(2,(p-1)))*((pow(2,p))-1);
//    if(x==p){
//        ct=true;
//    }
//    return ct;
//}

int main(){
    long long int n,m,k;
   // bool x, y;
    cin>>m;
    for(k=0; k<m; k++){
        scanf("%lld,",&n);
        int l=pow(double(2),n)-1;
        if(prime(n)&&prime(l)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

