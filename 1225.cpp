#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c1,c2,c3,c4,c5,c6,c7,c8,c9,c0,i,n;
    scanf("%d ",&t);
    while(t--){
        cin>>n;
        string s="";
        string s1;
        for(i=1;i<=n;i++){

            s1=to_string(i);
            s=s+s1;
        }

        c0=0;
        c1=0;
        c2=0;
        c3=0;
        c4=0;
        c5=0;
        c6=0;
        c7=0;
        c8=0;
        c9=0;
        int l =s.size();
        for(i=0;i<l;i++){
            if(s.at(i)=='0'){
                c0++;
            }
            else if(s.at(i)=='1'){
                c1++;
            }

            else if(s.at(i)=='2'){
                c2++;
            }

            else if(s.at(i)=='3'){
                c3++;
            }

            else if(s.at(i)=='4'){
                c4++;
            }

            else if(s.at(i)=='5'){
                c5++;
            }

            else if(s.at(i)=='6'){
                c6++;
            }

            else if(s.at(i)=='7'){
                c7++;
            }

            else if(s.at(i)=='8'){
                c8++;
            }

            else if(s.at(i)=='9'){
                c9++;
            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);


    }

}

