#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s;
    int n;
    cout<<"Enter how many elements in the stack: ";
    cin>>n;
    cout<<endl;
    for (int i=0;i<n;i++){
        int number;
        cout<<i<<" value of the stack :";
        cin>>number;
        //can only enter elements in the stack by push function
        s.push(number);
    }
    cout<<endl;
    //here this loop is there because we check if its empty 
    //and we print the top value and remove it untill it is empty
    while (!s.empty()) {
        //only way to print the stack here we use top function
        //in a stack we can only obtain the first element
        cout << s.top() << " ";
        //removes the first element
        s.pop();
    }
}