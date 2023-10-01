#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

               // Задача 1  
               // Реализирайте Ханойкси кули рекурсивно, 
               // с разпечатка на последователните инструкции за местене на единични 
               // дискове – и я предайте. Проверете на ръка как работи, като изпълните 
               // инстукциите, разпeчатани на изхода с "истински дискове" (max 5) 
               // от https://www.mathsisfun.com/games/towerofhanoi.html

//void hanoi(int n, char source, char destination, char auxiliary) {
//    if (n == 0) {
//        return;
//    }
//
//    hanoi(n - 1, source, auxiliary, destination);
//    cout << "Move disk from " << source << " to " << destination << endl;
//    hanoi(n - 1, auxiliary,destination, source);
//}
//
//int main() {
//    int n = 5; // Брой дискове
//    hanoi(n, 'A', 'C', 'B');
//
//    return 0;
//}



                  // Задача 2   
                  // Пуснете работещата програма с 10, 15, 20, 25, 30, 35 и 40 диска. 
                  // Съставете графика на времето за изпълнение по познатия ви начин – и я 
                  // предайте заедно с кода.

//void hanoi(int n, char source, char destination, char auxiliary) {
//    if (n == 0) {
//        return;
//    }
//
//    hanoi(n - 1, source, auxiliary, destination);
//    // cout << "Move disk " << n << " from " << source << " to " << destination << endl;
//    hanoi(n - 1, auxiliary, destination, source);
//}
//
//int main() {
//    vector<int> diskCounts = { 10, 15, 20, 25, 30, 35, 40 };
//
//    for (int n : diskCounts) {
//        auto start = chrono::high_resolution_clock::now();
//
//        hanoi(n, 'A', 'C', 'B');
//
//        auto end = chrono::high_resolution_clock::now();
//        chrono::duration<double> duration = end - start;
//
//        cout << "Time taken for " << n << " disks: " << duration.count() << " seconds" << endl;
//    }
//
//    return 0;
//}

//Time taken for 10 disks: 1.48e-05 seconds
//Time taken for 15 disks: 0.0004902 seconds
//Time taken for 20 disks : 0.018466 seconds
//Time taken for 25 disks : 0.552741 seconds
//Time taken for 30 disks : 17.7317 seconds
//Time taken for 35 disks : 543.427 seconds