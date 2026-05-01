#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(5,10);
    v.push_back(1);
    v.emplace_back(2);//faster than push back
    //generally printing not recomended
    for (int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //printing of the vector with iterator
    // star for printing the memeory stored inside that adress
    for (vector<int>::iterator it =v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // here auto is used which automatically asigns the data type
    //best way
    for (auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // : colon mean for every element in v
    // also can say for range in v
    for (auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<v.back()<<endl;//last element
    cout<<*(v.begin())<<endl;//first element adress(use *)
    cout<<*(v.end()-1)<<endl;//last element adress(use *)
    cout<<*(v.rend())<<endl;//element before the first element
    cout<<*(v.rbegin())<<endl;
    //deletion functions
    v.erase(v.begin()+1);
    v.erase(v.begin()+1,v.begin()+4);
    //insertion functions
    v.insert(v.begin()+1,4);
    v.insert(v.begin()+1,3,6);
    for (auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //copy vector to another vector;
    vector<int> copy(1,2);
    copy.insert(copy.begin(),v.begin(),v.end()-2);
    for (auto it:copy){
        cout<<it<<" ";
    }
    //size of the vector
    auto cnt = v.size();
    cout<<endl<<cnt<<endl;
    //swap of vectors
    vector<int> v1={1,2,3};
    vector<int> v2={4,5,6};
    v1.swap(v2);
    for (auto it:v1){
        cout<<it<<" ";
    }
    cout<<endl;
    for (auto it:v2){
        cout<<it<<" ";
    }
    cout<<endl;
    //clear and empty
    v2.clear();
    for (auto it:v2){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v2.empty()<<endl;//return 1 or 0 if empty or non empty
    cout<<v1.empty();
    
}