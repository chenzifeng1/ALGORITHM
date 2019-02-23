#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Student{
    char id[10];
    int de,cai,sum;
    int flag;
}stu[100010];

bool cmp(Student a,Student b){
    if(a.flag!=b.flag) return a.flag<b.flag;//判断不同类的学生,小类优秀度高
    else if(a.sum!=b.sum) return a.sum>b.sum;
    else if(a.de!=b.de) return a.de>b.de;
    else return strcmp(a.id,b.id)<0; //strcmp(str1,str2)函数:str1=str2 返回0 /str1<str2 返回负数/str1>str2 返回正数
}
int main(){
    int N,L,H;
    cin>>N>>L>>H;
    int m =N;
    for(int i=0;i<N;i++){
        cin>>stu[i].id>>stu[i].de>>stu[i].cai;
        stu[i].sum=stu[i].de+stu[i].cai;
        if(stu[i].de<L||stu[i].cai<L){
            stu[i].flag=5;
            m--;
        }
        else if(stu[i].de>=H){
            if(stu[i].cai>=H)
                stu[i].flag=1;
            else
                stu[i].flag=2;
        }
        else {
            if(stu[i].de>stu[i].cai)
                stu[i].flag=3;
            else
                stu[i].flag=4;
        }
    }
        sort(stu,stu+N,cmp);
        cout<<"the num of pass student:"<<m<<endl;
        for(int i=0;i<m;i++){
            cout<<stu[i].id<<" "<<stu[i].de<<" "<<stu[i].cai<<endl;
        }
        return 0;
}
