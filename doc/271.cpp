#include <iostream>
int main(){
    int y;
    std:: cin>>y;
    for (int b = y+1; b<9999; b=b+1){
        const int d1 = b/1000;
        const int d2 = b/100 % 10;
        const int d3 = b/10 % 10;
        const int d4 = b % 10;
    bool u = d4 != d3;
    u = u && d4 != d2;
    u = u && d4 != d1;
    u = u && d3 != d2;
    u = u && d3 != d1;
    u = u && d2 != d1;
    if (u){
        std:: cout <<b;
        break;
    }
}
}