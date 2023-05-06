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
#define printStack(s) while(!s.empty()){cout << s.top() << ' '; s.pop();} cout << endl;
#define printQueue(q) while(!q.empty()){cout << q.front() << ' '; q.pop();} cout << endl;
#define printMap(m) for(auto x : m) cout << x.first << ' ' << x.second << endl;
#define _ << ' ' <<
#define endl '\n'

using namespace std;

void solve() {
    int n;cin>>n;
    int minTime = INT_MAX;
    int skill1 = INT_MAX;
    int skill2 = INT_MAX;
    int currentTime = 0;
    while(n--){
        int book;
        string skill;
        cin>>book>>skill;
        int a = skill[0] - '0';
        int b = skill[1] - '0';

        if (a == 1){
            skill1 = min(book,skill1);
        }
        if (b == 1){
            skill2 = min(book, skill2);
        }
        if (a == 1 and b == 1){
            minTime = min(book,minTime);
        }else{
            minTime = min(skill1+skill2,minTime);
        }
        if (minTime < 0)
            minTime = INT_MAX;
    }
    cout << (minTime == INT_MAX ? -1 : minTime) << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}