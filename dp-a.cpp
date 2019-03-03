 #include <cstdio>
 #include <iostream>

 using namespace std;
 int main(){
    int n;
    cin>>n;
    int a[n],s[n],dp[n];//dp[i]表示以a[i]元素为结尾的连续数列的最大和 s[i]表示dp[i]是从哪个元素开始的
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
        /*for(int i =0;i<n;i++){
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
        }*/
        dp[0]=a[0];
        for(int i=0;i<n;i++){
            //状态转移方程
            if(dp[i-1]+a[i]>a[i]){
                dp[i]=dp[i-1]+a[i];
                s[i]=s[i-1];
            }else {
                dp[i]=a[i];
                s[i]=i;
            }
            //dp[i]存放以a[i]为结尾的连续序列的最大和
            //因此需要遍历i得到最大的才是结果
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(dp[i]>dp[k]){
                k=i;
            }
        }
    }

    cout<<dp[k]<<" "<<a[s[k]]<<" "<<a[k];
    //cout<<result<<" "<<sign<<" "<<s[sign];

 }
