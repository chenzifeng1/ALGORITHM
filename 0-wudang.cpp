#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

struct typedef Disciple{
    char sects;//����
    int x;//������
    int y;//������
    int force;//����
    int skill;//����
    int hp;//����ֵ
}Di;
struct typedef Sects{
    char sign;
    int num;
    int hpSum;
}Se;
struct typedef World{
    int A;
    int B;
    int C;
    int num;
    bool isFight;
}War;

War war[12][12];//��ս����
Se sects[3];
Di discipleA[n];
Di discipleB[n];
Di discipleC[n];
int a=0,b=0,c=0;
void InitWar();
void check();
void Fight();
void Input(int n);
void DiscipleInput(char sects,int x,int y,int force,int skill,int hp);

int main(){
    int n;
    int steps;//����
    InitWar();//���³���
    cin>>n>>steps;
    Input(n);

    while(steps--){

    }

}

 void InitWar(){
    sects[0].sign ='A';
    sects[1].sign ='B';
    sects[2].sign ='C';
    for(int i=0;i<3;i++){
        sects[i].num=0;
        sects[i].hpSum=0;
    }
    //���³�ʼ��
    for(int i = 0;i<12;i++)
        for(int j =0;j<12;j++){
            war[i][j].A=0;
            war[i][j].B=0;
            war[i][j].C=0;
            war[i][j].num=0;
            war[i][j].isFight=false;
        }
 }

 //����
void Input(int n ){
    for(int i=0;i<n;i++){
        char sects;
        int x,y,force,skill,hp;
        cin>>sects>>x>>y>>force>>skill>>hp;
        DiscipleInput(sects,x,y,force,skill,hp);
        war[disciple[i].x][disciple[i].y].num++;
    }
}



//���ҽ���������ĳ�������ڵ�����Ϊ2�����ڲ�ͬ���ɵ�ʱ��Ż�ս��
void Check(){
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++){
            if(war[i][j].num==2&&war[i][j].A<=1&&war[i][j].B<=1&&war[i][j].C<=1)
                war[i][j].isFight=true;
            else
                war[i][j].isFight=false;
    }
}

void DiscipleInput(char sects,int x,int y,int force,int skill,int hp){
    if(sects=='A'){
        sects[0].num++;
        sects[0].hpSum+=hp;
        war[x][y].A++;
        discipleA[a].sects='A';
        discipleA[a].x=x;
        discipleA[a].y=y;
        discipleA[a].force=force;
        discipleA[a].skill=skill;
        discipleA[a].hp=hp;
        a++;
    }else if(sects=='B'){
        sects[1].num++;
        sects[1].hpSum+=hp;
        war[x][y].B++;
        discipleB[b].sects='B';
        discipleB[b].x=x;
        discipleB[b].y=y;
        discipleB[b].force=force;
        discipleB[b].skill=skill;
        discipleB[b].hp=hp;
        b++;
    }else if(sects=='C'){
        sects[2].num++;
        sects[2].hpSum+=hp;
        war[x][y].C++;
        discipleC[c].sects='B';
        discipleC[c].x=x;
        discipleC[c].y=y;
        discipleC[c].force=force;
        discipleC[c].skill=skill;
        discipleC[c].hp=hp;
        c++;
    }
}


void Fight(){
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++){
            if(war[i][j].isFight){
                if(war[i][j].A==0){

                }
            }
        }
}
