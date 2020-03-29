#include<bits/stdc++.h>
using namespace std;
int main()
{

    char c[10005];
    int i=0;
    int m=0;
    while(scanf("%s",c)!=EOF)
    {

        for(i=0; c[i]!='\0'; i++)
        {
            if(c[i]=='"' && m%2==0)
            {
                printf("``");
                m++;
            }
            else if(c[i]=='"' && m%2!=0)
            {
                printf("''");
                m++;
            }
            else
                printf("%c",c[i]);

        }
        printf("\n");
    }

}
