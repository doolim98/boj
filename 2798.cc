#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    int max=0;
    vector<int> cards;
    vector<bool> flags;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        flags.push_back(i>=N-3);
    }
    for(int i=0;i<N;i++){
        int input;
        cin>>input;
        cards.push_back(input);
    }
    do{
        int sum=0;
        for(int i=0;i<N;i++){
            if(flags[i])
                sum+=cards[i];
        }
        if(sum<=M){
            if(sum>max)
                max=sum;
            else
                continue;
        }
        else{
            continue;
        }
    }while(next_permutation(flags.begin(),flags.end()));
    cout<<max<<endl;
    return 0;
}
