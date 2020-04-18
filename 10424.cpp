#include<bits/stdc++.h>
using namespace std;
int name_sum(string s);
int digit_sum(int x);

int main(){
   string s,s1;

   while(getline(cin,s)){
     float res=0;
     int x=name_sum(s);
     getline(cin,s1);
     int y=name_sum(s1);

      while(y>=10){
        y=digit_sum(y);
      }
      float r=y;

      while(x>=10){
        x=digit_sum(x);
      }
      float t=x;
      if(r==t){
        cout<<"100.00 %"<<endl;
      }

      else if(r<t){

        res=(r/t)*100;
        printf("%.2f %%\n",res);

      }
      else if(r>t){

        res=(t/r)*100;
        printf("%.2f %%\n",res);

      }


   }

}

int name_sum(string s){
     int i;
     int ll=s.size();
     int sum=0;
     for(i=0;i<ll;i++){
        if(s.at(i)=='a'||s.at(i)=='A'){
            sum+=1;
        }
        else if(s.at(i)=='b'|| s.at(i)=='B'){
            sum+=2;
        }
        else if(s.at(i)=='c'|| s.at(i)=='C'){
            sum+=3;
        }
        else if(s.at(i)=='d'|| s.at(i)=='D'){
            sum+=4;
        }

        else if(s.at(i)=='e'|| s.at(i)=='E'){
            sum+=5;
        }
        else if(s.at(i)=='f'|| s.at(i)=='F'){
            sum+=6;
        }
        else if(s.at(i)=='g'|| s.at(i)=='G'){
            sum+=7;
        }

        else if(s.at(i)=='h'|| s.at(i)=='H'){
            sum+=8;
        }
        else if(s.at(i)=='i'|| s.at(i)=='I'){
            sum+=9;
        }
        else if(s.at(i)=='j'|| s.at(i)=='J'){
            sum+=10;
        }

        else if(s.at(i)=='k'|| s.at(i)=='K'){
            sum+=11;
        }
        else if(s.at(i)=='l'|| s.at(i)=='L'){
            sum+=12;
        }
        else if(s.at(i)=='m'|| s.at(i)=='M'){
            sum+=13;
        }

        else if(s.at(i)=='n'|| s.at(i)=='N'){
            sum+=14;
        }
        else if(s.at(i)=='o'|| s.at(i)=='O'){
            sum+=15;
        }
        else if(s.at(i)=='p'|| s.at(i)=='P'){
            sum+=16;
        }

        else if(s.at(i)=='q'|| s.at(i)=='Q'){
            sum+=17;
        }
        else if(s.at(i)=='r'|| s.at(i)=='R'){
            sum+=18;
        }
        else if(s.at(i)=='s'|| s.at(i)=='S'){
            sum+=19;
        }

        else if(s.at(i)=='t'|| s.at(i)=='T'){
            sum+=20;
        }
        else if(s.at(i)=='u'|| s.at(i)=='U'){
            sum+=21;
        }
        else if(s.at(i)=='v'|| s.at(i)=='V'){
            sum+=22;
        }

        else if(s.at(i)=='w'|| s.at(i)=='W'){
            sum+=23;
        }
        else if(s.at(i)=='x'|| s.at(i)=='X'){
            sum+=24;
        }
        else if(s.at(i)=='y'|| s.at(i)=='Y'){
            sum+=25;
        }

        else if(s.at(i)=='z'|| s.at(i)=='Z'){
            sum+=26;
        }

       }
    return sum;
}
int digit_sum(int x){

    int n=x;

    int d=0;
    while(n>0){
       d=d+n%10;
       n=n/10;
    }
    return d;


}

