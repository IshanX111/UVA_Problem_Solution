#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,l,j;
    cin>>t;
    char one[3]={'o','n','e'};
    char two[3]={'t','w','o'};
    char three[5]={'t','h','r','e','e'};
    string str;
    while(t--){
        int k=0,m=0,z,p=0;
        cin>>str;
        l=str.size();
        if(l==5){
            for(z=0;z<5;z++){
                if(str[z]==three[z]){
                    p++;
                }
            }
            if(p==4||p==5)
            printf("3\n");
        }
        else if(l==3){
                for(j=0;j<3;j++){
                    if(str[j]==one[j]){
                        k++;
                    }
                    else if(str[j]==two[j]){
                        m++;
                    }
                }

        }
        if(k==2||k==3){
            printf("1\n");
        }
        else if(m==2||m==3){
            printf("2\n");
        }

    }



}
