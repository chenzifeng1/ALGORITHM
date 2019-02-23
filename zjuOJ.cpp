#include <cstdio>

int PascalT(int k);
/*题目：杨辉三角形
    奇数为1，偶数为0
    计算K行的杨辉三角中最底层的数值，即最底层有多少奇数
*/
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int k;
        scanf("%d",&k);
        printf("%d",PascalT(k));
    }

}
int PascalT(int k){
    if(k<=0)
        return 0;

    else if(1==k)
        return 1;
    else if (2==k)
        return 2;
    int pt[k][k];
    //初始化
    for(int i=0;i<k;i++){
        pt[i][0]=1;
        pt[i][i]=1;
    }
    for(int i =2;i<k;i++){
        for(int j=1;j<i;j++){
            pt[i][j]=pt[i-1][j-1]+pt[i-1][j];
        }
    }
    int num = 0;
    for(int j=0;j<k;j++){
        if(pt[k-1][j]%2==1){
            num++;
        }
    }
    return num;
}
