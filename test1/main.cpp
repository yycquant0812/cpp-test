#include <iostream>
int main() {
   const double PI = 3.141592653589793; // const：不可被修改的常數
   int r = 3;                           // 半徑
   double area = PI * r * r;            // 自動提升型別：int r 會提升為 double 再運算
   std::cout << "circle area=" << area << "\n";
   // PI = 3.14; // ⚠️ 解鎖這行會編譯錯：const 不能被重新指派
   return 0;
 }