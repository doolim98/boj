#include <iostream>

using namespace std;

int main(){
    int cn;
    cin>>cn;
    while(cn--)
    {
        int x1,x2;
        int y1,y2;
        int r1,r2;
        int dsq;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        dsq=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        int msq=(r1-r2)*(r1-r2);
        int psq=(r1+r2)*(r1+r2);
        int cross=0;
        if(dsq>psq){
            cross=0;
        }
        else if(dsq==psq){
            cross=1;
        }
        else if(dsq>msq){
            cross=2;
        }
        else if(dsq==msq){
            if(msq==0){
                cross=-1;
            }
            else{
                cross=1;
            }
        }
        else if(dsq>0){
            cross=0;
        }
        else{
            if(r1==r2){
                cross=-1;
            }
            else{
                cross=0;
            }
        }
        cout<<cross<<endl;
    }
    return 0;
}
