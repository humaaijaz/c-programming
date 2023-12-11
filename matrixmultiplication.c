#include <stdio.h>

int main() {
   int m1[10][10], m2[10][10], result[10][10];
   int i, j, k;
   int row1, col1, row2, col2;

   printf("Enter the number of rows and columns of the first matrix: ");
   scanf("%d %d", &row1, &col1);

   printf("Enter the elements of the first matrix:\n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         scanf("%d", &m1[i][j]);
      }
   }

   printf("Enter the number of rows and columns of the second matrix: ");
   scanf("%d %d", &row2, &col2);

   if (col1 != row2) {
      printf("The matrices cannot be multiplied with each other.\n");
      return 0;
   }

   printf("Enter the elements of the second matrix:\n");
   for (i = 0; i < row2; i++) {
      for (j = 0; j < col2; j++) {
         scanf("%d", &m2[i][j]);
      }
   }

   for (i = 0; i < row1; i++) {
      for (j = 0; j < col2; j++) {
         result[i][j] = 0;
         for (k = 0; k < col1; k++) {
            result[i][j] += m1[i][k] * m2[k][j];
         }
      }
   }

   printf("The resultant matrix is:\n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col2; j++) {
         printf("%d ", result[i][j]);
      }
      printf("\n");
   }

   return 0;
}
