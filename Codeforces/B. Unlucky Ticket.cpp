    #include <stdio.h>
    #include <algorithm>
    using namespace std;
    char v[300];
    int main()
    {
      int n,i;
      bool a=1,b=1;
      scanf("%d %s",&n,v);
      sort(v,v+n);
      sort(v+n,v+2*n);
      for (i=0;(a||b)&&i<n;i++)
      {
        if (v[i]<=v[i+n])a=0;
        if (v[i]>=v[i+n])b=0;
      }
      puts(a||b?"YES":"NO");
    }
