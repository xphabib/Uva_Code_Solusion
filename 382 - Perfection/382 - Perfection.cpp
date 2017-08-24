#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ct=0;
    while(scanf("%d",&n)==1){
        int sum=0;
        if(ct==0){
            printf("PERFECTION OUTPUT\n");
            ct=1;
        }
        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }
        int m=n, cm=0;
        while(m!=0){
            m=m/10;
            cm++;
        }
        if(cm==5){
            printf("");
        }
        if(cm==4){
            printf(" ");
        }
        if(cm==3){
            printf("  ");
        }
        if(cm==2){
            printf("   ");
        }
        if(cm==1){
            printf("    ");
        }
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum=sum+i;
            }
        }
        if(sum==n){
            printf("%d  PERFECT\n",n);
        }
        else if(sum<n){
            printf("%d  DEFICIENT\n",n);
        }
        else if(sum>n){
            printf("%d  ABUNDANT\n",n);
        }
    }
    return 0;
}



