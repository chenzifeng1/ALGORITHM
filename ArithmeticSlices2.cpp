#include <algorithm>
#include <stdio.h>
#include <iostream>

using namespace std;

int numberOfArithmeticSlices(int A[],int len);
template<class T>
int length(T& arr)
{
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;
    return sizeof(arr) / sizeof(arr[0]);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    cout<<numberOfArithmeticSlices(a,n)<<endl;
}


int numberOfArithmeticSlices(int A[],int len) {

        int count=0;
        int c=1;
        /*cout<<"begin:"<<len<<endl;
        for(int i=0;i<len;i++){
            int dp = 0;
            int des = 0;
            if(i+c<len){
                des =A[i+c]-A[i];
                cout<<"des:"<<des<<" i:"<<i<<endl;
            }else{
                c=1;
                continue;
            }
            int now=A[i];//记录当前的值
            cout<<now<<" "<<"dp:"<<dp<<" ";
            for(int j=i+c;j<len;j++){
                //cout<<"j:"<<j<<" des:"<<des<<":"<<A[j]-now<<" || ";
                if(A[j]-now==des){
                    dp++;
                    now=A[j];//将当前的值换成等差序列的后一个值
                    cout<<now<<" "<<"dp:"<<dp<<" ";
                }
            }
            cout<<endl;

                if(dp>=2){//成功找到一个等差子序列
                    count++;
                    c++;
                    i--;
                }else{
                    c++;
                    i--;
                }


        }*/
        int num =len;
        int sum=1;
        while(num!=1){
            sum*=(--num);

        }

        int dp[len][len];
        for(int i=0;i<len;i++){

            for(int j=0;j<len;j++){
                if(j<=i){
                    dp[i][j]=-1;
                }else{
                    dp[i][j]=A[j]-A[i];
                }
            }
        }
        for(int i=0;i<len;i++){

            for(int j=i+1;j<len;j++){
                int now = dp[i][j];
                if(dp[i][j+1]-now==)
            }

        }


        return count;
    }
