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

 int CoinCombination(int coins[],int coinKinds,int sum);

int main(){

    return 0;
}
 int CoinCombination(int coins[],int coinKinds,int sum){
    //2-D array using vector: is equal to: dp[coinKinds+1][sum+1]={0}
    //比较二维向量数组：dp[coinKinds][sum+1]==0
    vector<vector<int>> dp(coinKinds+1);
    for()
 }

