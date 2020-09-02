#include<stdio.h>

int main()
{
	///* Pointer Compatibility*/
	//int n = 5;
	//double x;
	//x = n;	//no error
	////형변환이 된다.
	//int* p1 = &n;
	//double* pd = &x;
	////pd = p1; //Warning 포인터끼리 casting해야되면 형변환을 설명해야된다. 
	////사실상 형변환이 안되어 Warning이뜬다. 

	//int* pt; //포인터 
	//int(*pa)[3]; //포인터인데 원소가 3개짜리인  배열에 대한 포인터를 담을 수 있는 그릇이다. 
	//int ar1[2][3] = { 3, };
	//int ar2[3][2] = { 7, };
	//int** p2;		// a pointer to a pointer 

	//pt = &ar1[0][0]; 
	///*for (int i = 0; i < 6; i++)
	//	printf("%d", *(pt + i));*/
	////1차원배열로 다차원배열의 원소들을 접근할 수 있다. 메모리가 어차피 일렬로 나열되어있기때문에
	//// 다만 포인터만 가지고는 원소가 몇개인지 알 수가 없다. 

	//pt = ar1[0];

	////pt = ar1;
	////ar1은 2차원배열이기때문에 그냥포인터에는 담을 수 없다. 
	//pa = ar1;	//pointer-to-int[3]
	////pa = ar2;
	//p2 = &pt; // pointer-to-int
	//*p2 = ar2[0]; // pointer-to-int
	//p2 = ar2; //Warning(Error)
	////Notes
	//// - p2 : pointer to pointer to int 
	//// - ar2 : a pointer to array-of-two-ints

	//int x = 20;
	//const int y = 23;
	//int* p1 = &x;
	//const int* p2 = &y;//pointer p2를 선언할 때const를 왼쪽에 붙여주면 값을 못바꾼다. 즉,  indrection을 해주면서 값을 못바꿔준다. 
	////포인터변수자체를 못바꿔준다는 아니고 indrection할때 못바꿔준다이다. 그러면 아예 값을 못바꾸게 해줄려면 const int* const p2이런식으로 선언해주어야한다. 
	//const int** pp2 = &p1;
	////p1 = p2; // Warning (Error) 좋은 사례는 아니다. 
	////*p2 = 123; //Error
	//p2 = p1;

	//int x2 = 30;
	//int* p3 = &x2;
	//*pp2 = p3;
	////이중포인터앞에 위에보면 const를 붙였는데 indrection을 해도 값을 바꿀수가있다. 
	//pp2 = &p1;


	//{
	//	const int** pp2;
	//	int* p1;
	//	const int n = 13;
	//	pp2 = &p1;
	//	**pp2 = &n;
	//	* p1 = 10; 
	//	//이코딩은 하지말아야한다. 이렇게할까면 const사용하지말았어야함
	//}

	return 0;
}