// Опит 7Б Стек.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;

                    //Опит1 
                    
//void revercestring(string s) {
//    stack<string>stack;
//    string word = "";
//    for (char c : s) {
//        if (c != ' ') {
//            word += c;
//        }
//        else {
//            if (stack.empty()) {
//                stack.push(word);
//                word = "";
//            }
//
//        }
//    }
//    if (!word.empty()) {
//        stack.push(word);
//    }
//    while (!stack.empty()) {
//        string revercestring = stack.top();
//        for (int i = revercestring.length() - 1; i >= 0; i--) {
//            cout << revercestring[i];
//        }
//        cout << " ";
//        stack.pop();
//    }
//    cout<<endl;
//}
//
//int main()
//{
//    string s = "Damyan Dimitrov Iliev";
//    revercestring(s);
//
//    return 0;
//
//
//}

                  //Опит2

//int main() {
//    std::string inputString = "Damyan Dimitrov Iliev";
//    std::string reversedString;
//
//    // Обхождане на низа в обратен ред и добавяне на символите в новия низ
//    for (int i = inputString.length() - 1; i >= 0; i--) {
//        reversedString += inputString[i];
//    }
//
//    std::cout << "Обратен низ: " << reversedString << std::endl;
//
//    return 0;
//}

                  //Опит3

//int main() {
//    string inputString = "Damyan Dimitrov Iliev";
//    stack<char> charStack;
//    string reversedString;
//
//    // Поставяме всеки символ в стека
//    for (char character : inputString) {
//        charStack.push(character);
//    }
//
//    // Изваждаме символите от стека и ги добавяме към обратния низ
//    while (!charStack.empty()) {
//        reversedString += charStack.top();
//        charStack.pop();
//    }
//
//    cout << "Обратен низ: " << reversedString << endl;
//
//    return 0;
//}
