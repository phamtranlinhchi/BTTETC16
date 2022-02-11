#include<iostream>

using namespace std;

void nhapMang(int &n, int a[]){
    do{
        cin>>n;
    }while(n<=3 || n>100);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void xuatMang(int n, int a[]){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// void sxTangDan(int a[], int start, int end){
//     for(int i=start; i<end-1; i++){
//         for(int j=i+1; j<end; j++){
//             if(a[i]>a[j])
//                 swap(a[i], a[j]);
//         }
//     }
// }

// void sxGiamDan(int a[], int start, int end){
//     for(int i=start; i<end-1; i++){
//         for(int j=i+1; j<end; j++){
//             if(a[i]<a[j])
//                 swap(a[i], a[j]);
//         }
//     }
// }

bool comp(const int a, const int b){
   return a > b;
}

int main(){
    int n, a[100];
    int posLe, posChan;
    nhapMang(n, a);
    //Sap xep so le ve dau mang, chan ve cuoi
    for(int i=0; i<n-1; i++){
        if(a[i]%2==0){
            for(int j=i+1; j<n; j++){
                if(a[j]%2!=0){
                    swap(a[i], a[j]);
                    break;
                }
                if(j==n-1 && a[j]%2==0){ //Neu duyet het vong j va tat ca da la so chan thi khong duyet i nua
                    goto tiep;
                }
            }
        }
    }
    tiep:
    //Tim vi tri so le cuoi va so chan dau
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            posChan=i;
            posLe=i-1;
            break;
        }
    }
    //Sap xep 0 ra giua
    for(int i=posLe+1; i<n; i++){
        if(a[i]==0){
            swap(a[i], a[posChan]);
            ++posChan;
        }

    }
    //Sap xep mang
    sort(a, a+posLe+1, comp);
    sort(a+posChan, a+n);
    // sxGiamDan(a, 0, posLe+1);
    // sxTangDan(a, posChan, n);
    xuatMang(n, a);
    return 0;
}