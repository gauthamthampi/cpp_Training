#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <functional> // For std::greater

int main() {
    // Stack example (LIFO)
    std::stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    std::cout << "Stack top: " << stk.top() << "\n"; // 30
    stk.pop();
    std::cout << "Stack top after pop: " << stk.top() << "\n"; // 20

    // Queue example (FIFO)
    std::queue<std::string> q;
    q.push("Alice");
    q.push("Bob");
    q.push("Charlie");
    std::cout << "\nQueue front: " << q.front() << "\n"; // Alice
    std::cout << "Queue back: " << q.back() << "\n";    // Charlie
    q.pop();
    std::cout << "Queue front after pop: " << q.front() << "\n"; // Bob

    // Priority queue example (max-heap by default)
    std::priority_queue<int> pq;
    pq.push(40);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    std::cout << "\nPriority queue top (max): " << pq.top() << "\n"; // 40
    pq.pop();
    std::cout << "Priority queue top after pop: " << pq.top() << "\n"; // 30

    // Min-heap priority queue example using std::greater
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(40);
    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(20);
    std::cout << "\nMin-heap priority queue top: " << min_pq.top() << "\n"; // 10

    return 0;
}