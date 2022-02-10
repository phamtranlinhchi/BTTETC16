#include<iostream>
// #include<string.h>

using namespace std;

int main(){
    string str;
    char ch;
    bool have = false;
    getline(cin, str);
    cin>>ch;
    for(int i=0; i<str.length(); i++){
        if(str[i]==ch){
            cout<<i+1<<" ";
            have = true;
        }
    }
    if(!have)
        cout<<"No"<<endl;
    return 0;
}