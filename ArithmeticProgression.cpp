#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;


class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int count=0;
        for(vector<int>::iterator it = A.begin();it!=A.end();it++){
            int num = *it;
            int des = *(it+1)-num;
            int t=0;
            for(vector<int>::iterator i = A.begin()+1;i+1!=A.end();i++){

                if(*i-num==des){
                    num=*i;
                    t++;
                }else
                    break;

            }
        if(t>=2)
            count++;
        }
        return count;
    }

};

/*void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}*/

int main() {
    string line;
    while (getline(cin, line)) {
        /*vector<int> A = stringToIntegerVector(line);*/
        vector<int> A ;
        for()
        int ret = Solution().numberOfArithmeticSlices(A);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
