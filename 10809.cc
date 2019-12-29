#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> alpha_pos('z'-'a'+1,-1);
    string input;
    int pos=0;
    cin>>input;
    for(char c:input){
        if(alpha_pos[c-'a']==-1){
            alpha_pos[c-'a']=pos;
        }
        pos++;
    }
    for(int i:alpha_pos){
        cout << i << " ";
    }
    return 0;
}
