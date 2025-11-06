#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char s[100],r[100];
 cin.getline(s,100);
 strcpy(r,s); strrev(r);
 cout<<(strcmp(s,r)==0?"Palindrome":"Not Palindrome");
}
