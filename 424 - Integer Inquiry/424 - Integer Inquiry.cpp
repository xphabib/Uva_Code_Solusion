include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2, a, b;
    int x=0,c=0,nc;
    for(;;){
        cin>>str1;
        if(str1=="0"){
            break;
        }
        int siz=str1.size();
        for(int i=0; i<siz; i++){
            a = str1[i];
            b = str2[i];

            int m = atoi(a.c_str());
            int n = atoi(b.c_str());
            x=x+m+n+c;
            nc=x%10;
            //str2[i]=nc+c;

            stringstream ss;
            ss << nc;
            str2 = ss.str();
            c=(x/10);
        }
    }
    cout<<str2<<endl;
    return 0;
}
