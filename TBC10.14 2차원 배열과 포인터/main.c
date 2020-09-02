#include<stdio.h>

int main()
{
	//float arr2d[2][4] = { { 1.0f, 2.0f, 3.0f, 4.0f }, 
	//					{ 5.0f, 6.0f, 7.0f, 8.0f } };
	//
	//printf("%u\n", (unsigned) arr2d);
	//printf("%u\n", (unsigned)arr2d[0]);
	//printf("\n");

	////arr2d points to arr2d[0] (not arr2d[0][0]), KNK ch. 12.4
	////arr2d[0][0]은 메모리 공간에 있는 값을 의미한다. 하지만 arr2d[0]은 주소이다 누구의 주소이냐 arr2d[0][0]의 주소이다. 
	//printf("%u\n", (unsigned)* arr2d);
	//printf("%u\n", (unsigned)& arr2d[0]);
	//printf("%u\n", (unsigned)& arr2d[0][0]);
	//printf("%f %f\n", arr2d[0][0], **arr2d);
	//printf("\n");

	//printf("%u\n", (unsigned)(arr2d + 1));
	//printf("%u\n", (unsigned)(&arr2d[1]));
	//printf("%u\n", (unsigned)(arr2d[1]));
	//printf("%u\n", (unsigned)(*(arr2d + 1)));
	//printf("%u\n", (unsigned)(&arr2d[0] + 1));
	//printf("%u\n", (unsigned)(&arr2d[1][0]));
	//printf("\n");

	//for (int j = 0; j < 2; j++)
	//{
	//	printf("[%d] = %u, %u\n", j, (unsigned)(arr2d[j]), (unsigned)(*(arr2d + j)));
	//	for (int i = 0; i < 3; i++)
	//	{
	//		printf("[%d][%d] = %f, %f\n", j, i,(arr2d[j][i]),*(*(arr2d + j) + i));
	//		*(*(arr2d + j) + i) += 1.0f;
	//	}
	//}
	//printf("\n");

	/* Pointers to Multidimensional Arrays*/
	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f}, {5.0f,6.0f,7.0f,8.0f} };
	
	float (*pa)[4]; // a SINGLE pointer to an array of 4 float
	//4개의 float를 가지고 있는 배열에 대한 포인터 애는 하나이다. 
	//애는 하나라서 사이즈를 찍으면 4바이트나온다. 
	float* ap[2]; // an array of TWO pointers-to -float
	//원소가 2개인 포인터의 배열 , 애는 배열이기 때문에 8바이트가 나온다. 
	//괄호가 있냐없냐 차이다. blanket이 연산자우선순위가 *보다 높기떄문에 두번째는 배열이 먼저 생성되고 포인터가되고
	//float (*pa)[4] 는 괄호가 쳐져있기떄문에 *(asterisk)포인터를 먼저해주고 배열이 선언된다. 

	printf("%zu\n", sizeof(pa));  // 8 in x64
	printf("%zu\n", sizeof(ap)); // 16 in x64
	printf("\n");

	pa = arr2d;
	//pa[0] = arr2d[0]; //error
	//pa[1] = arr2d[1]; //error

	//ap = arr2d; //error 포인터의 배열이기떄문에 에러가나온다. 
	ap[0] = arr2d[0];
	ap[1] = arr2d[1];

	printf("%u %u\n", (unsigned)pa, (unsigned)(pa + 1));
	printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	printf("%u %u\n", (unsigned)pa[0], (unsigned)(pa[0] + 1));
	printf("%f\n", pa[0][0]);
	printf("%f\n", *pa[0]);
	printf("%f\n", **pa);
	printf("%f\n", pa[1][3]);
	printf("%f\n", *(*(pa + 1) + 3));
	printf("\n");

	printf("%u %u\n", (unsigned)ap, (unsigned)(ap + 1));
	printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	printf("%u %u\n", (unsigned)ap[0], (unsigned)(ap[0] + 1));
	printf("%f\n", ap[0][0]);
	printf("%f\n", * ap[0]);
	printf("%f\n", **ap);
	printf("%f\n", ap[1][3]);
	printf("%f\n", *(*(ap + 1) + 3));
	return 0;
}