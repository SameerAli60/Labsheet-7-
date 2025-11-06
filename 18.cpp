#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char a[50],b[50];
 cin.getline(a,50);
 strncpy(b,a,5); b[5]='\0';
 cout<<b;
}
