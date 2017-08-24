#include <bits/stdc++.h>
using namespace std;

bool prime(long long int p){
    if(p==1){
        return false;
    }else if(p==2){
        return true;
    }else if(p%2==0){
        return false;
    }
    else{
        for(long long int i=3; i<=sqrt(p); i=i+2){
            if(p%i==0){
                return false;
                break;
            }
        }
    }
    return true;
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
    int n,m,k;
    //char junk;
    bool x,y;
    cin>>m;
    for(k=0; k<m; k++){
        scanf("%d,",&n);
        int l=double(pow(2,n))-1;
        x=prime(n);
        y=prime(l);
        if(x&&y){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

