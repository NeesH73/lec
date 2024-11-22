#include <iostream>


bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i<= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Ошибка: Вы должны указать два аргумента." << std::endl;     
    }
    
    int n = std::stoi(argv[1]);
    int k = std::stoi(argv[2]);

    if (n < 0 || k > 10000) {
        std::cerr << "Ошибка: n должен быть >= 0 и k должен быть <= 10000." << std::endl;
        return 1;
    }

    for (int i = n; i <= k; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}
