#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char s[5][50],t[50];
 for(int i=0;i<5;i++) cin.getline(s[i],50);
 for(int i=0;i<5;i++) for(int j=i+1;j<5;j++)
 if(strcmp(s[i],s[j])>0){ strcpy(t,s[i]); strcpy(s[i],s[j]); strcpy(s[j],t); }
 for(int i=0;i<5;i++) cout<<s[i]<<endl;
}
