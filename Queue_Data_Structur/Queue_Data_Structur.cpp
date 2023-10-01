#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    queue<int>q1;
    cout << "How many elements will your queue have? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int e; 
        cin >> e;
        q1.push(e);
    }
    cout << "The size of yor queue is " << q1.size() << endl;
    cout << "her is the Dequeue:";
    while (!q1.empty())
    {
        cout << q1.front() << endl;
        q1.pop(); 
    }
    if (q1.empty()) {
        cout << "No Elements in the queue" << endl;
    }
    return 0;
}

