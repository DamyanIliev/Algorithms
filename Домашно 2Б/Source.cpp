#include <iostream>
#include <vector>
            // Задача 1


//// Глобална променлива за съхранение на резултата
//int gcd_result = 0;
//
//int euclidean_gcd(int a, int b) {
//    // Извеждане на стойностите на локалните променливи при потъване
//    std::cout << "Потъване: a = " << a << ", b = " << b << std::endl;
//
//    if (b == 0) {
//        gcd_result = a;
//    }
//    else {
//        euclidean_gcd(b, a % b);
//    }
//
//    // Извеждане на стойностите на локалните променливи при изплуване
//    std::cout << "Изплуване: a = " << a << ", b = " << b << std::endl;
//
//    return gcd_result;
//}
//
//int main() {
//    int a = 1785, b = 546;
//
//    int result = euclidean_gcd(a, b);
//
//    // Извеждане на окончателния резултат
//    std::cout << "Най-големият общ делител: " << result << std::endl;
//
//    return 0;
//}


                // Задача 2
//
//// Глобална променлива за броене на копията
//int copy_count = 0;
//
//int euclidean_gcd(int a, int b) {
//    copy_count++;
//
//    if (b == 0) {
//        return a;
//    }
//    else {
//        return euclidean_gcd(b, a % b);
//    }
//}
//
//int main() {
//    int a_fib = 987, b_fib = 1597;  // Съседни числа от редицата на Фибоначи
//    int a_near = 1597, b_near = 2584;  // Съседни на тях числа
//
//    int result_fib = euclidean_gcd(a_fib, b_fib);
//    std::cout << "Брой копия при Фибоначи: " << copy_count << std::endl;
//
//    copy_count = 0;  // Нулираме брояча за следващия случай
//
//    int result_near = euclidean_gcd(a_near, b_near);
//    std::cout << "Брой копия при съседни числа: " << copy_count << std::endl;
//
//    return 0;
//}



             // Задача 3 

//
//int recursion_depth = 0;
//
//unsigned long long factorial(int n) {
//    recursion_depth++;
//    std::cout << "Потъване: n = " << n << ", recursion_depth = " << recursion_depth << std::endl;
//
//    if (n == 0 || n == 1) {
//        recursion_depth--;
//        std::cout << "Изплуване: n = " << n << ", recursion_depth = " << recursion_depth << std::endl;
//        return 1;
//    }
//    else {
//        unsigned long long result = n * factorial(n - 1);
//        recursion_depth--;
//        std::cout << "Изплуване: n = " << n << ", recursion_depth = " << recursion_depth << std::endl;
//        return result;
//    }
//}
//
//int main() {
//    int num = 5; // Число, за което ще намерим факториел
//
//    unsigned long long result = factorial(num);
//
//    std::cout << "Факториел на " << num << " е " << result << std::endl;
//
//    return 0;
//}


                             // Задача 4

int binary_search_recursive(const std::vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1; // Стойността не е намерена
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Стойността е намерена
    }
    else if (arr[mid] < target) {
        return binary_search_recursive(arr, target, mid + 1, high); // Търсим в дясната половина
    }
    else {
        return binary_search_recursive(arr, target, low, mid - 1); // Търсим в лявата половина
    }
}

int main() {
    std::vector<int> arr = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int target1 = 10;
    int target2 = 15;

    int result1 = binary_search_recursive(arr, target1, 0, arr.size() - 1);
    int result2 = binary_search_recursive(arr, target2, 0, arr.size() - 1);

    if (result1 != -1) {
        std::cout << target1 << " е на позиция " << result1 << " в масива." << std::endl;
    }
    else {
        std::cout << target1 << " не е намерен в масива." << std::endl;
    }

    if (result2 != -1) {
        std::cout << target2 << " е на позиция " << result2 << " в масива." << std::endl;
    }
    else {
        std::cout << target2 << " не е намерен в масива." << std::endl;
    }

    return 0;
}