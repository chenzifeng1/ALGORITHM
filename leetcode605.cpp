#include <iostream>
#include <cstdio>
using namespace std;

int maxY(int n);
class Solution {
private:
    int time=0;

public:
    int minSteps(int n) {


    }
    /*void copy(int num,int n){
        copyNum=text;
    }
    void paste(){
        text+=copyNum;
    }*/
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
    if(n<=1)
        cout<<s.dp(n)<<endl;
    else if(n%2==0){
        cout<<s.dp(n/2)+1<<endl;

        }else
    cout<<s.dp(n)<<endl;

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
