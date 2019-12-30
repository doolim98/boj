#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sqrt(int n){
    long long l=0;
    long long r=(long long)1<<31;
    long long m;
    while(r-l>1){
        m=(r+l)/2;
        long long msq=m*m;
        if(msq>n){
            r=m;
        }
        else if(msq==n){
            break;
        }
        else{
            l=m;
        }
    }
    return (int)m;
}

int main(){
    int cn;
    vector<int> l;
    cin>>cn;
    /*
    for(int i=0;i<cn;i++){
        int x,y;
        cin>>x>>y;
        l.push_back(y-x);
    }
    */
    while(cn--){
        int a,b,l;
        int k;
        int cnt=0;
        cin>>a>>b;
        l=b-a;
        k=sqrt(l);
        cnt=2*k-1+(l-k*k)/k;
        if(l-k*k-((l-k*k)/k)*k>0)
            cnt++;
        cout << cnt<<endl;
    }
    return 0;
}
