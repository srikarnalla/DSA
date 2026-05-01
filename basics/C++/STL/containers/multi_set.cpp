#include <bits/stdc++.h>

using namespace std;

int main(){
    mutliset <int> ms;
    ms.insert(9);
    ms.erase(9);
    int cnt = ms.count(9);
    auto it =ms.find(1);
    ms.erase(ms.find(1));
}