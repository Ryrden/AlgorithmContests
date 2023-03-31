#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>
#define print(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl
#define printArray(arr) for(auto x : arr) cout << x << ' '; cout << endl;

using namespace std;

vector<int> divisibilityArray(string word, int m) {    
    vector<int> ans;
    long rest = 0;
    for(char ch : word){
        int digit = ch - '0';
        rest = (10*rest + digit) % m;
        if (rest == 0){
            ans.push_back(1);
        }else {
            ans.push_back(0);
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string str1 = "529282143571";
    int m = 4;

    auto ans = divisibilityArray(str1,m);

    print(ans,0,ans.size());

    return 0;
}