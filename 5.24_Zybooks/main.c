#include <stdio.h>

int i = 0;

void IntToReverseBinary(int integerValue, char binaryValue[]) {
   while (integerValue > 0) {
      binaryValue[i] = integerValue % 2;
      integerValue = integerValue/2;
      i = i + 1;
   }
   binaryValue[i] = '\0';
}

void StringReverse(char inputString[], char reversedString[]) {
   i = i - 1;
   int c = 0;
   while (i >= 0) {
      reversedString[c] = inputString[i];
      printf("%d", reversedString[c]);
      i = i - 1;
      c = c + 1;
   }
   reversedString[c] = '\0';
   printf("\n");
}

int main(void) {

   char y[50];
   char z[50];
   int x;

   scanf("%d", &x);
   IntToReverseBinary(x, y);
   StringReverse(y, z);

   return 0;
}
