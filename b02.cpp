#include<iostream>
#include<math.h>

using namespace std;

void nhap(int &n, int &m){
    cin>>n>>m;
    if(n<m)
        swap(n, m);
}

float F(float x, int n){
    float sum=2020*fabs(n*x);
    for(int i=1; i<=n; i++){
        sum+=x/(2*n-i);
    }
    return sum;
}

int main(){
    int n, m;
    float x;
    nhap(n, m);
    cin>>x;
    cout<<F(x, n) - F(x, m)<<endl;
    return 0;
}