#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
 char a[50],b[50];
 cin.getline(a,50); cin.getline(b,50);
 if(strlen(a)!=strlen(b)){ cout<<"Not Anagram"; return 0; }
 sort(a,a+strlen(a)); sort(b,b+strlen(b));
 cout<<(strcmp(a,b)==0?"Anagram":"Not Anagram");
}
