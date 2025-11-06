#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char s[100],c;
 cin.getline(s,100); cin>>c;
 char *p=strrchr(s,c);
 cout<<(p? p-s:-1);
}
