#include <iostream>

int main(int argc, char* argv[]) {
  int n; 
  std::cout << "Masukan angka "; std::cin >> n;

  for (int i = 0; i < n + 6; i++) {
    /* Jarak baris baru */
    for (int x = 0; x < i; x++){
      std::cout << "  ";
    }
    
    /* Segitiga Kiri (0 sampai n) */
    for (int j = 0; j <= n; j++) {
      std::cout << j << " "; 
    }

    /* Segitiga Kiri (n sampai 0) */
    for (int k = n - 1; k >= 0; k--) {
      std::cout << k << " "; 
    }

    n--;
    std::cout << std::endl;
  }

  return 0;
}