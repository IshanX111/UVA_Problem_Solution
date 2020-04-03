#include<bits/stdc++.h>
using namespace std;
int main()
{

    char c[1000];
    while(gets(c))
    {

        int i,l;
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]=='W')
            {
                c[i]='Q';
            }
            else if(c[i]=='E')
            {
                c[i]='W';
            }

            else if(c[i]=='R')
            {
                c[i]='E';
            }

            else if(c[i]=='T')
            {
                c[i]='R';
            }

            else if(c[i]=='Y')
            {
                c[i]='T';
            }

            else if(c[i]=='U')
            {
                c[i]='Y';
            }

            else if(c[i]=='I')
            {
                c[i]='U';
            }

            else if(c[i]=='O')
            {
                c[i]='I';
            }

            else if(c[i]=='P')
            {
                c[i]='O';
            }

            else if(c[i]=='[')
            {
                c[i]='P';
            }

            else if(c[i]==']')
            {
                c[i]='[';
            }

            else if(c[i]=='1')
            {
                c[i]='`';
            }
            else if(c[i]=='2')
            {
                c[i]='1';
            }
            else if(c[i]=='3')
            {
                c[i]='2';
            }
            else if(c[i]=='4')
            {
                c[i]='3';
            }
            else if(c[i]=='5')
            {
                c[i]='4';
            }
            else if(c[i]=='6')
            {
                c[i]='5';
            }
            else if(c[i]=='7')
            {
                c[i]='6';
            }
            else if(c[i]=='8')
            {
                c[i]='7';
            }
            else if(c[i]=='9')
            {
                c[i]='8';
            }
            else if(c[i]=='0')
            {
                c[i]='9';
            }
            else if(c[i]=='-')
            {
                c[i]='0';
            }
            else if(c[i]=='=')
            {
                c[i]='-';
            }
            else if(c[i]=='\\')
            {
                c[i]=']';
            }

            else if(c[i]=='S')
            {
                c[i]='A';
            }
            else if(c[i]=='D')
            {
                c[i]='S';
            }
            else if(c[i]=='F')
            {
                c[i]='D';
            }
            else if(c[i]=='G')
            {
                c[i]='F';
            }
            else if(c[i]=='H')
            {
                c[i]='G';
            }

            else if(c[i]=='J')
            {
                c[i]='H';
            }
            else if(c[i]=='K')
            {
                c[i]='J';
            }
            else if(c[i]=='L')
            {
                c[i]='K';
            }
            else if(c[i]==';')
            {
                c[i]='L';
            }
            else if(c[i]=='\'')//EKHANEI KHELA
            {
                c[i]=';';
            }

            else if(c[i]==' ')
            {
                c[i]=' ';
            }


            else if(c[i]=='X')
            {
                c[i]='Z';
            }
            else if(c[i]=='C')
            {
                c[i]='X';
            }
            else if(c[i]=='V')
            {
                c[i]='C';
            }
            else if(c[i]=='B')
            {
                c[i]='V';
            }


            else if(c[i]=='N')
            {
                c[i]='B';
            }
            else if(c[i]=='M')
            {
                c[i]='N';
            }
            else if(c[i]==',')
            {
                c[i]='M';
            }
            else if(c[i]=='.')
            {
                c[i]=',';
            }

            else if(c[i]=='/')
            {
                c[i]='.';
            }

        }
        printf("%s\n",c);


    }





}
