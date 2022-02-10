#include<iostream>

using namespace std;

int main(){
    int n, x;
    float a[100], sum=0;
    do{
        cin>>n;
    }while(n<=0);
    do{
        cin>>x;
    }while(x<=0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(x>n/2)
        cout<<-1<<endl;
    else{
        for(int i=n-1; i>=0; i--){
            if(i%2!=0){ //Vi mang chay tu 0
                sum+=a[i];
                --x;
            }
            if(x==0)
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}