#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        for(int i=0; i<str.size(); i++){
            str[i]=str[i]-7;
        }
        cout<<str<<endl;
    }
    return 0;
}

