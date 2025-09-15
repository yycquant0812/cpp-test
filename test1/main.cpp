 #include <iostream>
 int main() {
   int x;            // 宣告（declaration）：跟編譯器說「我需要一個 int 變數叫 x」
   x = 5;            // 指派（assignment）：把數值 5 放到 x 裡
   std::cout << x;   // 這時輸出會是 5
   return 0;
 }