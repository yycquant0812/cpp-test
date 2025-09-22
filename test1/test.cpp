#include <iostream>

int main() {
    double celsius;
    double fahrenheit;
    
    std::cout << "請輸入華氏溫度!\n";
    std::cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) / 9 * 5;
    
    std::cout << "攝氏溫度為: " << celsius << " 度\n";
    
    return 0;
}