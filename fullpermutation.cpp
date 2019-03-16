#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int s =1;
    int a[10]={1,2,3};
    do{
        if(s==k)
            cout<<"get:";
        cout<<a[0]<<a[1]<<a[2]<<endl;
        s++;
    }while(next_permutation(a,a+3));

    return 0;
}
