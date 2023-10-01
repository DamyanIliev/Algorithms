#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>
using namespace std;

//class Edge {
//public:
//    int DestinationVertexID;
//    int weight;
//    Edge() {}
//    Edge(int destVID, int w) {
//        DestinationVertexID = destVID;
//        weight = w;
//    }
//    void setEdgeValues(int destVID, int w) {
//        DestinationVertexID = destVID;
//        weight = w;
//    }
//    void setWeight(int w) {
//        weight = w;
//    }
//    int getDestinationVertexID() {
//        return DestinationVertexID;
//    }
//    int getWeight() {
//        return weight;
//    }
//};
//class Vertex {
//public:
//    int state_id;
//    string state_name;
//    list < Edge > edgeList;
//    Vertex() {
//        state_id = 0;
//        state_name = "";
//    }
//    Vertex(int id, string sname) {
//        state_id = id;
//        state_name = sname;
//    }
//    int getStateID() {
//        return state_id;
//    }
//    string getStateName() {
//        return state_name;
//    }
//    void setID(int id) {
//        state_id = id;
//    }
//    void setStateName(string sname) {
//        state_name = sname;
//    }
//    list < Edge > getEdgeList() {
//        return edgeList;
//    }
//    //  void addEdgeToEdgelist(int toVertexID, int weight)
//    //  {
//    //          Edge e(toVertexID,weight);
//    //        edgeList.push_back(e); 
//    //        cout<<"Edge between "<<state_id<<" and "<<toVertexID<<" added Successfully"<<endl;     
//    //  }
//    void printEdgeList() {
//        cout << "[";
//        for (auto it = edgeList.begin(); it != edgeList.end(); it++) {
//            cout << it->getDestinationVertexID() << "(" << it->getWeight() << ") --> ";
//        }
//        cout << "]";
//        cout << endl;
//    }
//    void updateVertexName(string sname) {
//        state_name = sname;
//        cout << "Vertex Name Updated Successfully";
//    }
//};
//class Graph {
//    vector < Vertex > vertices;
//public:
//    bool checkIfVertexExistByID(int vid) {
//        bool flag = false;
//        for (int i = 0; i < vertices.size(); i++) {
//            if (vertices.at(i).getStateID() == vid) {
//                return true;
//            }
//        }
//        return flag;
//    }
//    void addVertex(Vertex newVertex) {
//        bool check = checkIfVertexExistByID(newVertex.getStateID());
//        if (check == true) {
//            cout << "Vertex with this ID already exist" << endl;
//        }
//        else {
//            vertices.push_back(newVertex);
//            cout << "New Vertex Added Successfully" << endl;
//        }
//    }
//    Vertex getVertexByID(int vid) {
//        Vertex temp;
//        for (int i = 0; i < vertices.size(); i++) {
//            temp = vertices.at(i);
//            if (temp.getStateID() == vid) {
//                return temp;
//            }
//        }
//        return temp;
//    }
//    bool checkIfEdgeExistByID(int fromVertex, int toVertex) {
//        Vertex v = getVertexByID(fromVertex);
//        list < Edge > e;
//        e = v.getEdgeList();
//        bool flag = false;
//        for (auto it = e.begin(); it != e.end(); it++) {
//            if (it->getDestinationVertexID() == toVertex) {
//                flag = true;
//                return flag;
//                break;
//            }
//        }
//        return flag;
//    }
//    void updateVertex(int oldVID, string vname) {
//        bool check = checkIfVertexExistByID(oldVID);
//        if (check == true) {
//            for (int i = 0; i < vertices.size(); i++) {
//                if (vertices.at(i).getStateID() == oldVID) {
//                    vertices.at(i).setStateName(vname);
//                    break;
//                }
//            }
//            cout << "Vertex(State) Updated Successfully " << endl;
//        }
//    }
//    void addEdgeByID(int fromVertex, int toVertex, int weight) {
//        bool check1 = checkIfVertexExistByID(fromVertex);
//        bool check2 = checkIfVertexExistByID(toVertex);
//        bool check3 = checkIfEdgeExistByID(fromVertex, toVertex);
//        if ((check1 && check2 == true)) {
//            if (check3 == true) {
//                cout << "Edge between " << getVertexByID(fromVertex).getStateName() << "(" << fromVertex << ") and " << getVertexByID(toVertex).getStateName() << "(" << toVertex << ") Already Exist" << endl;
//            }
//            else {
//                for (int i = 0; i < vertices.size(); i++) {
//                    if (vertices.at(i).getStateID() == fromVertex) {
//                        Edge e(toVertex, weight);
//                        //edgeList.push_back(e); 
//                        //vertices.at(i).addEdgeToEdgelist(toVertex,weight);
//                        vertices.at(i).edgeList.push_back(e);
//                    }
//                    else if (vertices.at(i).getStateID() == toVertex) {
//                        Edge e(toVertex, weight);
//                        //edgeList.push_back(e); 
//                        //vertices.at(i).addEdgeToEdgelist(fromVertex,weight);
//                        vertices.at(i).edgeList.push_back(e);
//                    }
//                }
//                cout << "Edge between " << fromVertex << " and " << toVertex << " added Successfully" << endl;
//            }
//        }
//        else {
//            cout << "Invalid Vertex ID entered.";
//        }
//    }
//    void updateEdgeByID(int fromVertex, int toVertex, int newWeight) {
//        bool check = checkIfEdgeExistByID(fromVertex, toVertex);
//        if (check == true) {
//            for (int i = 0; i < vertices.size(); i++) {
//                if (vertices.at(i).getStateID() == fromVertex) {
//                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//                        if (it->getDestinationVertexID() == toVertex) {
//                            it->setWeight(newWeight);
//                            break;
//                        }
//                    }
//                }
//                else if (vertices.at(i).getStateID() == toVertex) {
//                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//                        if (it->getDestinationVertexID() == fromVertex) {
//                            it->setWeight(newWeight);
//                            break;
//                        }
//                    }
//                }
//            }
//            cout << "Edge Weight Updated Successfully " << endl;
//        }
//        else {
//            cout << "Edge between " << getVertexByID(fromVertex).getStateName() << "(" << fromVertex << ") and " << getVertexByID(toVertex).getStateName() << "(" << toVertex << ") DOES NOT Exist" << endl;
//        }
//    }
//    void deleteEdgeByID(int fromVertex, int toVertex) {
//        bool check = checkIfEdgeExistByID(fromVertex, toVertex);
//        if (check == true) {
//            for (int i = 0; i < vertices.size(); i++) {
//                if (vertices.at(i).getStateID() == fromVertex) {
//                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//                        if (it->getDestinationVertexID() == toVertex) {
//                            vertices.at(i).edgeList.erase(it);
//                            //cout<<"First erase"<<endl;
//                            break;
//                        }
//                    }
//                }
//                if (vertices.at(i).getStateID() == toVertex) {
//                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//                        if (it->getDestinationVertexID() == fromVertex) {
//                            vertices.at(i).edgeList.erase(it);
//                            //cout<<"second erase"<<endl;
//                            break;
//                        }
//                    }
//                }
//            }
//            cout << "Edge Between " << fromVertex << " and " << toVertex << " Deleted Successfully." << endl;
//        }
//    }
//    void deleteVertexByID(int vid) {
//        int vIndex = 0;
//        for (int i = 0; i < vertices.size(); i++) {
//            if (vertices.at(i).getStateID() == vid) {
//                vIndex = i;
//            }
//        }
//        for (int i = 0; i < vertices.size(); i++) {
//            for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//                if (it->getDestinationVertexID() == vid) {
//                    vertices.at(i).edgeList.erase(it);
//                    break;
//                }
//            }
//        }
//        vertices.erase(vertices.begin() + vIndex);
//        cout << "Vertex Deleted Successfully" << endl;
//    }
//    void getAllNeigborsByID(int vid) {
//        cout << getVertexByID(vid).getStateName() << " (" << getVertexByID(vid).getStateID() << ") --> ";
//        for (int i = 0; i < vertices.size(); i++) {
//            if (vertices.at(i).getStateID() == vid) {
//                cout << "[";
//                for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//                    cout << it->getDestinationVertexID() << "(" << it->getWeight() << ") --> ";
//                }
//                cout << "]";
//            }
//        }
//    }
//    void printGraph() {
//        for (int i = 0; i < vertices.size(); i++) {
//            Vertex temp;
//            temp = vertices.at(i);
//            cout << temp.getStateName() << " (" << temp.getStateID() << ") --> ";
//            temp.printEdgeList();
//        }
//    }
//};
//int main() {
//    Graph g;
//    string sname;
//    int id1, id2, w;
//    int option;
//    bool check;
//    do {
//        cout << "What operation do you want to perform? " <<
//            " Select Option number. Enter 0 to exit." << endl;
//        cout << "1. Add Vertex" << endl;
//        cout << "2. Update Vertex" << endl;
//        cout << "3. Delete Vertex" << endl;
//        cout << "4. Add Edge" << endl;
//        cout << "5. Update Edge" << endl;
//        cout << "6. Delete Edge" << endl;
//        cout << "7. Check if 2 Vertices are Neigbors" << endl;
//        cout << "8. Print All Neigbors of a Vertex" << endl;
//        cout << "9. Print Graph" << endl;
//        cout << "10. Clear Screen" << endl;
//        cout << "0. Exit Program" << endl;
//        cin >> option;
//        Vertex v1;
//        switch (option) {
//        case 0:
//            break;
//        case 1:
//            cout << "Add Vertex Operation -" << endl;
//            cout << "Enter State ID :";
//            cin >> id1;
//            cout << "Enter State Name :";
//            cin >> sname;
//            v1.setID(id1);
//            v1.setStateName(sname);
//            g.addVertex(v1);
//            break;
//        case 2:
//            cout << "Update Vertex Operation -" << endl;
//            cout << "Enter State ID of Vertex(State) to update :";
//            cin >> id1;
//            cout << "Enter State Name :";
//            cin >> sname;
//            g.updateVertex(id1, sname);
//            break;
//        case 3:
//            cout << "Delete Vertex Operation -" << endl;
//            cout << "Enter ID of Vertex(State) to Delete : ";
//            cin >> id1;
//            g.deleteVertexByID(id1);
//            break;
//        case 4:
//            cout << "Add Edge Operation -" << endl;
//            cout << "Enter ID of Source Vertex(State): ";
//            cin >> id1;
//            cout << "Enter ID of Destination Vertex(State): ";
//            cin >> id2;
//            cout << "Enter Weight of Edge: ";
//            cin >> w;
//            g.addEdgeByID(id1, id2, w);
//            break;
//        case 5:
//            cout << "Update Edge Operation -" << endl;
//            cout << "Enter ID of Source Vertex(State): ";
//            cin >> id1;
//            cout << "Enter ID of Destination Vertex(State): ";
//            cin >> id2;
//            cout << "Enter UPDATED Weight of Edge: ";
//            cin >> w;
//            g.updateEdgeByID(id1, id2, w);
//            break;
//        case 6:
//            cout << "Delete Edge Operation -" << endl;
//            cout << "Enter ID of Source Vertex(State): ";
//            cin >> id1;
//            cout << "Enter ID of Destination Vertex(State): ";
//            cin >> id2;
//            g.deleteEdgeByID(id1, id2);
//            break;
//        case 7:
//            cout << "Check if 2 Vertices are Neigbors -" << endl;
//            cout << "Enter ID of Source Vertex(State): ";
//            cin >> id1;
//            cout << "Enter ID of Destination Vertex(State): ";
//            cin >> id2;
//            check = g.checkIfEdgeExistByID(id1, id2);
//            if (check == true) {
//                cout << "Vertices are Neigbors (Edge exist)";
//            }
//            else {
//                cout << "Vertices are NOT Neigbors (Edge does NOT exist)";
//            }
//            break;
//        case 8:
//            cout << "Print All Neigbors of a Vertex -" << endl;
//            cout << "Enter ID of Vertex(State) to fetch all Neigbors : ";
//            cin >> id1;
//            g.getAllNeigborsByID(id1);
//            break;
//        case 9:
//            cout << "Print Graph Operation -" << endl;
//            g.printGraph();
//            break;
//        default:
//            cout << "Enter Proper Option number " << endl;
//        }
//        cout << endl;
//    } while (option != 0);
//    return 0;
//}




//class Graph {
//private:
//    int V; // Брой върхове
//    std::list<int>* adj; // Списъци на съседство
//
//public:
//    Graph(int vertices); // Конструктор
//
//    void addEdge(int v, int w); // Добавяне на ребро към графа
//
//    void printGraph(); // Извеждане на графа
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj = new std::list<int>[vertices];
//}
//
//void Graph::addEdge(int v, int w) {
//    // Добавяне на връзка между връх v и връх w
//    adj[v].push_back(w);
//    adj[w].push_back(v); // Защото този граф е ненасочен
//}
//
//void Graph::printGraph() {
//    for (int v = 0; v < V; ++v) {
//        std::cout << "VORTEX " << v << ": ";
//        for (const auto& neighbor : adj[v]) {
//            std::cout << neighbor << " ";
//        }
//        std::cout << std::endl;
//    }
//}
//
//int main() {
//    Graph g(5); // Създаваме граф с 5 върха
//
//    // Добавяме ребра между върхове
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // Извеждаме графа
//    g.printGraph();
//
//    return 0;
//}

//class Graph {
//	int V;
//	//Array of lists
//	list<int>* l;
//public:
//	Graph(int V) {
//		this->V = V;
//		l = new list<int>[V];
//	}
//
//	void addEdge(int x, int y) {
//		l[x].push_back(y);
//		l[y].push_back(x);
//	}
//
//	void printAdjList() {
//		for (int i = 0; i < V; i++) {
//			cout << "Vertex " << i << " -> ";
//			for (int nbr : l[i]) {
//				cout << nbr << ", ";
//			}
//			cout << endl;
//		}
//	}
//};
//
//int main() {
//
//	Graph g(4);
//	g.addEdge(0, 1);
//	g.addEdge(0, 2);
//	g.addEdge(1, 2);
//	g.addEdge(2, 3);
//
//    g.printAdjList();
//
//	return 0;
//}



// Using hashtable

//class Graph {
//
//	//Adj List
//	unordered_map<string, list<pair<string, int> > > l;
//
//public:
//	void addEdge(string x, string y, bool bidir, int wt) {
//
//		l[x].push_back(make_pair(y, wt));
//		if (bidir) {
//			l[y].push_back(make_pair(x, wt));
//		}
//	}
//	void printAdjList() {
//		for (auto p : l) {
//			string city = p.first;
//			list<pair<string, int> > nbrs = p.second;
//
//			cout << city << "->";
//			for (auto nbr : nbrs) {
//				string dest = nbr.first;
//				int dist = nbr.second;
//				cout << dest << " " << dist << ",";
//			}
//			cout << endl;
//		}
//	}
//};
//int main() {
//
//	Graph g;
//
//	g.addEdge("A", "B", true, 20);
//	g.addEdge("A", "D", false, 50);
//	g.addEdge("A", "C", true, 10);
//	g.addEdge("B", "D", true, 40);
//	g.addEdge("C", "D", true, 40);
//
//	g.printAdjList();
//}



//Breadth First Search BFS

//template<typename T>
//class Graph {
//	map<T, list<T> >l;
//public:
//	void addEdge(int x, int y) {
//		l[x].push_back(y);
//		l[y].push_back(y);
//	}
//
//	void bfs(T src) {
//		map<T, int> visited;
//		queue<T> q;
//		q.push(src);
//		visited[src] = true;
//		while (!q.empty()) {
//			T node = q.front();
//			q.pop();
//			cout << node << " ";
//			for (int nbr : l[node]) {
//				if (!visited[nbr]) {
//					q.push(nbr);
//					//marck meber as visited 
//					visited[nbr] = true;
//				}
//			}
//		}
//	}
//};
//
//int main() {
//
//	Graph <int> g;
//	g.addEdge(0, 1);
//	g.addEdge(1, 2);
//	g.addEdge(2, 3);
//	g.addEdge(3, 4);
//	g.addEdge(4, 5);
//
//	g.bfs(0);
//
//	return 0;
//}

//Depth First Search DFS




	//template<typename T>
	//class Graph {
	//	map<T, list<T> >l;
	//public:
	//	void addEdge(int x, int y) {
	//		l[x].push_back(y);
	//		l[y].push_back(y);
	//	}
	//	void dfs_helper(T src, map<T, bool>& visited) {
	//		//Recursive function that will travese the graph

	//		cout << src << " ";
	//		visited[src] = true;
	//		//go to any nbr of that node that is not visited
	//		for (T nbr : l[src]) {
	//			if (!visited[nbr]) {
	//				dfs_helper(nbr, visited);
	//			}
	//		}
	//	}
	//	void dfs(T src) {
	//		map<T, bool> visited;
	//		//Mark all the nodes as not visted in the begining
	//		for (auto p : l) {
	//			T node = p.first;
	//			visited[node] == false;
	//		}
	//		//call the helper function 
	//		dfs_helper(src, visited);
	//	}
	//};


	//int main() {

	//	Graph <int> g;
	//	g.addEdge(0, 1);
	//	g.addEdge(1, 2);
	//	g.addEdge(2, 3);
	//	g.addEdge(3, 4);
	//	g.addEdge(4, 5);

	//	g.dfs(0);

	//	return 0;
	//}



//Краен неориентиран граф е зададен със списък на ребрата.
//Напишете програма, която въвежда графа и го извежда, представен с
//матрица на съседствата.

//int main() {
//	int N = 5; // Брой върхове
//	vector<pair<int, int>> edges = { {0, 1}, {0, 4}, {1, 2}, {1, 3}, {1, 4}, {2, 3}, {3, 4} }; // Списък на ребрата
//
//	vector<vector<int>> adjMatrix(N, vector<int>(N, 0)); // Инициализация на матрицата с нули
//
//	for (const auto& edge : edges) {
//		int u = edge.first;
//		int v = edge.second;
//		adjMatrix[u][v] = 1; // Поставяне на стойности в матрицата
//		adjMatrix[v][u] = 1; // Ако графът е ненасочен
//	}
//
//	// Извеждане на матрицата на съседствата
//	cout << "Adjacency Matrix:" << endl;
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cout << adjMatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}



//Краен неориентиран граф е зададен със списък на ребрата.
//Напишете програма, която въвежда графа и го извежда, представен
//със списъци на съседите.


//int main() {
//	int N = 5; // Брой върхове
//
//	vector<list<int>> adjList(N); // Създаваме списъци на съседите за всеки връх
//
//	// Въвеждане на ребрата
//	adjList[0].push_back(1);
//	adjList[0].push_back(4);
//	adjList[1].push_back(0);
//	adjList[1].push_back(2);
//	adjList[1].push_back(3);
//	adjList[1].push_back(4);
//	adjList[2].push_back(1);
//	adjList[2].push_back(3);
//	adjList[3].push_back(1);
//	adjList[3].push_back(2);
//	adjList[3].push_back(4);
//	adjList[4].push_back(0);
//	adjList[4].push_back(1);
//	adjList[4].push_back(3);
//
//	// Извеждане на графа със списъци на съседите
//	cout << "Adjacency Lists:" << endl;
//	for (int i = 0; i < N; ++i) {
//		cout << "Vortex " << i << ": ";
//		for (const auto& neighbor : adjList[i]) {
//			cout << neighbor << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//Напишете главна програма, която да въвежда броя на 
//върховете N, броя на ребрата M и графа в представяне
//със списъци на съседите, след което извиква BFS да
//построи Покриващо Дърво на графа.

//void addEdge(vector<vector<int>>& adjList, int u, int v) {
//	adjList[u].push_back(v);
//	adjList[v].push_back(u);
//}
//
//void BFS(vector<vector<int>>& adjList, int startVertex, vector<int>& parent) {
//	queue<int> q;
//	vector<bool> visited(adjList.size(), false);
//
//	q.push(startVertex);
//	visited[startVertex] = true;
//	parent[startVertex] = -1;
//
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//
//		for (int v : adjList[u]) {
//			if (!visited[v]) {
//				q.push(v);
//				visited[v] = true;
//				parent[v] = u;
//			}
//		}
//	}
//}
//
//int main() {
//	int N, M;
//	cout << "Enter the number of vertices (N): ";
//	cin >> N;
//	cout << "Enter the number of edges (M): ";
//	cin >> M;
//
//	vector<vector<int>> adjList(N);
//	vector<int> parent(N);
//
//	cout << "Enter the edges (u v):" << endl;
//	for (int i = 0; i < M; i++) {
//		int u, v;
//		cin >> u >> v;
//		addEdge(adjList, u, v);
//	}
//
//	int startVertex;
//	cout << "Enter the starting vertex for BFS: ";
//	cin >> startVertex;
//
//	BFS(adjList, startVertex, parent);
//
//	cout << "BFS Tree (Parent Array):" << endl;
//	for (int i = 0; i < N; i++) {
//		cout << "Parent of vertex " << i << " is " << parent[i] << endl;
//	}
//
//	return 0;
//}


//Напишете главна програма, която да въвежда броя на 
//върховете N, броя на ребрата M и графа в представяне
//със списъци на съседите, след което извиква DFS да
//построи Покриващо Дърво на графа.
	
//class Graph {
//private:
//	int V; // Брой върхове
//	std::vector<std::list<int>> adj; // Списъци на съседство
//
//public:
//	Graph(int vertices); // Конструктор
//
//	void addEdge(int v, int w); // Добавяне на ребро към графа
//
//	void DFS(int v, std::vector<bool>& visited); // DFS алгоритъм за построяване на Покриващо Дърво
//
//	void printSpanningTree(); // Извеждане на Покриващото Дърво
//};
//
//Graph::Graph(int vertices) {
//	V = vertices;
//	adj.resize(vertices);
//}
//
//void Graph::addEdge(int v, int w) {
//	// Добавяне на връзка между връх v и връх w
//	adj[v].push_back(w);
//	adj[w].push_back(v); // Защото този граф е ненасочен
//}
//
//void Graph::DFS(int v, std::vector<bool>& visited) {
//	visited[v] = true;
//	std::cout << "Vertex " << v << " -> ";
//	for (int neighbor : adj[v]) {
//		if (!visited[neighbor]) {
//			std::cout << neighbor << " ";
//			DFS(neighbor, visited);
//		}
//	}
//}
//
//
//void Graph::printSpanningTree() {
//	std::vector<bool> visited(V, false);
//	for (int v = 1; v <= V; ++v) { // Започнете от връх 1
//		if (!visited[v]) {
//			DFS(v, visited);
//		}
//	}
//}
//
//
//int main() {
//	int N, M;
//	cout << "Enter the number of vertices (N): ";
//	cin >> N;
//	cout << "Enter the number of edges (M): ";
//	cin >> M;
//
//	Graph g(N+1); // Създаваме граф с N върха
//
//	std::cout << "Enter the eges:" << std::endl;
//	for (int i = 0; i < M; ++i) {
//		int v, w;
//		std::cin >> v >> w;
//		g.addEdge(v, w);
//	}
//
//	std::cout << "POKRIVASHTO DURVO na grafa:" << std::endl;
//	g.printSpanningTree();
//
//	return 0;
//}


//Като използвате функцията за построяване на покриващо дърво в 
//ширина, напишете програма, която да намира най - къс път между два
//зададени върха на граф

//class Graph {
//private:
//    int V; // Брой върхове
//    std::vector<std::vector<int>> adj; // Списъци на съседство
//
//public:
//    Graph(int vertices); // Конструктор
//
//    void addEdge(int v, int w); // Добавяне на ребро към графа
//
//    std::vector<int> shortestPath(int start, int end); // Намиране на най-къс път между два върха
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj.resize(vertices);
//}
//
//void Graph::addEdge(int v, int w) {
//    // Добавяне на връзка между връх v и връх w
//    adj[v].push_back(w);
//    adj[w].push_back(v); // Защото този граф е ненасочен
//}
//
//std::vector<int> Graph::shortestPath(int start, int end) {
//    std::vector<bool> visited(V, false);
//    std::vector<int> predecessor(V, -1); // Масив за предшествениците
//    std::queue<int> q;
//    q.push(start);
//    visited[start] = true;
//
//    while (!q.empty()) {
//        int current = q.front();
//        q.pop();
//
//        for (int neighbor : adj[current]) {
//            if (!visited[neighbor]) {
//                q.push(neighbor);
//                visited[neighbor] = true;
//                predecessor[neighbor] = current;
//            }
//        }
//    }
//
//    // Построяване на най-късия път, използвайки предшествениците
//    std::vector<int> path;
//    int current = end;
//    while (current != -1) {
//        path.push_back(current);
//        current = predecessor[current];
//    }
//
//    // Обръщаме пътя, за да започне от началния връх
//    std::reverse(path.begin(), path.end());
//    return path;
//}
//
//int main() {
//    int N, M;
//    std::cout << "Enter the number of vertices (N): ";
//    std::cin >> N;
//    std::cout << "Enter the number of edges (M): ";
//    std::cin >> M;
//
//    Graph g(N); // Създаваме граф с N върха
//
//    std::cout << "Enter the edges:" << std::endl;
//    for (int i = 0; i < M; ++i) {
//        int v, w;
//        std::cin >> v >> w;
//        g.addEdge(v, w);
//    }
//
//    int start, end;
//    std::cout << "Enter the start vertex: ";
//    std::cin >> start;
//    std::cout << "Enter the end vertex: ";
//    std::cin >> end;
//
//    std::vector<int> shortestPath = g.shortestPath(start, end);
//
//    std::cout << "Shortest path from " << start << " to " << end << ": ";
//    for (int vertex : shortestPath) {
//        std::cout << vertex << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}



// !!! С ТЕЖЕСТИ !!!
//Като използвате функцията за построяване на покриващо дърво в 
//ширина, напишете програма, която да намира най - къс път между два
//зададени върха на граф С ТЕЖЕСТИ

//class Graph {
//private:
//    int V; // Брой върхове
//    std::vector<std::vector<std::pair<int, int>>> adj; // Списъци на съседство с тежести
//
//public:
//    Graph(int vertices); // Конструктор
//
//    void addEdge(int v, int w, int weight); // Добавяне на ребро с тежест към графа
//
//    std::vector<int> shortestPath(int start, int end); // Намиране на най-къс път между два върха с тежести
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj.resize(vertices);
//}
//
//void Graph::addEdge(int v, int w, int weight) {
//    // Добавяне на връзка между връх v и връх w с тежест weight
//    adj[v].push_back(std::make_pair(w, weight));
//    adj[w].push_back(std::make_pair(v, weight)); // Защото този граф е ненасочен
//}
//
//std::vector<int> Graph::shortestPath(int start, int end) {
//    std::vector<int> distance(V, INT_MAX); // Масив за разстоянията до началния връх
//    std::vector<int> predecessor(V, -1);   // Масив за предшествениците
//    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
//    pq.push(std::make_pair(0, start));
//    distance[start] = 0;
//
//    while (!pq.empty()) {
//        int current = pq.top().second;
//        pq.pop();
//
//        for (const auto& neighbor : adj[current]) {
//            int next = neighbor.first;
//            int weight = neighbor.second;
//            if (distance[current] + weight < distance[next]) {
//                distance[next] = distance[current] + weight;
//                predecessor[next] = current;
//                pq.push(std::make_pair(distance[next], next));
//            }
//        }
//    }
//
//    // Построяване на най-късия път, използвайки предшествениците
//    std::vector<int> path;
//    int current = end;
//    while (current != -1) {
//        path.push_back(current);
//        current = predecessor[current];
//    }
//
//    // Обръщаме пътя, за да започне от началния връх
//    std::reverse(path.begin(), path.end());
//    return path;
//}
//
//int main() {
//    int N, M;
//    std::cout << "Enter the number of vertices (N): ";
//    std::cin >> N;
//    std::cout << "Enter the number of edges (M): ";
//    std::cin >> M;
//
//    Graph g(N); // Създаваме граф с N върха
//
//    std::cout << "Enter the edges with weights:" << std::endl;
//    for (int i = 0; i < M; ++i) {
//        int v, w, weight;
//        std::cin >> v >> w >> weight;
//        g.addEdge(v, w, weight);
//    }
//
//    int start, end;
//    std::cout << "Enter the start vertex: ";
//    std::cin >> start;
//    std::cout << "Enter the end vertex: ";
//    std::cin >> end;
//
//    std::vector<int> shortestPath = g.shortestPath(start, end);
//
//    std::cout << "Shortest path from " << start << " to " << end << " with weights: ";
//    for (int vertex : shortestPath) {
//        std::cout << vertex << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}



//Напишете главна програма, която въвежда граф с цени на ребрата, 
//зададен с N, M и M ребра във вида :
// v w c(v, w) и извиква dijkstra().

//#define INF numeric_limits<int>::max()
//
//class Graph {
//private:
//    int V; // Брой върхове
//    vector<vector<pair<int, int>>> adj; // Списъци на съседство с тежести
//
//public:
//    Graph(int vertices); // Конструктор
//
//    void addEdge(int v, int w, int weight); // Добавяне на насочена ребро с тежест
//
//    vector<int> dijkstra(int startVertex); // Алгоритъм на Дейкстра
//
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj.resize(vertices);
//}
//
//void Graph::addEdge(int v, int w, int weight) {
//    adj[v].push_back(make_pair(w, weight));
//}
//
//vector<int> Graph::dijkstra(int startVertex) {
//    vector<int> dist(V, INF); // Инициализираме разстоянията до всички върхове с безкрайност
//    dist[startVertex] = 0; // Разстоянието до началния връх е 0
//
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    pq.push(make_pair(0, startVertex));
//
//    while (!pq.empty()) {
//        int u = pq.top().second;
//        pq.pop();
//
//        for (const pair<int, int>& neighbor : adj[u]) {
//            int v = neighbor.first;
//            int weight = neighbor.second;
//
//            if (dist[u] + weight < dist[v]) {
//                dist[v] = dist[u] + weight;
//                pq.push(make_pair(dist[v], v));
//            }
//        }
//    }
//
//    return dist;
//}
//
//int main() {
//    int N, M;
//    cout << "Enter the number of vertices (N): ";
//    cin >> N;
//    cout << "Enter the number of edges (M): ";
//    cin >> M;
//
//    Graph g(N);
//
//    cout << "Enter the edges with weights:" << endl;
//    for (int i = 0; i < M; ++i) {
//        int v, w, weight;
//        cin >> v >> w >> weight;
//        g.addEdge(v, w, weight);
//    }
//
//    int startVertex;
//    cout << "Enter the starting vertex: ";
//    cin >> startVertex;
//
//    vector<int> shortestDistances = g.dijkstra(startVertex);
//
//    cout << "Shortest distances from vertex " << startVertex << " to all other vertices:" << endl;
//    for (int i = 0; i < N; ++i) {
//        cout << "Vertex " << i << ": " << shortestDistances[i] << endl;
//    }
//
//    return 0;
//}


// Допълнете главната програма с възможност да намира пътя между 
//два зададени върха.


//const int INF = std::numeric_limits<int>::max();
//
//class Graph {
//private:
//    int V; // Брой върхове
//    std::vector<std::list<std::pair<int, int>>> adj; // Списъци на съседство с тежести
//
//public:
//    Graph(int vertices); // Конструктор
//
//    void addEdge(int v, int w, int weight); // Добавяне на ребро с тегло към графа
//
//    void dijkstra(int src, std::vector<int>& distances, std::vector<int>& parents); // Алгоритъм на Дейкстра
//
//    void printShortestPath(int src, int dest, const std::vector<int>& parents); // Извеждане на най-късия път
//
//    void printDistances(const std::vector<int>& distances); // Извеждане на разстоянията
//
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    adj.resize(vertices);
//}
//
//void Graph::addEdge(int v, int w, int weight) {
//    // Добавяне на връзка между връх v и връх w с тегло weight
//    adj[v].push_back({ w, weight });
//    adj[w].push_back({ v, weight }); // Защото този граф е ненасочен
//}
//
//void Graph::dijkstra(int src, std::vector<int>& distances, std::vector<int>& parents) {
//    distances.assign(V, INF);
//    parents.assign(V, -1);
//
//    distances[src] = 0;
//    std::vector<bool> visited(V, false);
//
//    for (int i = 0; i < V - 1; ++i) {
//        int u = -1;
//        for (int j = 0; j < V; ++j) {
//            if (!visited[j] && (u == -1 || distances[j] < distances[u])) {
//                u = j;
//            }
//        }
//
//        visited[u] = true;
//
//        for (const auto& neighbor : adj[u]) {
//            int v = neighbor.first;
//            int weight = neighbor.second;
//            if (distances[u] + weight < distances[v]) {
//                distances[v] = distances[u] + weight;
//                parents[v] = u;
//            }
//        }
//    }
//}
//
//void Graph::printShortestPath(int src, int dest, const std::vector<int>& parents) {
//    std::stack<int> path;
//    int current = dest;
//    while (current != -1) {
//        path.push(current);
//        current = parents[current];
//    }
//
//    std::cout << "Shortest path from vertex " << src << " to vertex " << dest << " is: ";
//    while (!path.empty()) {
//        std::cout << path.top();
//        path.pop();
//        if (!path.empty()) {
//            std::cout << " -> ";
//        }
//    }
//    std::cout << std::endl;
//}
//
//void Graph::printDistances(const std::vector<int>& distances) {
//    std::cout << "Shortest distances from each vertex to all others:" << std::endl;
//    for (int i = 0; i < V; ++i) {
//        std::cout << "Vertex " << i << ": " << distances[i] << std::endl;
//    }
//}
//
//int main() {
//    int N, M;
//    std::cout << "Enter the number of vertices (N): ";
//    std::cin >> N;
//    std::cout << "Enter the number of edges (M): ";
//    std::cin >> M;
//
//    Graph g(N);
//
//    std::cout << "Enter the edges and their weights:" << std::endl;
//    for (int i = 0; i < M; ++i) {
//        int v, w, weight;
//        std::cin >> v >> w >> weight;
//        g.addEdge(v, w, weight);
//    }
//
//    int src, dest;
//    std::cout << "Enter source vertex: ";
//    std::cin >> src;
//    std::cout << "Enter destination vertex: ";
//    std::cin >> dest;
//
//}




//const int INF = std::numeric_limits<int>::max();
//
//class Graph {
//private:
//    int V; // Брой върхове
//    std::vector<std::vector<int>> dist; // Матрица на разстоянията
//
//public:
//    Graph(int vertices); // Конструктор
//
//    void addEdge(int v, int w, int weight); // Добавяне на ребро с тегло към графа
//
//    void floydWarshall(); // Алгоритъм на Флойд
//
//    void printShortestPaths(); // Извеждане на най-късите пътища
//
//};
//
//Graph::Graph(int vertices) {
//    V = vertices;
//    dist.assign(V, std::vector<int>(V, INF));
//    for (int i = 0; i < V; ++i) {
//        dist[i][i] = 0; // Разстоянието от върха до себе си е 0
//    }
//}
//
//void Graph::addEdge(int v, int w, int weight) {
//    // Добавяне на връзка между връх v и връх w с тегло weight
//    dist[v][w] = weight;
//}
//
//void Graph::floydWarshall() {
//    for (int k = 0; k < V; ++k) {
//        for (int i = 0; i < V; ++i) {
//            for (int j = 0; j < V; ++j) {
//                if (dist[i][k] != INF && dist[k][j] != INF &&
//                    dist[i][k] + dist[k][j] < dist[i][j]) {
//                    dist[i][j] = dist[i][k] + dist[k][j];
//                }
//            }
//        }
//    }
//}
//
//void Graph::printShortestPaths() {
//    std::cout << "Shortest paths between all pairs of vertices:" << std::endl;
//    for (int i = 0; i < V; ++i) {
//        for (int j = 0; j < V; ++j) {
//            if (dist[i][j] == INF) {
//                std::cout << "No path from vertex " << i << " to vertex " << j << std::endl;
//            }
//            else {
//                std::cout << "Shortest path from vertex " << i << " to vertex " << j << " is " << dist[i][j] << std::endl;
//            }
//        }
//    }
//}
//
//int main() {
//    int N, M;
//    std::cout << "Enter the number of vertices (N): ";
//    std::cin >> N;
//    std::cout << "Enter the number of edges (M): ";
//    std::cin >> M;
//
//    Graph g(N);
//
//    std::cout << "Enter the edges and their weights:" << std::endl;
//    for (int i = 0; i < M; ++i) {
//        int v, w, weight;
//        std::cin >> v >> w >> weight;
//        g.addEdge(v, w, weight);
//    }
//
//    g.floydWarshall();
//    g.printShortestPaths();
//
//    return 0;
//}







class Graph {
private:
    int V;
    std::vector<std::list<int>> adj;
    std::vector<int> parent; // Масив, който ще съхранява родителите на върховете

public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void DFS(int v);
    void printSpanningTree();
};

Graph::Graph(int vertices) {
    V = vertices;
    adj.resize(vertices);
    parent.resize(vertices, -1); // Изначално всички върхове нямат родител
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v); // Защото този граф е ненасочен
}

void Graph::DFS(int v) {
    for (int neighbor : adj[v]) {
        if (parent[neighbor] == -1) { // Ако съседът няма родител, този ребро води към него
            parent[neighbor] = v;
            DFS(neighbor);
        }
    }
}

void Graph::printSpanningTree() {
    std::cout << "Pокриващо дърво на графа:" << std::endl;
    for (int i = 1; i < V; ++i) {
        std::cout << "Ребро " << i << ": " << parent[i] << " -> " << i << std::endl;
    }
}

int main() {
    int N = 10; // Брой върхове

    Graph g(N);

    // Добавяме ребрата към графа
    g.addEdge(1, 2);
    g.addEdge(1, 9);
    g.addEdge(1, 7);
    g.addEdge(2, 4);
    g.addEdge(2, 6);
    g.addEdge(2, 9);
    g.addEdge(9, 7);
    g.addEdge(9, 10);
    g.addEdge(7, 3);
    g.addEdge(4, 8);
    g.addEdge(4, 5);
    g.addEdge(6, 5);
    g.addEdge(6, 10);
    g.addEdge(3, 10);
    g.addEdge(5, 10);

    // Извикваме DFS, за да построим покриващото дърво
    g.DFS(1);

    // Извеждаме покриващото дърво
    g.printSpanningTree();

    return 0;
}