#include <iostream>
#include <string>
using namespace std;int main(){int X,Y,x,y;cin>>X>>Y>>x>>y;while (1){int r;cin>>r;string t;if(Y<y){t+='N';--y;}if(Y>y){t+='S';++y;}if(X<x){t+='W';--x;}if(X>x){t+='E';++x;}cout<<t<<endl;}}
