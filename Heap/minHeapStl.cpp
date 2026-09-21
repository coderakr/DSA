#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(8);
    pq.push(-1);
    pq.push(3);
    pq.push(4);
    cout << pq.top() << endl;    // -1
    pq.pop();
    pq.pop();
    cout << pq.top() << endl;    // 2
    return 0;
}
