
#include <bits/stdc++.h>
using namespace std;

int main(){
    char str1[100], str2[100], a, b;
    int x=0,c=0,nc;
    for(;;){
        cin>>str1;
        if(str1=='0'){
            break;
        }
        int siz=strlen(str1);
        for(int i=0; i<siz; i++){
            a = str1[i];
            b = str2[i];

            int m = a-48;
            int n = b-48;
            x=x+m+n+c;
            nc=x%10;

            c=(x/10)%10;
        }
    }
    cout<<str2<<endl;
    return 0;
}
