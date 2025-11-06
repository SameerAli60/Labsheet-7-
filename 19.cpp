#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char f[200]="",t[50];
 for(int i=0;i<3;i++){ cin.getline(t,50); strcat(f,t); strcat(f," "); }
 cout<<f;
}
