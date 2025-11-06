#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char s[100],r[100]; int j=0;
 cin.getline(s,100);
 for(int i=0;i<strlen(s);i++) if(!strchr("AEIOUaeiou",s[i])) r[j++]=s[i];
 r[j]='\0'; cout<<r;
}
