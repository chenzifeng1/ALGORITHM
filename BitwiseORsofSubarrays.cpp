#include <vector>
#include <set>
#include <iostream>
#include <map>
using namespace std;


class SolutionA {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        int len = A.size();
        if(len == 0) return 0;
        vector<int> dp(len);
        map<int,int> vis;
        int ans=1;
        vis[A[0]] = 1;
        dp[0] = A[0];
        for(int i=1;i<len;i++){
            dp[i] = A[i];
            if(vis[dp[i]] == 0){
                vis[dp[i]] = 1;
                ans++;
            }
            for(int j=i-1;j>=0;j--){
                int temp = A[i] | dp[j];
                if(temp == dp[j]) break;
                if(vis[temp] == 0){
                    vis[temp] = 1;
                    ans++;
                }
                dp[j] = temp;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {

        set<int> memo;

        int now = A[0];
        for(int i=0;i<A.size();i++){
          memo.insert(A[i]);
            int now =0;
            now = A[i];
            for(int j=i+1;j<A.size();j++){

                    now = A[j]|now;
                    memo.insert(now);

            }

        }
        for(set<int>::iterator it = memo.begin();it!=memo.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        return memo.size();
    }

};

int main(){
    Solution s = Solution();
    vector<int> A;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        A.push_back(c);
    }
    int num=s.subarrayBitwiseORs(A);
    cout<<"the number is :"<<num<<endl;
    return 0;
}
