#include<iostream>
#include<math.h>

using namespace std;

void nhap(int &n, int &m){
    do{
        cin>>n;
    }while(n<=4);
    do{
        cin>>m;
    }while(m<=n);
}

int tongChiaHetCho3(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++){
        if(i%3==0)
            sum+=i;
    }
    return sum;
}

float P(int n){
    // if(n==1)
    //     return 1;
    // return sqrt(n+P(n-1));
    float sum=0;
    for(int i=1; i<=n; i++){
        sum=sqrt(i+sum);
    }
    return sum;
}

int main(){
    int n, m;
    nhap(n, m);
    cout<<tongChiaHetCho3(1, n)<<endl;
    cout<<tongChiaHetCho3(n, m)<<endl;
    cout<<P(n)<<endl;
    return 0;
}