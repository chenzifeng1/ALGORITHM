#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

bool CLJudge(char arr[9][9],int c,int l);//对行和列进行判断

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
        for(int i=0;i<9;i++){ //摒除行元素
            if(i!=c&&arr[c][i]!='.'){
                if(arr[c][i]==arr[c][l])
                    return false;
            }

        }
        for(int i=0;i<9;i++){ //摒除列元素
            if(i!=l&&arr[i][l]!='.'){
                if(arr[i][l]==arr[c][l])
                    return false;
            }

        }
    }
}

