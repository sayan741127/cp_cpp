

// #include<stdio.h>

// int main() {
//     int arr[10];

//     printf("enter 10 numbers in which you want to search\n");

//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter number which you want to search\n");
//     int key;
//     scanf("%d",&key);

//     for (int i = 0; i < 10; i++)
//     {

//         if (arr[i]==key)
//         {
//         printf("%d is found at position number %d\n",key,i+1);
//         return 0;
//         }

//     }

//     return 0;
// }

// #include <stdio.h>

// int binarySearch(int arr[], int l, int r, int key)
// {
//     if (r >= l)
//     {
//         int mid = l + (r - l) / 2;

//         if (arr[mid] == key)
//             return mid;

//         if (arr[mid] > key)
//             return binarySearch(arr, l, mid - 1, key);

//         return binarySearch(arr, mid + 1, r, key);
//     }

//     return -1;
// }

// int main()
// {

//     int n = 10;

//      int arr[10];

//     printf("Enter 10 numbers in which you want to search\n");

//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter number which you want to search\n");
//     int key;
//     scanf("%d",&key);

//     int result = binarySearch(arr, 0, n - 1, key);
//     if (result == -1)
//     {
//         printf("Element is not present in array\n");
//     }
//     else
//     {

//         printf("Element is present at index %d and position %d\n", result,result+1);
//     }
//     return 0;
// }

// #include <stdio.h>

// void multiply(int m1, int m2, int matrix1[][m2], int n1,
// 			int n2, int matrix_2[][n2])
// {
// 	int x, i, j;
// 	int result[m1][n2];
//     if (m2!=n1)
//     {
//         printf("Matrix multiplication cannot be possible\n");
//         return;
//     }

// 	for (i = 0; i < m1; i++)
// 	{
// 		for (j = 0; j < n2; j++)
// 		{
// 			result[i][j] = 0;
// 			for (x = 0; x < m2; x++)
// 			{
// 				*(*(result + i) + j) += *(*(matrix1 + i) + x)
// 									* *(*(matrix_2 + x) + j);
// 			}
// 		}
// 	}
// 	for (i = 0; i < m1; i++)
// 	{
// 		for (j = 0; j < n2; j++)
// 		{
// 			printf("%d ", *(*(result + i) + j));
// 		}
// 		printf("\n");
// 	}
// }

// int main()
// {
// 	int m1 , m2 , n1 , n2;
//     printf("Enter row and coloumn of first matrix\n");
//     scanf("%d %d",&m1,&m2);
//     printf("Enter row and coloumn of second matrix\n");
//     scanf("%d %d",&n1,&n2);

// 	int matrix1[m1][m2]; //= { { 2, 4 }, { 3, 4 } };
// 	int matrix_2[n1][n2];// = { { 1, 2 }, { 1, 3 } };

//     printf("Enter elements of first matrix\n");

//     for (int i = 0; i < m1; i++)
//     {
//         for (int j = 0; j < m2; j++)
//         {
//             scanf("%d",&matrix1[i][j]);
//         }

//     }
//     printf("Enter elements of second matrix\n");
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             scanf("%d",&matrix_2[i][j]);
//         }

//     }

//     printf("The resultant matrix will be:\n");

// 	multiply(m1, m2, matrix1, n1, n2, matrix_2);
// 	return 0;
// }

// #include <stdio.h>
// #define N 4

// void multiply(int matrix1[N][N], int matrix_2[N][N], int result[N][N])
// {
// 	int i, j, k;
// 	for (i = 0; i < N; i++) {
// 		for (j = 0; j < N; j++) {

// 			result[i][j] = 0;

// 			for (k = 0; k < N; k++){

// 				result[i][j] += matrix1[j][k] * matrix_2[k][j];
//             }
// 		}
// 	}
// }

// int main()
// {
// 	int matrix1[N][N] = { { 1, 1, 1, 1 },
// 					{ 2, 2, 2, 2 },
// 					{ 3, 3, 3, 3 },
// 					{ 4, 4, 4, 4 } };

// 	int matrix_2[N][N] = { { 1, 1, 1, 1 },
// 					{ 2, 2, 2, 2 },
// 					{ 3, 3, 3, 3 },
// 					{ 4, 4, 4, 4 } };

// 	int result[N][N];
// 	int i, j;

// 	multiply(matrix1, matrix_2, result);

// 	printf("Resultant matrix is \n");

// 	for (i = 0; i < N; i++) {
// 		for (j = 0; j < N; j++){

// 			printf("%d ", result[i][j]);
//         }
// 		printf("\n");
// 	}

// 	return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter the size");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0], min = arr[0], sum = 0;

//     int i = 0;
//     while (i < n)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//         if (arr[i] < min)
//             min = arr[i];
//         sum = sum + arr[i];

//         i++;
//     }
//     printf("max= %d min=%d avg= %f", max, min, (float)sum / n);

//     return 0;
// }