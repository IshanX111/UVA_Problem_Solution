#include<bits/stdc++.h>
using namespace std;
int main(){

   long long x,y;
   int t;
   cin>>t;

   while(t--){
    cin>>x>>y;
    if(x==y){
    printf("=\n");
    }
    else if(x>y){
    printf(">\n");
    }
    else if(x<y){
    printf("<\n");
    }
   }

}

