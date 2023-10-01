#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>

//class Graph {
//private:
//    int V; // Брой върхове
//    std::vector<std::list<int>> adj; // Списъци на съседство
//    std::vector<bool> visited; // Масив за отбелязване на посетените върхове
//
//public:
//    Graph(int vertices); // Конструктор
//    void addEdge(int v, int w); // Добавяне на ребро към графа
//    bool isConnected(); // Проверка за свързаност чрез DFS
//    void DFS(int v); // DFS алгоритъм за обхождане на графа
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj.resize(vertices);
//    visited.resize(vertices, false);
//}
//
//void Graph::addEdge(int v, int w) {
//    // Добавяне на връзка между връх v и връх w
//    adj[v].push_back(w);
//    adj[w].push_back(v); // Защото този граф е ненасочен
//}
//
//void Graph::DFS(int v) {
//    visited[v] = true;
//    for (int neighbor : adj[v]) {
//        if (!visited[neighbor]) {
//            DFS(neighbor);
//        }
//    }
//}
//
//bool Graph::isConnected() {
//    // Извикваме DFS, за да обходим графа от първия връх
//    DFS(0);
//
//    // Проверяваме дали всички върхове са били посетени
//    for (bool status : visited) {
//        if (!status) {
//            return false; // Графът не е свързан
//        }
//    }
//
//    return true; // Графът е свързан
//}
//
//int main() {
//    int N, R;
//    std::cout << "Enter the number of vertices (N) and edges (R): ";
//    std::cin >> N >> R;
//
//    Graph g(N); // Създаваме граф с N върха
//
//    std::cout << "Enter the edges:" << std::endl;
//    for (int i = 0; i < R; ++i) {
//        int v, w;
//        std::cin >> v >> w;
//        g.addEdge(v - 1, w - 1); // Върховете се номерират от 0 до N-1
//    }
//
//    if (g.isConnected()) {
//        std::cout << "1"; // Графът е свързан
//    }
//    else {
//        std::cout << "0"; // Графът не е свързан
//    }
//
//    return 0;
//}


using namespace std;

//int main() {
//    int n;
//    cin >> n;
//    vector<int> arr(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int middle = n / 2;
//
//    // Сортираме първата половина във възходящ ред
//    for (int i = 0; i < middle - 1; i++) {
//        int minIndex = i;
//        for (int j = i + 1; j < middle; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//        swap(arr[i], arr[minIndex]);
//    }
//
//    // Сортираме втората половина в низходящ ред
//    for (int i = middle; i < n - 1; i++) {
//        int maxIndex = i;
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] > arr[maxIndex]) {
//                maxIndex = j;
//            }
//        }
//        swap(arr[i], arr[maxIndex]);
//    }
//
//    // Извеждаме сортирания масив
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

//class Graph {
//private:
//    int V;
//    vector<list<int>> adj;
//    vector<bool> visited;
//
//public:
//    Graph(int vertices);
//    void addEdge(int v, int w);
//    void DFS(int v);
//    int countConnectedComponents();
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj.resize(vertices);
//    visited.resize(vertices, false);
//}
//
//void Graph::addEdge(int v, int w) {
//    adj[v].push_back(w);
//    adj[w].push_back(v);
//}
//
//void Graph::DFS(int v) {
//    visited[v] = true;
//    for (int neighbor : adj[v]) {
//        if (!visited[neighbor]) {
//            DFS(neighbor);
//        }
//    }
//}
//
//int Graph::countConnectedComponents() {
//    int count = 0;
//    for (int i = 0; i < V; i++) {
//        if (!visited[i]) {
//            DFS(i);
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    int n, r;
//    cin >> n >> r;
//
//    Graph g(n);
//
//    for (int i = 0; i < r; i++) {
//        int v, w;
//        cin >> v >> w;
//        g.addEdge(v - 1, w - 1);
//    }
//
//    int connectedComponents = g.countConnectedComponents();
//    cout << connectedComponents << endl;
//
//    return 0;
//}


class Graph {
private:
    int V;
    vector<list<int>>adj;
    vector<bool> visited;

public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void Dfs(int v);
    int count();
};

Graph::Graph(int vertices) {
    V = vertices;
    adj.resize(vertices);
    visited.resize(vertices, false);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void Graph::Dfs(int v) {
    visited[v] = true;
    for (int neighbor : adj[v]) {
        if (!visited[neighbor]) {
            Dfs(neighbor);
        }
    }

}
int Graph::count() {
    int count = 0;
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            Dfs(i);
            count++;
        }
    }
    return count;
}

int main() {
    int n, r;
    cin >> n >> r;

    Graph g(n);
    for (int i = 0; i < r; i++) {
        int v, w;
        cin >> v >> w;
        g.addEdge(v -1 , w - 1);
    }

    int count = g.count();
    cout << count << endl;

    return 0;
}