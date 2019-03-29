#include <iostream>
#include <stdlib.h>

using namespace std;

class Solution {
public:
        Solution()
        {
            cout<<"begin!"<<endl;
        }
        void generate(int numRows) {
        int num =0;
        for(int i =1;i<=numRows;i++){
            num+=i;
        }
        int yanghuiTriangle[numRows][numRows];
        int index=1;
        for(int i =0;i<numRows;i++){
            for(int j = 0;j<numRows;j++)
                yanghuiTriangle[i][j]=-1;
            yanghuiTriangle[i][0]=1;
            yanghuiTriangle[i][i]=1;
        }

        for(int i=1;i<numRows;i++){
            for(int j=1;j<i;j++)
            {
                yanghuiTriangle[i][j]=
                yanghuiTriangle[i-1][j-1]+yanghuiTriangle[i-1][j];
            }

        }
            for(int i =0;i<numRows;i++){

                    int ws =numRows-i+1;
                    while(ws--){
                        cout<<" ";
                    }
                    cout<<"[";
                for(int j = 0;j<=i;j++){
                    cout<<yanghuiTriangle[i][j];
                    if(j!=i)
                        cout<<",";
                }
                    cout<<"],"<<endl;


        }

    }

};

int main(){
    int n;
    cin>>n;
    Solution *s =new Solution();
    s->generate(n);
    system("pause");
    return 0 ;
}
