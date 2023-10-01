#include <iostream>
#include <stack>
using namespace std; 

void reverseWords(string a) {
    stack<string> stack;
    string word = "";
    for (char c : a) {
        if (c != ' ') {
            word += c;
        }
        else {
            if (!word.empty()) {
                stack.push(word);
                word = "";
            }
        }
    }
    if (!word.empty()) {
        stack.push(word);
    }
    while (!stack.empty()) {
        string reversedWord = stack.top();
        for (int i = reversedWord.length() - 1; i >= 0; i--) {
            cout << reversedWord[i];
        }
        cout << " ";
        stack.pop();
    }
    cout << endl;
}

int main() {
    string a = "Damyan Dimitrov Iliev";
    reverseWords(a);

    return 0;
}
