#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Base{
    protected:
    int t;
    public:
    virtual void fun() = 0;

    Base(){cout<<"Constructor of base called no parameter\n";}

    Base(int i) {
              t = i; 
            cout<<"Constructor of base called\n";
    }
};
  

class Derived: public Base{
    int y;
    public:
   // void fun() { cout << "fun() called in derived\n"; }
      Derived(int i, int j):Base(i) { y = j; }
    void fun() { cout << "t = " << t << ", y = " << y<<'\n'; }
};

class Derived1: public Base{
    int y;
    public:
    void fun() { cout << "fun() called in derived1"; }
};

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i=0,j=0,k=0;
    while(i<size1+size2)
    {
        
        if(j==size1 || k==size2)
        {
            if(j==size1)
        	{
            	ans[i]=arr2[k];
            	k++;i++;
        	}
        	if(k==size2)
        	{
            	ans[i]=arr1[j];
            	j++;i++;
        	}
        }
        else 
        {
            if(arr1[j]>arr2[k])
        	{    
           		ans[i]=arr2[k];
           		k++;i++;
        	}
        	else
        	{
            	ans[i]=arr1[j];
            	j++;i++;
        	}
        }
        
        
    }
    
}  


signed main(void){
   // Derived d(1,2);
   // Derived1 a;
   // d.fun();
   int arr1[5]={1,2,3,4,5};
   int arr2[4]={6,7,8,9};
   int ans[10];
   merge(arr1,5,arr2,4,ans);
    return 0;
}    