#include <cstdio>

int PascalT(int k);
/*��Ŀ�����������
    ����Ϊ1��ż��Ϊ0
    ����K�е������������ײ����ֵ������ײ��ж�������
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
    //��ʼ��
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
