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
                if(abs(index-pre)==abs(x-P[pre])){  //�����ʺ������֮��ľ���ֵ�����˵��������ͬһ���Խ�����
                    flag=false;
                    break;
                }
            }
            if(flag){
                P[index]=x;//��indexλ�ʺ����x��
                hashTable[x]=true;//��x�еı�־��Ϊtrue����ʾ�Ѿ��лʺ�ռ��
                generateQ(index+1);//�ݹ����index+1λ
                hashTable[x]=false;//�ݹ���Խ�������ԭ����û�
            }
        }
    }
}
