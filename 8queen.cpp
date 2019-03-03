#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;
const int maxi=11;
int counter=0;
int index;
int hashTable[maxi]={false};
int n,P[maxi];
void generateQ(int index);

int main(){


    cin>>n;
    if(n>=1)
        int row[n],col[n];//ппап

}

void generateQ(int index){
    if(index==n+1){
        counter++;
        return ;
    }
    for(int x=0;x<n;x++){
        if(hashTable[x]==false){
            bool flag=true;
            for(int pre=1;pre<index;pre++){

            }
        }
    }
}
