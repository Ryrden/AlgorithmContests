#include <bits/stdc++.h>

using namespace std;

vector<int> circularGameLosers(int n, int k) {
    unordered_map<int,int> m;
    int curr = 1;
    m[curr]++;
    int i = 1;
    while(m[curr] <= 1){
        int nextFriend = (curr + (i*k)) % n;
        nextFriend = nextFriend == 0 ? n : nextFriend;
        i++;
        m[nextFriend]++;
        curr = nextFriend;
    }
    
    vector<int> ans;
    for(int i = 2; i <= n;i++){
        if (m[i] == 0){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    auto ans1 = circularGameLosers(5,2);
    auto ans2 = circularGameLosers(4,4);

    for(auto x : ans1){
        cout << x << " ";
    }
    cout << endl;

    for(auto x : ans2){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}