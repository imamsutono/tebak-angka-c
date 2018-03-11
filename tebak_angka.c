#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned) time(NULL));
  int random = (rand() % 50) + 1;
  int answer;
  int chance;

  printf("---------------------\n");
  printf("Permainan Tebak Angka\n");
  printf("---------------------\n\n");
  printf("Tebak angka mulai dari 1 - 50\n");
  printf("-----------------------------\n\n");

  for (chance = 10; chance > 0; chance--) {
    printf("Masukkan angka: ");
    scanf("%d", &answer);

    if (random != answer) {
      if (chance > 1) {
        if (answer > random) {
          printf("\nAngka yang kamu masukkan terlalu besar\n");
        } else {
          printf("\nAngka yang kamu masukkan terlalu kecil\n");
        }
      } else {
        printf("\n\nKamu kalah :p\n");
        printf("Angka yang benar: %d\n", random);
        return 0;
      }
    } else {
      printf("\nAngka yang kamu masukkan benar\n");
      return 0;
    }
  }
}