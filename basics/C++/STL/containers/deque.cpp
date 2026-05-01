#include <bits/stdc++.h>

using namespace std;

int main(){
    deque<int> dq={1,2,3,4};
    dq.emplace_back(2);
    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;

    for (auto it:dq){
        cout<<it<<" ";
    }
}