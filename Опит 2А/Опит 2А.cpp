#include <iostream>
#include <string>
using namespace std;

//int nod_res = 0;
//
//int euclidian_nod(int a, int b){
//    if ( b == 0 )  {
//        nod_res = a;
//    }
//    else {
//        euclidian_nod(b, a % b);
//    }
//
//    return nod_res;
//
//}
//
//int main()
//{
//    int a = 48, b = 18;
//    int result = euclidian_nod(a, b);
//    cout << result;
//    return 0;
//}




  // Task 2 revers a string using recursion


//void revers(string a) {
//    if (a.length() == 0) {
//        return;
//    }
//    else {
//        string res = a.substr(1);
//        revers(res);
//
//        cout << a[0];
//
//    }
//}
//
//
//
//int main()
//{
//    string a = "dragon";
//    revers(a);
//}

//  Task 3 repalse "pi" with 3,14

//void replace(string a) {
//
//    if (a.length() == 0) {
//        return;
//    }
//
//    if (a[0]=='p' && a[1]=='i') {
//        cout << "3.14" ;
//        replace(a.substr(2));
//    }
//    else {
//        cout << a[0];
//        replace(a.substr(1));
//    }
//
//}
//
//
//int main()
//{
//    string a = "piooopiooopi";
//    replace(a);
//}



        //Task 4 Remove every dupicae

//void remove_duplicate(string a) {
//
//    if (a.length() == 0) {
//        return;
//    }
//
//    if (a[0] == a[1]) {
//        a.erase(0,1);
//        remove_duplicate(a);
//    }
//    else {
//        cout << a[0];
//        remove_duplicate(a.substr(1));
//    }
//
//}
//int main() {
//
//    string a = "aaaabccccddddeeefffffffff";
//    remove_duplicate(a);
//    return 0;
//
//}



    // Task 5 move all X to the end of the string 


//string movex(string a) {
//    if (a.length() == 0) {
//        return "";
//    }
//
//    char ch = a[0];
//    string ans = movex(a.substr(1));
//    if (ch == 'x') {
//        return ans + ch;
//    }
//    return ch + ans;
//}
//
//int main() {
//    string a = "axbxcxxxxdx";
//    cout << movex(a);
//    return 0;
//}



   // Task 6 generate all substrings of a string
   
//void substrings(string a, string ans) {
//    
//    if (a.length() == 0) {
//        cout << ans << endl;
//        return;
//    }
//
//    char ch = a[0];
//    string ros = a.substr(1);
//        substrings(ros, ans);
//        substrings(ros, ans + ch);
//
//}
//
//
//int main() {
//    string a = "ABC";
//    string ans = "";
//        substrings(a,ans);
//        cout << endl;
//
//
//}


        // Task 7  

//void ascii(string a, string ans) {
//    if (a.length() == 0) {
//        cout<< ans << endl;
//        return;
//    }
//    char ch = a[0];
//    int code = ch;
//    string ros = a.substr(0);
//
//    ascii(ros, ans);
//    ascii(ros, ans + ch);
//    ascii(ros, ans + to_string(code));
//}
//
//int main(){
//    string a = "AB";
//    string ans = "";
//    ascii(a, ans);
//    cout << endl;
//
//}