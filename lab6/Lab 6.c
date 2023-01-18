
#include <stdio.h>
#define arraySize 5
//const int arraySizeByConst = 5;
int main()
{
	
	int array1[5] = { 1,2,3,4,5 };
	int array2[] = {1,2,3,4,5};
	int array3[arraySize];
	//int array4[arraySizeByConst];
	for (int i = 0; i < sizeof(array1)/sizeof(int); i++)
	{
		printf("array1[%i] = %d \n", i, array1[i]);
	}
	char string[] = "Hello, World! \n";
	char string2[50];
	printf(string);
	scanf("%s",string2);
	printf(string2);

}
