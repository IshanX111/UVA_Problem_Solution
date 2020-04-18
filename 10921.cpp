#include<bits/stdc++.h>
using namespace std;
int main(){

       vector<char>c;
       char xx;
        int l,i;
       string s;
       while(getline(cin,s)){
       l=s.size();
       for(i=0;i<l;i++){
            xx=s.at(i);
            if(xx=='A' || xx=='B' || xx=='C'){
                c.push_back('2');
            }
            else if(xx=='D' || xx=='E' || xx=='F'){
                c.push_back('3');
            }
            else if(xx=='G' || xx=='H' || xx=='I'){
                c.push_back('4');
            }
            else if(xx=='J' || xx=='K' || xx=='L'){
                c.push_back('5');
            }

            else if(xx=='M' || xx=='N' || xx=='O'){
                c.push_back('6');
            }
            else if(xx=='P' || xx=='Q' || xx=='R' || xx=='S'){
                c.push_back('7');
            }
            else if(xx=='T' || xx=='U' || xx=='V'){
                c.push_back('8');
            }
            else if(xx=='W' || xx=='X' || xx=='Y' || xx=='Z'){
                c.push_back('9');
            }
            else{
            c.push_back(xx);
            }
       }
       l=c.size();
       for(i=0;i<l;i++){
            cout<<c.at(i);
       }
       cout<<endl;

        c.clear();
       }




}
