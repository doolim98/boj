#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> cnt('z'-'a'+1,0);
    string word;
    int max=0;
    char max_alpha='?';
    cin >> word;
    for(char c:word){
        int t;
        c=toupper(c);
        cnt[c-'A']++;
        if(max<cnt[c-'A']){
            max=cnt[c-'A'];
            max_alpha=c;
        }
        else if(max==cnt[c-'A']){
            max_alpha='?';
        }
    }
    cout << max_alpha<<endl;
    return 0;
}
