#include<bits/stdc++.h>
using namespace std;
int main(){

    int i=0;
    char c;
    for(;;){
        cin>>c;
        if(c=='*')
            break;
        else if(c=='H'){
            i++;
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(c=='U'){
            i++;
            printf("Case %d: Hajj-e-Asghar\n",i);

        }
    }

}
