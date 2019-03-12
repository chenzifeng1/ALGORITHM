#include <string>
#include <iostream>
#include <cstdio>

using namespace std;
class Solution {
public:
    string nearestPalindromic(string n) {
        if(n.length()==1){
            char c = n.at(0);
            c=c-1;
            cout<<c<<endl;
            n.erase(0);
            return n.insert(0,1,c);
        }
        long long num=0;
        int que[n.length()];
        for(int i=0;i<n.length();i++){
            que[i]=n.at(i)-'0';
        }
        if(n.length()%2==0){
            if(!isPalindrome(que,n.length())){
                for(int i= 0,j =n.length()-1;i<j;i++,j--){
                    que[j]=que[i];
                }
            }else{
                que[n.length()/2-1]--;
                for(int i= 0,j =n.length()-1;i<j;i++,j--){
                    que[j]=que[i];
                }
            }
        }else{
            if(!isPalindrome(que,n.length())){
                for(int i= 0, j =n.length()-1;i<j-1;i++,j--){
                    que[j]=que[i];
                }
            }else{
                que[n.length()/2]--;
                for(int i= 0, j =n.length()-1;i<j-1;i++,j--){
                    que[j]=que[i];
                }
            }

        }

        string m;
        for(int i=0;i<n.length();i++){
            char c =que[i]+'0';
            m.insert(i,1,c);
        }
        return m;
    }

    bool isPalindrome(int que[],int n){

        if(n%2==0){
             for(int i= 0, j =n-1;i<j-1;i++,j--){
                if( que[j]=!que[i]){
                    cout<<"false"<<endl;
                    return false;
                }
            }
        }else{
            for(int i= 0, j =n-1;i<j-1;i++,j--){
                if(que[j]!=que[i]){
                    cout<<"false"<<endl;
                    return false;
                }

            }
        }
        cout<<"true"<<endl;
        return true;

    }
};

int main(){
    string str;
    cin>>str;
    Solution s = Solution();
    cout<<s.nearestPalindromic(str)<<endl;
}
