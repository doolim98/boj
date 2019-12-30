#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int cn;
    cin>>cn;
    while(cn--){
        int h,w,n;
        cin>>h>>w>>n;
        cout.fill('0');
        cout<<(n-1)%h+1;
        cout.width(2);
        cout<<(n-1)/h+1<<endl;
    }
    return 0;
}
