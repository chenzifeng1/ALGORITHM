#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;
int stock[10000];
float price[500];
int sign[500];
int n,d;
void sortP(float a[]);
bool flag=false;
int main(){

    cin>>n>>d;//数量，单价，但输入的是总价

;
    for(int i=0;i<n;i++){
        cin>>stock[i];
    }
    for(int i=0;i<n;i++){
        float sump;//每种总价
        cin>>sump;
        price[i]=sump/stock[i];
    }
    float a[500];
    for(int i=0;i<n;i++)
        a[i] =price[i];

    sort(price,price+n,greater<float>());
    sortP(a);

    int sum =0;//当前销售情况
    float sump=0;//当前销售价值

    for(int i=0;i<n;i++){
        if(!flag){
        if(sum+stock[sign[i]]<=d){
            sum+=stock[sign[i]];
            sump+=(price[i]*stock[sign[i]]);
        }else{
            int des=sum+stock[sign[i]]-d;
            sump+=des*price[i];
            flag=true;
        }
        }


    }
    cout<<"sum:"<<sump<<endl;
}

void sortP(float a[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(price[i]==a[j]){
                sign[i]=j;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"new_price:"<<price[i]<<" "<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<sign[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
