#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int reverse(int n){
    int n1=n;
    int number = 0;
    while(n>0){
        int rand = n%10;
        number = number*10 + rand;
        n=n/10;     
    }
    if (n1 == number){
        cout<<"Palindrome"<<endl;
    }
    return number;
}

int amstrong(int n){
    int number = 0;
    while(n>0){
        int rand = n % 10;
        number = number + pow(rand,3);
        n=n/10;   
    }
    return number;
}

void divisors(int n){
    /*for (int i=1;i<n;i++){
        if((n%i)==0){
            cout<<i<<" ";
        }
    }*/
   //here a set can also be used but it is slow than vecotr
   //it is better to do vector + sort
    vector<int> st;
    //instead of using sqrt(n) function which will take more tc cause to call a function)
    // we can use i*i<n
    for (int i=1;i*i<=n;i++){
        if((n%i)==0){
            st.push_back(i);
            if ((n/i) != i){
            st.push_back(n/i);
            }
        }
    }
    //for sorty tc is (n*log(n)) here n is no of elemnts in the set or no of factos
    sort(st.begin(),st.end());
        //o(no of factors or sizr of the set) to prin
        for(auto it :st){
        cout<<it<<" ";
        } 
} 

void prime(int n){

    for (int i=1;i*i<=n;i++){
        int count=0;
        if((n%i)==0){
            count++;
            if ((n/i) != i){
            count++;
            }
        }
        if (count == 2){
            cout<<"Prime"<<endl;
        }
    }

}

void gcd(int n, int m){
    for (int i=min(n,m); i>=1; i--){
        if ( (n%i) == 0 && (m%i) == 0 ){
        cout<<"gcd is "<<i<<endl;
        break;
        }
    }
}

void gcd1(int n, int m){
    while (n > 0 && m > 0){
        if (n>m){
            n = n % m;
        }
        else{
            m = m % n;
        }
    }
    if (n == 0 ){
        cout<<m<<endl;
    }
    else{
        cout<<n<<endl;
    }
    //O(logphi(min(a,b)))
}

int main(){
    cout<<count(0234)<<endl;
    cout<<reverse(1331)<<endl;
    cout<<amstrong(1634)<<endl;
    divisors(64);
    prime(73);
    gcd(13,50);
    gcd1(42,40);

    
}