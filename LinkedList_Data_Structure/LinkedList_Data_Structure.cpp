#include <iostream >
using namespace std;

//
//class Node {
//public:
//    int key;
//    int data;
//    Node* next;
//
//    Node() {
//        key = 0;
//        data = 0;
//        next = NULL;
//    }
//    Node(int k, int d) {
//        key = k;
//        data = d;
//    }
//};
//
//class SinglyLinkedList {
//public:
//    Node* head;
//
//    SinglyLinkedList() {
//        head = NULL;
//    }
//    SinglyLinkedList(Node* n) {
//        head = n;
//    }
//
//    //1. Check if the noode exist key value
//    Node* nodeExist(int k) {
//        Node* temp = NULL;
//        Node* ptr = head;
//        while (ptr != NULL) {
//            if (ptr->key == k) {
//                temp = ptr;
//            }
//            ptr = ptr->next;
//        }
//        return temp;
//    }
//
//    //2. Appand a node to the list
//    void appandNode(Node* n) {
//        if (nodeExist(n->key)!=NULL) {
//            cout << "Node all ready exist with key valye : "<<n->key<<"Append another node with different key value"<<endl;
//        }
//        else {
//            if (head == NULL) {
//                head = n;
//                cout << "Node Appended" << endl;
//            }
//            else {
//                Node* ptr = head;
//                while (ptr->next != NULL) {
//                    ptr = ptr->next;
//                }
//                ptr->next = n;
//                cout << "Node Appended" << endl;
//            }
//
//        }
//    }
//    
//    //Prepand Node - Atach a node at the start 
//    void prependNode(Node* n) {
//        if (nodeExist(n->key) != NULL) {
//            cout << "Node all ready exist with key valye : " << n->key << "Append another node with different key value" << endl;
//        }
//        else {
//            n->next = head;
//            head = n;
//            cout << "Node prepended" << endl;
//        }
//    }
//
//    //4.Insert a node after a node in a particular node in te list.
//    void insertNode(int k, Node* n) {
//        Node* ptr = nodeExist(k);
//        if (ptr == NULL) {
//            cout << "There is no node with key value: " << k << endl;
//        }
//        else {
//            if (nodeExist(n->key) != NULL) {
//                cout << "Node all ready exist with key valye : " << n->key << "Append another node with different key value" << endl;
//            }
//            else {
//                n->next = ptr->next;
//                ptr->next = n;
//                cout << "Node inserted" << endl;
//            }
//        }
//    }
//
//    // 5.Delete node by unique key
//    void deleteNodeByKey(int k) {
//        if (head == NULL) {
//            cout << "Singly Linked List is already empty." << endl;
//        }
//        else if (head != NULL) {
//            if (head->key == k) {
//                head = head->next;
//                cout << "Node UNLINKED with key value: " << k << endl;
//            }
//            else {
//                Node* temp = NULL;
//                Node* prevptr = head;
//                Node* currentptr = head->next;
//                while (currentptr!=NULL){
//                    if (currentptr->key == k) {
//                        temp = currentptr;
//                        currentptr = NULL;
//                    }
//                    else {
//                        prevptr = prevptr->next;
//                        currentptr = currentptr->next;
//                    }
//                }
//                if (temp != NULL) {
//                    prevptr->next = temp->next;
//                    cout << "Node Unlinked with key value: " << k << endl;
//                }
//                else {
//                    cout << "Node with key valye " << k << " doesn't exist." << endl;
//                }
//            }
//        }
//    }
//
//    //6.Update
//    void updateNodeByKey(int k, int d) {
//        Node* ptr = nodeExist(k);
//        if (ptr != NULL) {
//            ptr->data = d;
//            cout << "Node data updated succesfully." << endl;
//        }
//        else {
//            cout << "Node with key valye " << k << " doesn't exist." << endl;
//        }
//    }
//
//    //7. Printing the linked list.
//    void printlist() {
//        if (head = NULL) {
//            cout << "No Nodes is Singly Linked List";
//        }
//        else {
//            cout << endl << "Singly linked list values: ";
//            Node* temp = head;
//
//            while (temp != NULL) {
//                cout << "(" << temp->key << " , " << temp->data << ") -->";
//                temp = temp->next;
//            }
//        }
//    }
//};
//    
//int main()
//{
//    SinglyLinkedList sll;
//    int option, key, data;
//
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Append Node\n";
//        cout << "2. Prepend Node\n";
//        cout << "3. Insert Node After Key\n";
//        cout << "4. Delete Node By Key\n";
//        cout << "5. Update Node By Key\n";
//        cout << "6. Print List\n";
//        cout << "7. Exit\n";
//        cout << "Enter option: ";
//        cin >> option;
//
//        Node* n = new Node();
//
//        switch (option) {
//        case 1:
//            cout << "Enter key and data for the node to append: ";
//            cin >> key >> data;
//            n->key = key;
//            n->data = data;
//            sll.appandNode(n);
//            break;
//
//        case 2:
//            cout << "Enter key and data for the node to prepend: ";
//            cin >> key >> data;
//            n->key = key;
//            n->data = data;
//            sll.prependNode(n);
//            break;
//
//        case 3:
//            cout << "Enter key of the node after which you want to insert: ";
//            cin >> key;
//            cout << "Enter key and data for the new node: ";
//            cin >> n->key >> n->data;
//            sll.insertNode(key, n);
//            break;
//
//        case 4:
//            cout << "Enter key of the node to delete: ";
//            cin >> key;
//            sll.deleteNodeByKey(key);
//            break;
//
//        case 5:
//            cout << "Enter key of the node to update: ";
//            cin >> key;
//            cout << "Enter new data: ";
//            cin >> data;
//            sll.updateNodeByKey(key, data);
//            break;
//
//        case 6:
//            sll.printlist();
//            break;
//
//        case 7:
//            cout << "Exiting the program.\n";
//            break;
//
//        default:
//            cout << "Invalid option. Please try again.\n";
//        }
//    } while (option != 7);
//
//    return 0;
//}



         // Doubly linked list

//class Node {
//public:
//    int key;
//    int data;
//    Node* next;
//    Node* previous;
//
//    Node() {
//        data = 0;
//        key = 0;
//        next = NULL;
//        previous = NULL;
//    }
//
//    Node(int k, int d) {
//        key = k;
//        data = d;
//        next = NULL;
//        previous = NULL;
//    }
//};
//
//class DoublyLinkedList {
//public:
//    Node* head;
//
//    DoublyLinkedList() {
//        head = NULL;
//    }
//    DoublyLinkedList(Node* n) {
//        head = n;
//    }
//
//    // 1. Check if a node exists using the key value
//    Node* checkIfNodeExist(int k) {
//        Node* temp = NULL;
//        Node* ptr = head;
//
//        // Checking every node
//        while (ptr != NULL) {
//            if (ptr->key == k) {
//                temp = ptr;
//                break;  // Break when found
//            }
//            ptr = ptr->next;
//        }
//        return temp;
//    }
//
//    // 2. Append a node to the list
//    // Append is attaching a node at the end of the list
//    void appendNode(Node* n) {
//        if (checkIfNodeExist(n->key) != NULL) {
//            cout << "Node already exists with key value: " << n->key << ". Append another node with a different key value." << endl;
//        }
//        else {
//            if (head == NULL) {
//                head = n;
//                cout << "Node Appended as Head Node." << endl;
//            }
//            else {
//                Node* ptr = head;
//                while (ptr->next != NULL) {
//                    ptr = ptr->next;
//                }
//                ptr->next = n;
//                n->previous = ptr;
//                cout << "Node appended" << endl;
//            }
//        }
//    }
//
//    // 3. Prepend a new node at the beginning
//    void prependNode(Node* n) {
//        if (checkIfNodeExist(n->key) != NULL) {
//            cout << "Node already exists with key value: " << n->key << ". Append another node with a different key value." << endl;
//        }
//        else {
//            if (head == NULL) {
//                head = n;
//                cout << "Node Prepended as Head Node." << endl;
//            }
//            else {
//                head->previous = n;
//                n->next = head;
//                head = n;
//                cout << "Node Prepended" << endl; // Fixed typo
//            }
//        }
//    }
//
//    // 4. Add a node after a particular node
//    void insertNodeAfter(int k, Node* n) {
//        Node* ptr = checkIfNodeExist(k);
//        if (ptr == NULL) {
//            cout << "Node with key value " << k << " doesn't exist." << endl;
//        }
//        else {
//            if (checkIfNodeExist(n->key) != NULL) {
//                cout << "Node already exists with key value: " << n->key << ". Append another node with a different key value." << endl;
//            }
//            else {
//                Node* nextNode = ptr->next;
//                if (nextNode == NULL) {
//                    ptr->next = n;
//                    n->previous = ptr;
//                    cout << "Node appended at the end." << endl;
//                }
//                else {
//                    n->next = nextNode;
//                    n->previous = ptr;
//                    ptr->next = n;
//                    nextNode->previous = n;
//                    cout << "Node inserted after key " << k << "." << endl;
//                }
//            }
//        }
//    }
//
//    // 5. Deleting a node by key
//    void deleteNodeByKey(int k) {
//        if (head == NULL) {
//            cout << "Doubly Linked List is already empty." << endl;
//            return;
//        }
//        Node* ptr = checkIfNodeExist(k);
//        if (ptr == NULL) {
//            cout << "Node with key value " << k << " doesn't exist." << endl;
//        }
//        else {
//            if (head == ptr) {
//                head = ptr->next;
//                if (head != NULL) {
//                    head->previous = NULL;
//                }
//                delete ptr;
//                cout << "Node with key " << k << " deleted." << endl;
//            }
//            else {
//                Node* prevNode = ptr->previous;
//                Node* nextNode = ptr->next;
//
//                if (nextNode != NULL) {
//                    prevNode->next = nextNode;
//                    nextNode->previous = prevNode;
//                }
//                else {
//                    prevNode->next = NULL;
//                }
//
//                delete ptr;
//                cout << "Node with key " << k << " deleted." << endl;
//            }
//        }
//    }
//
//    // 6. Update a node by key
//    void updateNodeByKey(int k, int newData) {
//        Node* ptr = checkIfNodeExist(k);
//        if (ptr != NULL) {
//            ptr->data = newData;
//            cout << "Node with key " << k << " updated successfully." << endl;
//        }
//        else {
//            cout << "Node with key " << k << " doesn't exist." << endl;
//        }
//    }
//
//    // 7. Print the list
//    void display() {
//        if (head == NULL) {
//            cout << "Doubly Linked List is empty." << endl;
//            return;
//        }
//        Node* temp = head;
//        cout << "Doubly Linked List: ";
//        while (temp != NULL) {
//            cout << "(" << temp->key << ", " << temp->data << ") <-> ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//};
//
//int main() {
//    DoublyLinkedList dll;
//    int option, key, data;
//
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Append Node\n";
//        cout << "2. Prepend Node\n";
//        cout << "3. Insert Node After Key\n";
//        cout << "4. Delete Node By Key\n";
//        cout << "5. Update Node By Key\n"; // Added update option
//        cout << "6. Display List\n"; // Updated menu
//        cout << "7. Exit\n"; // Updated menu
//        cout << "Enter option: ";
//        cin >> option;
//
//        Node* n = new Node();
//
//        switch (option) {
//        case 1:
//            cout << "Enter key and data for the node to append: ";
//            cin >> key >> data;
//            n->key = key;
//            n->data = data;
//            dll.appendNode(n);
//            break;
//
//        case 2:
//            cout << "Enter key and data for the node to prepend: ";
//            cin >> key >> data;
//            n->key = key;
//            n->data = data;
//            dll.prependNode(n);
//            break;
//
//        case 3:
//            cout << "Enter key of the node after which you want to insert: ";
//            cin >> key;
//            cout << "Enter key and data for the new node: ";
//            cin >> n->key >> n->data;
//            dll.insertNodeAfter(key, n);
//            break;
//
//        case 4:
//            cout << "Enter key of the node you want to delete: ";
//            cin >> key;
//            dll.deleteNodeByKey(key);
//            break;
//
//        case 5:
//            cout << "Enter key of the node you want to update: ";
//            cin >> key;
//            cout << "Enter new data: ";
//            cin >> data;
//            dll.updateNodeByKey(key, data); // Added update option
//            break;
//
//        case 6:
//            dll.display(); // Added display option
//            break;
//
//        case 7:
//            cout << "Exiting the program.\n";
//            break;
//
//        default:
//            cout << "Invalid option. Please try again.\n";
//        }
//    } while (option != 7);
//
//    return 0;
//}


          // Singly linked list
 
//class Node {
//public:
//    int data;
//    Node* next; 
//};
//void printLinkedList(Node* n) {
//    while (n!= NULL) {
//        cout << n->data << " -> ";
//        n = n->next;
//    }
//}
//int main() {
//
//    Node* head = new Node();
//    Node* second = new Node();
//    Node* third = new Node();
//
//    head->data = 1;
//    head->next = second;
//    second->data = 2;
//    second->next = third;
//    third->data = 3;
//    third->next = NULL;
//
//    printLinkedList(head);
//
//}


           //Doubly linked list

//class Node {
//public:
//    int data;
//    Node* next;
//    Node* previous;
//};
//
//void printforward(Node* n) {
//    while (n!=NULL)
//    {
//        cout << n->data << " ->";
//        n = n->next;
//
//    }
//}
//void printbacklords(Node* n) {
//    while (n!=NULL)
//    {
//        cout << n->data << " ->";
//        n = n->previous;
//    }
//}
//int main() {
//    Node* head = new Node;
//    Node* second = new Node;
//    Node* third = new Node;
//
//    head->data = 1;
//    head->previous = NULL;
//    head->next = second;
//    second->data = 2;
//    second->previous = head;
//    second->next = third;
//    third->data = 3;
//    third->previous = second;
//    third->next = NULL;
//
//    printforward(head);
//    cout << endl;
//    printbacklords(third);
// return 0;
//}


           //Circular linked list
//class Node {
//public:
//    int data;
//    Node* next;
//
//};
//void print(Node* n) {
//    while (n!= NULL)
//    {
//        cout << n->data << " ->";
//        n = n->next;
//    }
//}
//
//int main() {
//
//    Node* head = new Node;
//    Node* second = new Node;
//    Node* third = new Node;
//    
//    head->data = 1;
//    head->next = second;
//    second->data = 2;
//    second->next = third;
//    third->data = 3;
//    third->next = head;
//    print(head);
//
//    return 0;
//}


           //Linked list with User input
class Node {
public:
    int data;
    Node* next;
};

void print(Node* n) {
    while (n!=NULL)
    {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << "NULL";
}
int main() {
    int n;
    cout << "how many nodes do you want in your linked list?";
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newnode = new Node;
        cout << "Enter the data for your Node " << i + 1 << ": ";
        cin >> newnode->data;
        newnode->next = nullptr;

        if (head == nullptr) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }
    cout << "linked list: ";
    print(head);

    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}

