#include <cstdio>
#include <iostream>

//德才录取数组版
using namespace std;



typedef struct Student{
    int id;
    int de;
    int cai;
    int sum;
}Stu;

void bubbleSort(Stu *stu,int n);
int main(){
    int N,L,H;
    cin>>N>>L>>H;
    Stu student[N];
    Stu studentA[N];
    Stu studentB[N];
    Stu studentC[N];
    Stu studentD[N];
    Stu studentE[N];
    int a=0,b=0,c=0;
    int d=0,e=0;
    int id,de,cai;

    for(int i = 0;i<N;i++){
        cin>>id;
        cin>>de;
        cin>>cai;
       // scanf("%d%d%d",&id,&de,&cai);
        student[i] = {id,de,cai,de+cai,};//初始化新节点
    }
    for(int i =0;i<N;i++){
        if(student[i].de>=H){
            if(student[i].cai>=H){//第一类学生
                studentA[a]=student[i];
                a++;
            }else if(student[i].cai>=L){//第二类学生
                studentB[b]=student[i];
                b++;
            }
        }else if(student[i].de>=L){
            if(student[i].de>student[i].cai){//第三类学生
                studentC[c]=student[i];
                c++;
            }else if(student[i].cai>L){
                studentD[d]=student[i];
                d++;
            }else{
                studentE[e]=student[i];
                e++;
            }
        }else{
                studentE[e]=student[i];
                e++;
        }
    }

    while(a--){
        cout<<"stu["<<a<<"].sum"<<studentA[a].sum;
    }
    //bubbleSort(studentA,a);
    //bubbleSort(studentB,b);
    //bubbleSort(studentC,c);
    //bubbleSort(studentD,d);
    //bubbleSort(studentE,e);
   /* for(int i=0;i<a;i++){
        cout<<studentA[i].id<<" "<<studentA[i].id<<" "<<studentA[i].id<<endl;
    }*/
    cin>>a;
    return 0;

}


/*void bubbleSort(Stu *stu,int n){
    if (n>0){
        int flag;
        Stu *now;
        for(int i =0;i<n;i++){
            flag = 1;
            for(int j = i+1;j<n;j++){
                if(stu[j].sum<stu[j].sum){
                    flag = 0;
                    *now = stu[j];
                    stu[j]=stu[j+1];
                    stu[j+1]=now;
                }else if((stu[j].sum)==(stu[j+1].sum)){
                    if(stu[j].de<stu[j+1].de){
                        flag = 0;
                        *now = stu[j];
                        stu[j]=stu[j+1];
                        stu[j+1]=now;
                    }else if (stu[j].de==stu[j+1].de){
                        if(stu[j].id>stu[j+1].id){
                            flag = 0;
                            *now = stu[j];
                            stu[j]=stu[j+1];
                            stu[j+1]=*now;
                    }
                    }
                }
            }
        }
    }


}
*/
