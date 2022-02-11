#include<iostream>

using namespace std;

int main(){
    char str[100];
    gets(str);
    //Xoa dau trang dau va cuoi chuoi
    int start=0, end=strlen(str)-1;
    while(start<end && str[start]==' '){
        start++;
    }
    while(end>start && str[end]==' '){
        end--;
    }
    //Viet hoa chu cai dau
    if(str[start]>='a' && str[start]<='z')
        str[start]-=32;
    cout<<str[start];
    
    for(int i=start+1; i<end+1; i++){
        if(str[i]==str[i+1] && str[i]==' ') //Bo dau cach thua o giua
            continue;
        if(str[i]>='A' && str[i]<='Z') //Dua het ve chu thuong
            str[i]+=32;
        if(str[i-1]==' ' && str[i]>='a' && str[i]<='z') //Viet hoa chu cai dau moi tu
            str[i]-=32;
        cout<<str[i];
    }
    return 0;
}