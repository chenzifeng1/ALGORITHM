#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;
int maxProfit(int prices[],int len);
int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    maxProfit(p,n);
    return 0;
}

int maxProfit(int prices[],int len) {
        int so[len] ;
        for(int i=0;i<len;i++)
            so[i]=prices[i];
        int maxNum=0,maxNum1=0;
        sort(so,so+len);//so为从小到大排序之后的序列
        int sor[len];//下标
        for(int i=0;i<len;i++){
            for(int j=len-1;j>i;j--){
                if(maxNum<prices[j]-prices[i])
                    maxNum=prices[j]-prices[i];
                    cout<<"prices["<<j<<"]-prices["<<i<<"]"<<maxNum<<endl;
            }
        }
        cout<<maxNum<<endl;
        /*for(int i=0;i<len;i++){//i是买入，j是卖出
            for(int j=len-1;j>0;j--){
                if(sor[i]>sor[j]&&maxNum<so[i]-so[j]){
                    maxNum=so[j]-so[i];
                }
            }

        }

        for(int i=0;i<len;i++){
            cout<<prices[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<len;i++){
            cout<<sor[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<len;i++){
            cout<<so[i]<<" ";
        }
        cout<<endl;*/
        return 0;
    }
