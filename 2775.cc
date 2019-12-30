#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int comb(int a,int b){
    if(b==0||a==b) return 1;
    return comb(a-1,b-1)+comb(a-1,b);
}

int main(){
    int n,k,cn;
    cin>>cn;
    while(cn--){
        cin>>k>>n;
        cout<<comb(n+k,k+1)<<endl;
    }
    return 0;
}
