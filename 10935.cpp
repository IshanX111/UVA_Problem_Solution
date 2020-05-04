#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;

    queue<int>q;
    while(cin>>n,n!=0){
    for(i=1;i<=n;i++){
            q.push(i);
    }
    cout<<"Discarded cards:";
    while(1){

        if(q.size()>1){
                if(q.size()==2){
                    cout<<" "<<q.front();
                }
                else{
                    cout<<" "<<q.front()<<",";
                }
                q.pop();
                int x=q.front();
                q.pop();
                q.push(x);

        }
        if(q.size()==1){
            cout<<"\nRemaining card: "<<q.front()<<endl;
            break;
        }
    }


    while(!q.empty()){
        q.pop();
    }
    }

}

