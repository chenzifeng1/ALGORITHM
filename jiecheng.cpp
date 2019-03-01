#include <iostream>

using namespace std;
//the number of zero after n!
int main(){
    int n ;
    cin>>n;
    int r=0;
    while(n){
        r+=n/5;
        n/=5;
    }
    cout<<r<<endl;
}
