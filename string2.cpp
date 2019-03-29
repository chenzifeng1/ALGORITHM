#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int max = 100;
    int counter = 0;
    cout<<str<<endl;
    while(max--&&str.size()!=0){
        int index=str.find(' ');

        if(index == -1)
            break;
        str.erase(0,index+1);

        cout<<str<<endl;
        counter++;
    }
    cout<<"max:"<<max<<endl;
    cout<<"counter:"<<counter<<endl;
    system("pause");
    return 0;
}
