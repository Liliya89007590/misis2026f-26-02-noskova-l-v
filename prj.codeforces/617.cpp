#include <iostream>
int main(){
    int x;
    std:: cin>>x;
    int n = x/5;
    if (n%5 != 0){
        n = n+1;
    }
    std:: cout<<n;
}