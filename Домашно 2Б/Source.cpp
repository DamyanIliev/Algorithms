#include <iostream>
#include <vector>
            // ������ 1


//// �������� ���������� �� ���������� �� ���������
//int gcd_result = 0;
//
//int euclidean_gcd(int a, int b) {
//    // ��������� �� ����������� �� ��������� ���������� ��� ��������
//    std::cout << "��������: a = " << a << ", b = " << b << std::endl;
//
//    if (b == 0) {
//        gcd_result = a;
//    }
//    else {
//        euclidean_gcd(b, a % b);
//    }
//
//    // ��������� �� ����������� �� ��������� ���������� ��� ���������
//    std::cout << "���������: a = " << a << ", b = " << b << std::endl;
//
//    return gcd_result;
//}
//
//int main() {
//    int a = 1785, b = 546;
//
//    int result = euclidean_gcd(a, b);
//
//    // ��������� �� ������������ ��������
//    std::cout << "���-�������� ��� �������: " << result << std::endl;
//
//    return 0;
//}


                // ������ 2
//
//// �������� ���������� �� ������ �� �������
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
//    int a_fib = 987, b_fib = 1597;  // ������� ����� �� �������� �� ��������
//    int a_near = 1597, b_near = 2584;  // ������� �� ��� �����
//
//    int result_fib = euclidean_gcd(a_fib, b_fib);
//    std::cout << "���� ����� ��� ��������: " << copy_count << std::endl;
//
//    copy_count = 0;  // �������� ������ �� ��������� ������
//
//    int result_near = euclidean_gcd(a_near, b_near);
//    std::cout << "���� ����� ��� ������� �����: " << copy_count << std::endl;
//
//    return 0;
//}



             // ������ 3 

//
//int recursion_depth = 0;
//
//unsigned long long factorial(int n) {
//    recursion_depth++;
//    std::cout << "��������: n = " << n << ", recursion_depth = " << recursion_depth << std::endl;
//
//    if (n == 0 || n == 1) {
//        recursion_depth--;
//        std::cout << "���������: n = " << n << ", recursion_depth = " << recursion_depth << std::endl;
//        return 1;
//    }
//    else {
//        unsigned long long result = n * factorial(n - 1);
//        recursion_depth--;
//        std::cout << "���������: n = " << n << ", recursion_depth = " << recursion_depth << std::endl;
//        return result;
//    }
//}
//
//int main() {
//    int num = 5; // �����, �� ����� �� ������� ���������
//
//    unsigned long long result = factorial(num);
//
//    std::cout << "��������� �� " << num << " � " << result << std::endl;
//
//    return 0;
//}


                             // ������ 4

int binary_search_recursive(const std::vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1; // ���������� �� � ��������
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // ���������� � ��������
    }
    else if (arr[mid] < target) {
        return binary_search_recursive(arr, target, mid + 1, high); // ������ � ������� ��������
    }
    else {
        return binary_search_recursive(arr, target, low, mid - 1); // ������ � ������ ��������
    }
}

int main() {
    std::vector<int> arr = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int target1 = 10;
    int target2 = 15;

    int result1 = binary_search_recursive(arr, target1, 0, arr.size() - 1);
    int result2 = binary_search_recursive(arr, target2, 0, arr.size() - 1);

    if (result1 != -1) {
        std::cout << target1 << " � �� ������� " << result1 << " � ������." << std::endl;
    }
    else {
        std::cout << target1 << " �� � ������� � ������." << std::endl;
    }

    if (result2 != -1) {
        std::cout << target2 << " � �� ������� " << result2 << " � ������." << std::endl;
    }
    else {
        std::cout << target2 << " �� � ������� � ������." << std::endl;
    }

    return 0;
}