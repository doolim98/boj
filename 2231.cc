#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=N-6*9;i<=N;i++){
        if(i<1) i=1;
        int sum=i;
        for(int t=i;t>0;t/=10){
            sum+=t%10;
        }
        if(sum==N){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}
