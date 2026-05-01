#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> mpp;
    mpp.insert({2, 43});
    mpp.emplace(3, 1);
    //mpp[{2,3}]=10;
    for (auto it:mpp){
        cout <<it.first<<" "<<it.second<<endl;
    }

}
