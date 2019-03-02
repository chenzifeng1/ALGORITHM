 #include <cstdio>
 #include <iostream>

 using namespace std;
 int main(){
    int n;
    cin>>n;
    int a[n],s[n],dp[n];
    for(int i =0;i<n;i++){
        dp[i]=0;
        s[i]=0;
    }
    bool isNegative=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0)
            isNegative=false;
    }
    if(isNegative){
        //全负数的情况
        cout<<0<<" "<<a[0]<<" "<<a[n-1];
    }else{
        for(int i =0;i<n;i++){
            int max=a[i];
            int now=a[i];
            if(a[i]>0){
                for(int j=i+1;j<n;j++){
                    now+=a[j];
                    //cout<<now<<" ";
                    if(now>max){
                        max=now;
                        s[i]=j;
                        dp[i]=now;
                    }

                }
                //cout<<"s:"<<s[i]<<" dp[i]:"<<dp[i]<<endl;
            }
        }
    }
    int result=0;
    int sign;
    for(int i=0;i<n;i++){
        if(dp[i]>result){
            result=dp[i];
            sign=i;
        }
    }
    cout<<result<<" "<<sign<<" "<<s[sign];
 }
