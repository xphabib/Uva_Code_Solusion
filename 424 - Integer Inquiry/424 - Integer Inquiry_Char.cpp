#include <bits/stdc++.h>
using namespace std;

int main(){
    char str1[100],str2[100],str3[100];
    char a,b;
    int c=0, sum=0,nc;
    cin>>str1>>str2;
    int siz=strlen(str1);
    //int s=siz;
    for(int i=0; i<siz; i++){
        a=str1[i];
        b=str2[i];
        int x=a-'0';
        int y=b-'0';
        sum = sum+x+y+c;
        nc=sum%10;
        str3[i]=nc+'0';
        nc=0;
        sum=0;
        x=0;
        y=0;
        c=(x/10);
    }
    cout<<str3;
    return 0;
}

