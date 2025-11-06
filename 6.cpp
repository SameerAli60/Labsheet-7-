#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char f[50],l[50];
 cin.getline(f,50); cin.getline(l,50);
 strcat(f," "); strcat(f,l);
 cout<<f;
}
