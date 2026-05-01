#include <bits/stdc++.h>

using namespace std;

int main(){
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(3);
    ls.push_front(4);
    ls.emplace_front(9);
    for (auto it:ls){
        cout<<it<<" ";
    }
    
}