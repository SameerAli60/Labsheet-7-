#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char s[100]; int c=0;
 cin.getline(s,100);
 for(int i=0;i<strlen(s);i++) if(strchr("AEIOUaeiou",s[i])) c++;
 cout<<c;
}
