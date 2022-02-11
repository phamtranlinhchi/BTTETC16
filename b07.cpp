#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[100], giua[100];
    char *tuCuoi;
    gets(str);
    
    for (int i=strlen(str)-1; i>=0; i--){
        if (str[i]==' '){
            tuCuoi = str+i+1;
            str[i] = '\0';
            break;
        }
    }
    //Lay doan giua
    strcpy(giua, strstr(str, " "));
    
    //Cat doan giua ra khoi chuoi
    str[strlen(str) - strlen(giua)] = '\0';
    
    strcat(tuCuoi, giua);
    strcat(tuCuoi, " ");
    strcat(tuCuoi, str);
    
    cout<<tuCuoi<<endl;
    return 0;
}