#include <queue>
using namespace std;

int main(void) {
    queue<int> q;
    q.push(7);
    q.push(5);
    q.pop();
    q.push(6);

    while (!q.empty()) 
    {
        printf("%d", q.front());
    }
    
    return 0;
}