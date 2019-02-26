#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

bool CLJudge(char arr[9][9],int c,int l);//对行和列进行判断

//判断标志
bool sign =false;
int a = '.'-'0';


int arr[9][9];
void Input();
void Output();
bool check(int n,int key);
int DFS(int n);

int main(){
    Input();
    DFS(0);
    Output();

    return 0 ;
}


void Input(){
    char n[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>n[i][j];
            arr[i][j]=n[i][j]-'0';
        }
    }
}

void Output(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


//判断key填入n时是否符合条件,n：第n个格子
bool check(int n,int key){
    //判断列是否符合
    for(int i=0;i<9;i++){
        //j为列坐标
        int j = n/9;
        if(arr[j][i]==key)
            return false;
    }
    //判断行坐标是否符合
    for(int i=0;i<9;i++){
        //j为行坐标
        int j = n%9;
        if(arr[i][j]==key)
            return false;
    }
    //x为key所在的九宫格的第一个元素的列坐标
    int x = n/9/3*3;
    //y为key所在的九宫格的第一个元素的横坐标
    int y = n%9/3*3;

    for(int i =x;i<x+3;i++)
        for(int j =y;j<y+3;j++)
            if(arr[i][j]==key)
                return false;
    //全部正确，返回true
    return true;
}

int DFS(int n){
    if(n>80){
        sign =true;
        return 0;
    }
    //如果第n个元素不是'.'即为数字，则跳过
    if(arr[n/9][n%9]!=a){
        DFS(n+1);
    }else{//当第n个元素为空时，对该元素进行枚举测试
        for(int i=1;i<10;i++){
            if(check(n,i)==true){
                arr[n/9][n%9]=i;
                DFS(n+1);//继续
                //从迭代中返回时，如果构造成功直接在此处返回
                if(sign == true)
                    return 0;//匹配成功
                arr[n/9][n%9]=a;//匹配不成功，将其还原
            }
        }
    }


}
