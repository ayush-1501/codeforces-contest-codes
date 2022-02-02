#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
        string s="";
        int carry=0;
        //int i,j;
        int i=a.length()-1, j=b.length()-1; 
 
        while(i && j){
 
            if((a[i]=='0') && (b[j]=='0')){
                if(carry==1){
                    s=s+'1';
                    carry=0;
                }
                else{
                    s=s+'0';
                    carry=0;
                }
            }
 
            else if((a[i]=='1') && (b[j]=='1')){
                if(carry==1){
                    s=s+'1';
                    carry=1;
                }
                else{
                    s=s+'0';
                    carry=1;
                }
            }
 
            else{
                if(carry==1){
                    s=s+"0";
                    carry=1;
                }
                else{
                    s=s+"1";
                    carry=0;
                }
            }
            i--;
            j--;
 
        }
 
        while(j>0){
            if(b[j]=='1'){
                if(carry==0){
                    s=s+'1';
                    carry=0;
                }
                else{
                    s=s+'0';
                    carry=1;
                }
            }
            else{
                if(carry==0){
                    s=s+'1';
                    carry=0;
                }
                else{
                    s=s+'0';
                    carry=1;
                }
            }
           // s=s+b[j];
            j--;
        }
        while(i>0){
            if(a[i]=='1'){
                if(carry==0){
                    s=s+'1';
                    carry=0;
                }
                else{
                    s=s+'0';
                    carry=1;
                }
            }
            else{
                if(carry==0){
                    s=s+'1';
                    carry=0;
                }
                else{
                    s=s+'0';
                    carry=1;
                }
            }
            //s=s+a[i];
            i--;
        }
        if(carry==1){
            s=s+'1';
        }
       reverse(s.begin(),s.end());
        return s;
 
       /* string ans="";
 
        int i=a.length();
        int j=b.length();
        */
 
    
}



void problem(void){

   cout<<addBinary("0101","110");  
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
      #ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
      #endif
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
     while(t--){problem();cout<<"\n";}
     return 0;
}
