#include <iostream>
#include <cstdio>
using namespace std;

int maxY(int n);
class Solution {
private:
    int time=0;

public:
   int minSteps(int n) {

    int res = 0;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                cout<<n<<"*"<<i<<endl;
                res += i;
                n /= i;
            }
        }
        return res;
    }

    void showTime(){
        cout<<"the min steps is "<<time<<endl;
    }
    int dp(int num){
        if(num==1){
            //cout<<num<<" ";
            return 1;
        }
         else if(num%2==0){
            num/=2;
            //cout<<num<<" ";
            return dp(num)+2;//第一次也加了2
            //time++;
        }else {
            int a=maxY(num);//找到num的最大约数
            int b=num/a;
            if(a!=1){
            num/=a;
            //cout<<num<<" ";
            return dp(num)+b;
            }else{
            return num;
            }

         }
    }
};

int main(){
    Solution s = Solution();
    int n ;
    cin>>n;
    cout<<s.minSteps(n);

    return 0;
}

int maxY(int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            max=i;
        }
    }
    return max;
}
