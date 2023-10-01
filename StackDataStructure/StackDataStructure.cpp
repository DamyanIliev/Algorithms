#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Crate a stack
 
//class Stack{
//private:
//	int top;
//	int arr[5];
//public:
//	Stack() {
//		top = -1;
//		for (int i = 0; i < 5; i++) {
//			arr[i] = 0;
//		}
//	}
//
//	bool isEmpty() {
//		if (top == -1) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	bool isFull(){
//		if (top == 4) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	void push(int val) {
//		if (isFull()) {
//			cout << "stack overflow" << endl;
//		}
//		else {
//			top++;
//			arr[top] = val;
//		}
//	}
//	int pop() {
//		if (isEmpty()) {
//			cout << "Stack underflow" << endl;
//			return 0;
//		}
//		else {
//			int popValue = arr[top];
//				arr[top] = 0;
//				top--;
//				return popValue;
//		}
//	}
//	int count() {
//		return(top + 1);
//	}
//	int peek(int pos) {
//		if (isEmpty()) {
//			cout << "Stack underflow" << endl;
//			return 0;
//		}
//		else {
//			return arr[pos];
//		}
//	}
//	void change(int pos, int val) {
//		arr[pos] = val;
//		cout << "Value changed at location" << pos << endl;
//	}
//	void display() {
//		cout << "All values in the stack are" << endl;
//		for (int i = 4; i >= 0; i--) {
//			cout << arr[i] << endl;
//		}
//	}
//};
//int main()
//{
//	Stack s1;
//	int option, position, value;
//	do {
//		cout << "Wat operation do yo want to perform? Select option number.Enter 0 to exit." << endl;
//		cout << "1. Push()" << endl;
//		cout << "2. Pop()" << endl;
//		cout << "3. isEmpty()" << endl;
//		cout << "4. isFull()" << endl;
//		cout << "5. Peak()" << endl;
//		cout << "6. Count()" << endl;
//		cout << "7. Change()" << endl;
//		cout << "8. Display()" << endl;
//		cout << "9. Clear screen" << endl << endl;
//
//		cin >> option;
//		switch(option) {
//		case 0:
//			break;
//
//		case 1:
//			cout << "Enter an item to piush in the stack" << endl;
//			cin >> value;
//			s1.push(value);
//			break;
//			
//		case 2:
//			cout << "Pop Function caled -\n Pop value: " << s1.pop() << endl;
//			break;
//
//		case 3:
//			if (s1.isEmpty()) {
//				cout << "Stck is Empty" << endl;
//			}
//			else {
//				cout << "Stack is not Empty" << endl;
//				break;
//			}
//
//		case 4:
//			if (s1.isFull()) {
//				cout << "Stck is Empty" << endl;
//			}
//			else {
//				cout << "Stack is not Empty" << endl;
//				break;
//			}
//
//		case 5: 
//			cout << "enter position of item you want to peak:" << endl;
//			cin >> position;
//			cout << "Peek Function Called - " << endl << s1.peek(position) << endl;
//			break;
//
//		case 6:
//			cout << "Count Function Called - Number of Items in the Stack are: "<<s1.count() << endl;
//			break;
//		case 7:
//			cout << "Change Function Caled - " << endl;
//			cout << "Enter position of item you want to change : ";
//			cin >> position;
//			cout << endl;
//			s1.change(position, value);
//			cout << "enter a value you want to change: ";
//			cin >> value;
//			break;
//
//		case 8:
//			cout << "Display Function Called - " << endl;
//			s1.display();
//			break;
//
//		case 9:
//			system("cls");
//			break;
//
//		default:
//			cout << "Enter Proper Option number " << endl;
//			break;
//		}
//
//	}while(option != 0);
//
//	return 0;
//}



// Use a stack #include <stack>

//int main() {
//	stack<int> s1;
//	int n, e , k=0;
//	cout << "How many elements did you want in your stack? " << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "Please enter your " << k<< " element: ";
//		cin >> e;
//		s1.push(e);
//		k++;
//	}
//	while (!s1.empty()) {
//		cout << "Your " << n - 1 << " element in the stack is: ";
//		cout << s1.top() << endl;
//		s1.pop();
//		n--;
//	}
//	if (s1.empty()) {
//		cout << "Your stack is empty" << endl;
//	}
//}
   

           //Infix to Postfix using Stack

//bool isOperator(char c) {
//	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int precedence(char c) {
//	if (c == '^') {
//		return 3;
//	}
//	else if (c == '*' || c == '/') {
//		return 2;
//	}
//	else if (c == '+' || c == '-') {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}
//
//string infixToPrefix(stack <char> s, string infix) {
//	string postfix;
//	for (int i = 0; i < infix.length(); i++) {
//		if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
//			postfix = postfix + infix[i];
//		}
//		else if(infix[i]=='(') {
//			s.push(infix[i]);
//		}
//		else if (infix[i] == ')') {
//			while ((s.top() != '(') && (!s.empty())) {
//				char temp = s.top();
//				postfix = postfix + temp;
//				s.pop();
//			}
//			if (s.top() == '(') {
//				s.pop();
//			}
//		}
//		else if (isOperator(infix[i])) {
//			if (s.empty()) {
//				s.push(infix[i]);
//			}
//			else {
//				if (precedence(infix[i]) > precedence(s.top())) {
//					s.push(infix[i]);
//				}
//				else if ((precedence(infix[i]) == precedence(s.top())) && (infix[i] == '^')) {
//					s.push(infix[i]);
//				}else{
//					while (!s.empty() && precedence(infix[i]) <= precedence(s.top())) {
//						char temp = s.top();
//						postfix += temp;
//						s.pop();
//					}
//					s.push(infix[i]);
//				}
//			}
//		}
//	}
//	while (!s.empty())
//	{
//		postfix += s.top();
//		s.pop();
//	}
//	return postfix;
//}
//
//int main() {
//	string infix_exp, postfix_exp;
//	cout << "Enter your infix: ";
//	cin >> infix_exp;
//	cout << "Your Infix is: " << infix_exp << endl;;
//	stack <char> stack;
//	postfix_exp = infixToPrefix(stack, infix_exp);
//	cout << "This is the Prefix of your Infix: " << postfix_exp << endl;
//	return 0;
//}