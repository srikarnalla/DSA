#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int number;
        cin>>number;
        q.push(number);

    }
    q.emplace(10);
    queue<int> q1=q;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();

    }
    q.back()+=5;
    cout<<q.back()<<endl;
    
}
