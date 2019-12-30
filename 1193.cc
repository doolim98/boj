#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int m=1;
    int sum=0;
    cin>>n;
    while(n-m>0){
        n-=m;
        m++;
    }
    if(m%2==0){
        cout<<n<<"/"<<m+1-n<<endl;
    }
    else{
        cout<<m+1-n<<"/"<<n<<endl;
    }
    return 0;
}
