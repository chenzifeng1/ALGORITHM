#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

bool CLJudge(char arr[9][9],int c,int l);//���к��н����ж�

int main(){
    char arr[9][9];
    for(int i=0;i<9;i++){
        for(int j;j<9;j++){
            scanf("%d",&arr[i][j]);
        }
    }

}

bool CLJudge(char &arr[9][9],int c,int l){
    if(c-'0'<0||c-'0'>8||l-'0'<0||l-'0'>8)
        return false;
    char a = arr[i][j];
    if(a!='.'){
        for(int i=0;i<9;i++){ //�����Ԫ��
            if(i!=c&&arr[c][i]!='.'){
                if(arr[c][i]==arr[c][l])
                    return false;
            }

        }
        for(int i=0;i<9;i++){ //�����Ԫ��
            if(i!=l&&arr[i][l]!='.'){
                if(arr[i][l]==arr[c][l])
                    return false;
            }

        }
    }
}

