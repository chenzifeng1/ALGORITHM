#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

/****************************************************************
 * coin Combinations: using dynamic programming
 *
 * Basic idea:
 * dp[i][j] = sum(dp[i-1][j-k*coins[i-1]]) for k = 1,2,..., j/coins[i-1]
 * dp[0][j] = 1 for j = 0, 1, 2, ..., sum
 *
 * Input:
 * coins[] - array store all values of the coins
 * coinKinds - how many kinds of coins there are
 * sum - the number you want to construct using coins
 *
 * Output:
 * the number of combinations using coins construct sum
 *
 * Usage:
 * c[3] = {1, 2, 5};
 * int result = coinCombinations(c, 3, 10);
 *
 ****************************************************************/

int CoinCombinationA(int coins[],int coinKinds,int sum);
int CoinCombinationB(int coins[],int coinKinds,int sum);

int main(){
    int coins[5]={3,4,5,7,10};
    int n = CoinCombinationA(coins,5,91);
    cout<<"n:"<<n<<endl;
    return 0;
}

//不限制使用次数
 int CoinCombinationA(int coins[],int coinKinds,int sum){
    //2-D array using vector: is equal to: dp[coinKinds+1][sum+1]={0}
    //比较二维向量数组：dp[coinKinds][sum+1]==0
    vector<vector<int> > dp(coinKinds+1);
    for(int i =0;i<=coinKinds;i++){
        dp[i].resize(sum+1);
    }
    for(int i=0;i<=coinKinds;i++){
        for(int j=0;j<=sum;j++){
            dp[i][j]=0;//初始化
        }
    }

    //init: dp[i][0] = 1; i = 0, 1, 2 ..., coinKinds
    //Notice: dp[0][0] must be 1, althongh it make no sense that
    //using 0 kinds of coins construct 0 has one way. but it the foundation
    //of iteration. without it everything based on it goes wrong

    for(int i=0;i<=coinKinds;i++){
        dp[i][0]=1;
    }
    // iteration: dp[i][j] = sum(dp[i-1][j - k*coins[i-1]])
    // k = 0, 1, 2, ... , j / coins[i-1]
    for(int i=1;i<=coinKinds;i++){
        for(int j =1;j<=sum;j++){
            dp[i][j]=0;
            for(int k=0;k<=j/coins[i-1];k++){
                dp[i][j]+=dp[i-1][j-k*coins[i-1]];
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return dp[coinKinds][sum];
 }


//每种硬币只能使用一个
int CoinCombinationB(int coins[],int coinKinds,int sum){
    int n=0;
    for(int i=0;i<coinKinds;i++){
        n+=coins[i];
    }
    if(sum>n)
        return -1;
    vector <int> dp(coinKinds+1);
    bool isUse[coinKinds];
    for(int i=0;i<coinKinds;i++)
        isUse = false;
    for(int i =0;i<coinKinds;i++){
        dp.insert(coins[i]);
    }
    int s=0;


}
