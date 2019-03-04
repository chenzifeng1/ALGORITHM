#include <cstdio>
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
const int maxi=11;
int counter=0;
int index;
int hashTable[maxi]={false};
int n,P[maxi];
void generateQ(int index);

int main(){
    cin>>n;
    generateQ(1);
    for(int i=0;i<n;i++){
        cout<<P[i];
    }
}

void generateQ(int index){
    if(index==n+1){
        counter++;
        return ;
    }
    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){
            bool flag=true;
            for(int pre=1;pre<index;pre++){
                if(abs(index-pre)==abs(x-P[pre])){  //两个皇后的行列之差的绝对值相等则说明两者在同一个对角线上
                    flag=false;
                    break;
                }
            }
            if(flag){
                P[index]=x;//将index位皇后放在x行
                hashTable[x]=true;//将x行的标志置为true，表示已经有皇后占领
                generateQ(index+1);//递归测试index+1位
                hashTable[x]=false;//递归测试结束，将原标记置回
            }
        }
    }
}
