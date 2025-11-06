#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char a[100],b[50];
 cin.getline(a,100); cin.getline(b,50);
 cout<<(strstr(a,b)?"Found":"Not Found");
}
