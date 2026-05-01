#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int,pair<int,int>> p= {1,{3,4}};
    pair<int,pair<int,int>> arr[]={{1,{2,3}},{4,{5,6}}};
    cout<<p.second.first<<endl;
    cout<<arr[0].second.second<<endl;
    return 0;
}