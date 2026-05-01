#include <bits/stdc++.h>
using namespace std;

int main(){
    //algins in increasing order
    //stores unique elements
    set<int> st={4,5,6,7};
    st.insert(1);
    st.insert(2);
    st.insert(21);
    st.insert(2);
    auto it =st.find(2);
    cout<<&it<<endl;
    //checks whether the given input is there in the set or not
    auto cnt =st.count(21);
    cout<<cnt<<endl;
    auto it1=st.find(2);
    auto it2=st.find(6);
    //clears in a boundary [---)
    st.erase(it1,it2);
    st.erase(5);
    
    for (auto it:st){
        cout<<it<<" ";
    }
    //here it will take the value lower or equal to it
    auto it3=st.lower_bound(6);
    //here it will take the value upper than the value not equal
    auto it4=st.upper_bound(6);
    cout<<*it3<<endl<<*it4<<endl;
}
