#include <bits/stdc++.h>
using namespace std;

int main(){
//    int a=9;
//    int b=8;
//    int sum=a+b;
//    int carry = (sum/10)%10;
//    cout<<carry;

    string a = "25";
    int b = atoi(a.c_str());
    cout<<b<<endl;

    stringstream ss;
    ss << b;
    string str = ss.str();
    cout<<str;

    return 0;
}

