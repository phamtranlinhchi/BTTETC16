#include<iostream>

using namespace std;

int main(){
    int n, a[100], count=0;
    int max=0;
    do{
        cin>>n;
    }while(n<0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n>=0 && n<2){
        cout<<"Khong co mang so hoc!"<<endl;
    }
    else{
        for(int i=0; i<n-1; i++){ //Bien doi mang
            a[i]=a[i+1]-a[i];
        }
        --n;
        for(int i=0; i<n; i++){
            ++count;
            if(a[i+1]!=a[i]){ //Gap so khac nhau thi so sanh lay max va reset count ve 0
                if(count>max)
                    max=count;
                count=0;
            }
        }
        cout<<max+1<<endl;
    }
    return 0;
}