#include<iostream>
#include<math.h>

using namespace std;

void nhap(int &n, float &x){
    do{
        cin>>n;
    }while(n<=0);
    cin>>x;
}

int giaiThua(int n){
    // if(n==1)
    //     return 1;
    // return n*giaiThua(n-1);
    int kq = 1;
    for(int i=1; i<=n; i++){
        kq*=i;
    }
    return kq;
}

float S(float x, int n){
    float kq=0;
    for(int i=1; i<=n; i++){
        kq+=pow(-1, i)*pow(x, i)/giaiThua(i);
    }
    return kq;
}

int main(){
    int n;
    float x;
    nhap(n, x);
    cout<<S(x, n)<<endl;
    return 0;
}