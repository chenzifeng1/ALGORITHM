#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    /*int largestRectangleArea(vector<int>& heights) {
        if (heights.size()==0){
            return 0;
        }
        int stack[heights.size()];
        int top = 0;
        int max =-1;
        int dp[heights.size()];
        for(int i=0;i<heights.size();i++){
            dp[i]=0;
        }
        for(int i=0;i<heights.size();i++){
            stack[i]=heights[i];
            top++;
        }


        for(int i=0;i<heights.size();i++){
            dp[i]=stack[i];
            cout<<dp[i]<<" ";
            int m=0;
            for(int j=i;j<heights.size();j++){
                int mi =minN(heights,i,j);
                m=mi*(j-i+1);
                if(max<m){
                    max =m;

                }
            }
        }
        cout<<endl;
        return max;
    }
    int minN(vector<int>& heights,int n,int m ){
        int mina=heights[n];
        for(int i=n;i<=m;i++){
            if(mina>heights[i]){
                mina=heights[i];
            }
        }
        cout<<"the "<<n<<" 's min is "<<mina<<endl;
         return mina;
    }*/
    int largestRectangleArea(vector<int>& heights) {
    heights.push_back(0);
    stack<int> stk;
    int maxarea = 0;
    for(int i = 0;i<heights.size();i++)
    {
        while(!stk.empty() && heights[i]<heights[stk.top()])
        {
            int index = stk.top();
            stk.pop();
            maxarea = max(maxarea,heights[index]*(stk.empty()? i:(i - stk.top() -1)));
        }
        stk.push(i);
    }
    return maxarea;
};


int main(){
    int n;
    cin>>n;
    vector<int> arr(0);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.insert(arr.begin()+i,num);
    }
    int time=0;
    cout<<"the size of vector:"<<arr.size()<<endl;
    Solution s = Solution();
    time=s.largestRectangleArea(arr);
    cout<<time<<endl;
}
