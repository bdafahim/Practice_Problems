#include<bits/stdc++.h>

using namespace std;

vector<int>ans(100);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, ind=0, track = 1;
        cin>>n;
        while(n!=0)
        {
            ans[ind] = (n % 10) *track;
            track *= 10;
            if(ans[ind]!=0)
            {
                ind++;
            }
            n /= 10;
        }
        cout<<ind<<endl;
        for(int i = ind - 1; i >= 0; i--)
		{
			cout << ans[i] << " ";
		}
		puts("");
    }

    return 0;
}





