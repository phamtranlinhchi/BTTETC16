#include<iostream>

using namespace std;

void nhapMang(int n, float a[]){
    for(int i=0; i<n; i++){
        do{
            cin>>a[i];
        }while(i>0 && a[i]<a[i-1]);
    }
}

int main(){
    float a[100], b[100], c[100];
    int n, m;
    int ia=0, ib=0;
    do{
        cin>>n>>m;
    }while(n<=0 || m<=0 || n>=100 || m>=100);

    nhapMang(n, a);
    nhapMang(m, b);

    for(int i=0; i<n+m; i++){
        if(ia==n){ //Neu da duyet het mang a thi chi lay o mang b
            c[i]=b[ib];
            ++ib;
        }
        else if(ib==m){ //Neu da duyet het mang b thi chi lay o mang a
            c[i]=a[ia];
            ++ia;
        }
        else if(a[ia]<=b[ib]){
            c[i]=a[ia];
            ++ia;
        }
        else{
            c[i]=b[ib];
            ++ib;
        }
    }

    for(int i=0; i<n+m; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}