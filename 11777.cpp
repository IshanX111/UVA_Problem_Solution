#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,t1,t2,f,att,i,j,res;
    int a[3];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>t1>>t2>>f>>att;
        for(j=0;j<3;j++){
            cin>>a[j];
        }
        sort(a,a+3);
        res=(t1+t2+f+att+((a[1]+a[2])/2));
        if(res>=90){
            printf("Case %d: A\n",i);

        }
        else if(res>=80 && res<90){
            printf("Case %d: B\n",i);

        }

        else if(res>=70 && res<80){
            printf("Case %d: C\n",i);

        }

        else if(res>=60 && res<70){
            printf("Case %d: D\n",i);

        }

        else if(res<60){
            printf("Case %d: F\n",i);

        }
    }




}
