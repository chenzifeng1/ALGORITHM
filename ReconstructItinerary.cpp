#include <vector>
#include <utility>
#include <stack>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    vector<string> findItinerary(vector<pair<string, string> > tickets) {
        vector<string> ps;
        pair<int,string> index0;//这个pair来记录机票中的第一个出发地的下标及目的地
        bool visit[tickets.size()];
        for(int i =0;i<tickets.size();i++){
            visit[i]=false;
        }
        index0.second="ZZZ";
        for(int i=0;i<tickets.size();i++){

            if(!tickets[i].second.compare("JFK")&&tickets[i].second<index0.second){
                index0.first=i;
                index0.second=tickets[i].second;
            }
        }
        ps.push_back("JFK");

        string next = tickets[0].second;
        stack<string> aim;
        aim.push(next);

        visit[index0.first]=true;
        while(aim.size()>0){
            ps.push_back(aim.top());
            string a ="ZZZ";

            for(int i=0;i<tickets.size();i++){
                if((tickets[i].second.compare(aim.top())==0)&&visit[i]!=true&&a > aim.top()){
                        a.erase();

                        a.append(aim.top());
                }
            }
            if(a.compare("ZZZ")!=0){
                aim.pop();
                aim.push(a);
                continue;
            }
            aim.pop();

        }
        return ps;
    }
};

int main(){
     Solution s = Solution();

    vector<pair<string, string> > tickets;
    int n;
    cin>>n;

    int i=0;
    while(n--){
        string city1,city2;
        cout<<"please in put the city:"<<endl;
        cin>>city1;
        cin>>city2;
        tickets.push_back(make_pair(city1,city2));
    }
    vector<string>rote= s.findItinerary(tickets);
    for(vector<string>::iterator it = rote.begin();it!=rote.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    system("pause");

    return 0;

}
