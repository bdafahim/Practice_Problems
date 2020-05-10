#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,cnt=0,a[101];
    bool b;
    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i] = x;
    }

    for(int i=1;i<=n;i++)
    {
        if(a[i] != 0)
        {
            b = true;
            break;
        }
        else{
            b = false;
        }
    }

    if(b){
        for(int i=1;i<=n;i++)
        {
            if(a[i]>=a[k])
                cnt++;
            if(a[k] == 0)
            {
                if(a[i] == 0)
                    cnt--;
            }
        }

        cout<<cnt<<endl;
    }
    else
    {
        cout<<0<<endl;
    }


}


