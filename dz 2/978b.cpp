#include<iostream>
#include<string>
int main(){
    int n = 0;
    std:: cin>>n;
    std:: string s;
    std:: cin>>s;
    int c = 0;
    for (int i=0; i+2<n;i=i+1){
        if(s[i]=='x'&&s[i+1]=='x'&& s[i+2]=='x'){
            c = c+1;
        }
        std:: cout<<c<<'\n';
        return 0;
    }
}