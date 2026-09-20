#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.pop();
    cout << pq.top();
    return 0;
}
