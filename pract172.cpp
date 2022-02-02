#include<bits/stdc++.h>
using namespace std;

bool check(string arr[],int n,int m,int r,int c){
      int i,j;bool is_true;
      for(i=0,j=0;i<n,j<m;i++,j++){
          if(arr[i][c]=='B' or arr[r][j])
          {is_true=true;break;}
      }
      return is_true;
}

int32_t main(void){
    int t;cin>>t;
    while(t--){
     int n,m,r,c;
     cin>>n>>m>>r>>c;

     string arr[1000];char l;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
      
      if(arr[r-1][c-1]=='B')
      {cout<<0<<"\n";continue;}
      
      bool is_true=false;int j;
      for(int i=0,j=0;i<m,j<n;i++,j++){
           if(arr[r][i]=='B' or arr[j][c]=='B'){
               cout<<1<<"\n";is_true=true;break;
           }
      }
      
      if(is_true){cout<<1<<"\n";continue;}
       
       int count=1; is_true=false;
       while(!is_true){
           is_true=check(arr,n,m,r+1,c+1);
           count++;r++;c++;
           if(r==n-1 or c==m-1)
           {break;}
       }
        if(is_true){cout<<count<<"\n";continue;}
        is_true=false;count=1;
        while(!is_true){
           is_true=check(arr,n,m,r-1,c-1);
           count++;r--;c--;
           if(r>=0 or c>=0)
           {break;}
       }
        if(is_true){cout<<count<<"\n";continue;}
        cout<<-1<<"\n";

    }
    return 0;
}