#include<bits/stdc++.h>
using namespace std;

long long fib(int a)
{
    if(a == 0) return 0;
    if(a==1) return 1;
    return fib(a-1)+fib(a-2);
}

int main()
{
    int n;
    cin>>n;

        for(int i=1;i<=n;i++){
                int flg = 0;
                int k =i;

            for(int j=1;j<=20;j++)
            {
                if(k == fib(j))
                   {

                    flg = 1;

                    break;}
                }

             if(flg==1) cout<<'O';
            if(flg == 0) cout<<'o';
        }




    cout<<endl;
}
