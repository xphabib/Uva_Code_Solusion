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

int main(){
    long long int n, res;
    while(scanf("%lld",&n)==1){
        res=1;
        if(n<0){
            break;
        }
        else if(n==0){
            cout<<res<<endl;
            continue;
        }
        else{
            for(long long int i=0; i<n; i++){
                res=res+(i+1);
            }
            cout<<res<<endl;
        }
    }
}

