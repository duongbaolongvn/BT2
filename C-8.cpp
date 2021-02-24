#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int somax(int a,int b,int c)
{
    int max=a;
    if(a>b && a>c) return max;
    else if(a<b)
    {
        max=b;
        if(max>c) return max;
        else return c;
    }

}
int somin(int a,int b,int c)
{
    int min=a;
    if(a<b && a<c) return min;
    else if(a>b)
    {
        min=b;
        if(min<c) return min;
        else return c;
    }
}
int somid(int a,int b,int c)
{
    
    if(a>b&&a<c) return a;
    else if(a>b&&a>c) {
        return max(b,c);
    }
    else if(a<b&&a<c)
    {
        return min(b,c);
    }

}
int main()
{
    int a[5];
    int dem=0;
    for(int i=0;i<5;i++)
    {
        cin>> a[i];
    }
    int vt=a[0];
    int v[3];
    int t[3];
    int i=0;
    int j=0;
    for(int h=1;h<3;h++){
        if(vt>a[i]) 
        {
            dem++;
            v[++i]=a[h];
        }
        else t[++j]=a[h];

        
    }
    if(dem>=2)
    {
        if(dem ==3) cout << somid(a[1],a[2],a[3]);
        else
        {
            if(vt>a[4]) cout << somax(v[0],v[1],a[4]);
            else cout << vt;

        }
    } 
    else
    {
        if(dem==0) cout<< somid(a[1],a[2],a[3]);
        else 
        {
            if(vt<a[4]) cout << somin(t[0],t[1],a[4]);
            else cout << vt;
        }  
    }
    
    
}
