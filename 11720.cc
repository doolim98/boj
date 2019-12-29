#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    string number;
    int result=0;
    cin >> n ;
    cin >> number;
    for(char c:number){
        result+=c-'0';
    }
    cout << result;
    return 0;
}
