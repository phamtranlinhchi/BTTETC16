#include<iostream>
#include<math.h>

using namespace std;

void nhapMang(int &n, int a[]){
    do{
        cin>>n;
    }while(n<1||n>100);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
}

void xuatMang(int n, int a[]){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool soChinhPhuong(int n){
    int a = sqrt(n);
    if(a*a == n)
        return true;
    return false;
}

bool soNguyenTo(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return false;
    }
    return n>1;
}

bool soHoanHao(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        return true;
    return false;
}

void chen(int &n, int a[], int x, int index){
    for(int i=n; i>index; i--){
        a[i]=a[i-1];
    }
    a[index]=x;
    ++n;
}

void xoa(int &n, int a[], int index){
    for(int i=index; i<n; i++){
        a[i]=a[i+1];
    }
    --n;
}

int main(){
    int n, a[100], x;
    bool daChen = false;
    nhapMang(n, a);
    
    //y1:
    cin>>x;
    for(int i=0; i<n; i++){
        if(soChinhPhuong(a[i])){
            chen(n, a, x, i+1);
            i++;
            daChen = true;
        }
    }
    if(!daChen){
        int vtchen = n;
        for(int i=0; i<n; i++){
            if(soNguyenTo(a[i])){
                vtchen=i;
                break;
            }
        }
        if(vtchen==n){
            chen(n, a, x, vtchen);
        }
        else{
            for(int i=0; i<n; i++){
                if(soNguyenTo(a[i])&&a[i]>a[vtchen])
                    vtchen = i;
            }
            chen(n, a, x, vtchen+1);
        }
    }
    xuatMang(n, a);
    
    //y2:
    for(int i=0; i<n; i++){
        if(soHoanHao(a[i])){
            for(int j=a[i]-1; j>=1; j--){
                if(a[i]%j==0){
                    a[i]=j;
                    break;
                }
            }
        }
    }
    xuatMang(n, a);
    
    //y3:
    for(int i=0; i<n-1; i++){
        if(a[i]%2==0 && a[i+1]%2==0){
            xoa(n, a, i+1);
            i--;
        }
        else if(a[i]%2!=0 && a[i+1]%2!=0){
            xoa(n, a, i+1);
            i--;
        }
    }
    xuatMang(n, a);
    return 0;
}