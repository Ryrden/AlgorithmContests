#include <bits/stdc++.h>

using namespace std;

bool doesValidArrayExist(vector<int>& derived) {
    int num = 1;
    for(int i = 0; i < derived.size() - 1; i++){
        num = num ^ derived[i];
    }
    return num != derived[derived.size() - 1];
}

int main(){
    vector<int> ans1 = {1,1,0};
    vector<int> ans2 = {1,1};
    vector<int> ans3 = {1,0};
    cout << doesValidArrayExist(ans1) << endl;
    cout << doesValidArrayExist(ans2) << endl;
    cout << doesValidArrayExist(ans3) << endl;

    return 0;
}