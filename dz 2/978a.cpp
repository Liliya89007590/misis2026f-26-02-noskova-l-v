#include<iostream>
#include<vector>
int main(){
    int n=0;
    std:: cin>>n;
    std::vector<int>a(n,0);
    for(int i=0; i<n; i= i+1){
        std:: cin>>a[i];
    }
    std::vector<int>unique;
    unique.reserve(n);
    unique.push_back(a[n-1]);
    for(int i=n-2;0<=i;i=i-1){
        int y = 0;
        for(;y < std:: size(unique); y=y+1){
            if (a[i]==unique[y]){
                break;
            }
        }
        if(y==std::size(unique)){
            unique.push_back(a[i]);
        }
    }
    std::cout<<std::size(unique)<<'\n';
    for (int i=std::size(unique)-1;i>=0;i=i-1){
        std::cout<<unique[i]<<' ';
    }
    return 0;
}