#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

struct typedef Disciple{
    char sects;//门派
    int x;//横坐标
    int y;//纵坐标
    int force;//内力
    int skill;//武艺
    int hp;//生命值
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

War war[12][12];//征战天下
Se sects[3];
void InitWar();
void check();
void Fight();

int main(){
    int n;
    int steps;//步数
    InitWar();//天下初开
    cin>>n>>steps;
    Di disciple[n];
    for(int i=0;i<n;i++){
        cin>>disciple[i].sects>>disciple[i].x>>disciple[i].y>>disciple[i].force>>disciple[i].skill>>disciple[i].hp;

        if(disciple[i].sects=='A'){
            sects[0].num++;
            sects[0].hpSum+=disciple[i].hp;
            war[disciple[i].x][disciple[i].y].A++;
        }else if(disciple[i].sects=='B'){
            sects[1].num++;
            sects[1].hpSum+=disciple[i].hp;
            war[disciple[i].x][disciple[i].y].B++;
        }else{
            sects[2].num++;
            sects[2].hpSum+=disciple[i].hp;
            war[disciple[i].x][disciple[i].y].C++;
        }
        war[disciple[i].x][disciple[i].y].num++;
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
    //天下初始化
    for(int i = 0;i<12;i++)
        for(int j =0;j<12;j++){
            war[i][j].A=0;
            war[i][j].B=0;
            war[i][j].C=0;
            war[i][j].num=0;
            war[i][j].isFight=false;
        }
 }
 //当且仅当天下中某个坐标内弟子数为2且属于不同门派的时候才会战斗
void Check(){
    for(int i=)
}
