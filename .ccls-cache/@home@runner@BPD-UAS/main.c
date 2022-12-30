#include <stdio.h>
//#include <complex.h>

int main() {
int i;
int nilai[10];

printf("NAMA : Muhammad Bintang Nurul Abrar\n");
printf("NIM  : 2211510496 \n\n");  
  
for (i = 0; i < 10; i++) {
      printf("Masukkan nilai ke- %d: ", i+1);
      scanf("%d", &nilai[i]);
      
      }
printf("\n=====================================================================");
printf("\n\n");
    for (i = 0; i < 10; i++) {

      if (nilai[i] > 100) {
      printf("");    
                  
      }
      
      else if (nilai[i] >= 60)
      printf("Nilai anda yang lulus %d \n\n", nilai[i]); 
  
  }
}
  