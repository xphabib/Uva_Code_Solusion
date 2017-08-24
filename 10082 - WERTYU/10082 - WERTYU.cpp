#include <bits/stdc++.h>
using namespace std;
//sort(arr, arr+size);
int big_mod(int base, int power, int mod){if(power==0){return 1;}else if(power%2==1){int p1 = base % mod;int p2 = (big_mod(base, power-1, mod))%mod;return (p1*p2)%mod;}else if(power%2==0){int p1 = (big_mod(base, power/2, mod))%mod;return (p1*p1)%mod;}}
bool prime(long long int p){if(p==1){return false;}else if(p==2){return true;}else if(p%2==0){return false;}else{for(long long int i=3; i<=sqrt(p); i=i+2){if(p%i==0){return false;break;}}}return true;}
bool odd_even(int n){if(n%2==0){return true;}else{return false;}}
bool palindrom(char *str1){char str2[10];strcpy(str2,str1);char temp;int len=strlen(str2)-1,i,k=len;for(i=0;i<len;i++){temp=str2[k];str2[k]=str2[i];str2[i]=temp;k--;if(k==(len/2)){break;}}if(strcmp(str1,str2)==0){return true;}else{return false;}}
//Conversions char Receive System : char *habib=string_to_char(k);
string int_to_string(int a){stringstream ss;ss<<a;string s1;ss>>s1;return s1;}
int string_to_int(string s){stringstream ss;ss.clear();ss<<s;int b;ss>>b;return b;}
string char_to_string(char *somechars){stringstream ss;ss.clear();ss<<somechars;string somestrings;ss>>somestrings;return somestrings;}
char* string_to_char(string somestrings){stringstream ss;ss.clear();ss<<somestrings;char somechars[10];ss>>somechars;return somechars;}
/*
void strchek(string str){
        if(str[i]=='W')str[i]='Q';
        if(str[i]=='S')str[i]='A';
        if(str[i]=='X')str[i]='Z';
        if(str[i]=='E')str[i]='W';
        if(str[i]=='D')str[i]='S';
        if(str[i]=='C')str[i]='X';
        if(str[i]=='R')str[i]='E';
        if(str[i]=='F')str[i]='D';
        if(str[i]=='V')str[i]='C';
        if(str[i]=='T')str[i]='R';
        if(str[i]=='G')str[i]='F';
        if(str[i]=='B')str[i]='V';
        if(str[i]=='Y')str[i]='T';
        if(str[i]=='H')str[i]='G';
        if(str[i]=='N')str[i]='B';
        if(str[i]=='U')str[i]='Y';
        if(str[i]=='J')str[i]='H';
        if(str[i]=='M')str[i]='N';
        if(str[i]=='I')str[i]='U';
        if(str[i]=='K')str[i]='J';
        if(str[i]==',')str[i]='M';
        if(str[i]=='O')str[i]='I';
        if(str[i]=='L')str[i]='K';
        if(str[i]=='.')str[i]=',';
        if(str[i]=='P')str[i]='O';
        if(str[i]==';')str[i]='L';
        if(str[i]=='/')str[i]='.';
        if(str[i]=='[')str[i]='P';
        if(str[i]==' ')str[i]=' ';
}
*/
int main(){
    string str;
    while(getline(cin,str)){
        int si=str.size();
        for(int i=0; i<si; i++){
            if(str[i]=='W')str[i]='Q';
            if(str[i]=='S')str[i]='A';
            if(str[i]=='X')str[i]='Z';
            if(str[i]=='E')str[i]='W';
            if(str[i]=='D')str[i]='S';
            if(str[i]=='C')str[i]='X';
            if(str[i]=='R')str[i]='E';
            if(str[i]=='F')str[i]='D';
            if(str[i]=='V')str[i]='C';
            if(str[i]=='T')str[i]='R';
            if(str[i]=='G')str[i]='F';
            if(str[i]=='B')str[i]='V';
            if(str[i]=='Y')str[i]='T';
            if(str[i]=='H')str[i]='G';
            if(str[i]=='N')str[i]='B';
            if(str[i]=='U')str[i]='Y';
            if(str[i]=='J')str[i]='H';
            if(str[i]=='M')str[i]='N';
            if(str[i]=='I')str[i]='U';
            if(str[i]=='K')str[i]='J';
            if(str[i]==',')str[i]='M';
            if(str[i]=='O')str[i]='I';
            if(str[i]=='L')str[i]='K';
            if(str[i]=='.')str[i]=',';
            if(str[i]=='P')str[i]='O';
            if(str[i]==';')str[i]='L';
            if(str[i]=='/')str[i]='.';
            if(str[i]=='[')str[i]='P';
            if(str[i]==']')str[i]='[';
            if(str[i]=='\\')str[i]=']';
            if(str[i]=='\'')str[i]=';';
            if(str[i]=='1')str[i]='`';
            if(str[i]=='2')str[i]='1';
            if(str[i]=='3')str[i]='2';
            if(str[i]=='4')str[i]='3';
            if(str[i]=='5')str[i]='4';
            if(str[i]=='6')str[i]='5';
            if(str[i]=='7')str[i]='6';
            if(str[i]=='8')str[i]='7';
            if(str[i]=='9')str[i]='8';
            if(str[i]=='0')str[i]='9';
            if(str[i]=='-')str[i]='0';
            if(str[i]=='=')str[i]='-';
        }
        cout<<str<<endl;
    }
    return 0;
}
