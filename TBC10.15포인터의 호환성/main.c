#include<stdio.h>

int main()
{
	///* Pointer Compatibility*/
	//int n = 5;
	//double x;
	//x = n;	//no error
	////����ȯ�� �ȴ�.
	//int* p1 = &n;
	//double* pd = &x;
	////pd = p1; //Warning �����ͳ��� casting�ؾߵǸ� ����ȯ�� �����ؾߵȴ�. 
	////��ǻ� ����ȯ�� �ȵǾ� Warning�̶��. 

	//int* pt; //������ 
	//int(*pa)[3]; //�������ε� ���Ұ� 3��¥����  �迭�� ���� �����͸� ���� �� �ִ� �׸��̴�. 
	//int ar1[2][3] = { 3, };
	//int ar2[3][2] = { 7, };
	//int** p2;		// a pointer to a pointer 

	//pt = &ar1[0][0]; 
	///*for (int i = 0; i < 6; i++)
	//	printf("%d", *(pt + i));*/
	////1�����迭�� �������迭�� ���ҵ��� ������ �� �ִ�. �޸𸮰� ������ �Ϸķ� �����Ǿ��ֱ⶧����
	//// �ٸ� �����͸� ������� ���Ұ� ����� �� ���� ����. 

	//pt = ar1[0];

	////pt = ar1;
	////ar1�� 2�����迭�̱⶧���� �׳������Ϳ��� ���� �� ����. 
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
	//const int* p2 = &y;//pointer p2�� ������ ��const�� ���ʿ� �ٿ��ָ� ���� ���ٲ۴�. ��,  indrection�� ���ָ鼭 ���� ���ٲ��ش�. 
	////�����ͺ�����ü�� ���ٲ��شٴ� �ƴϰ� indrection�Ҷ� ���ٲ��ش��̴�. �׷��� �ƿ� ���� ���ٲٰ� ���ٷ��� const int* const p2�̷������� �������־���Ѵ�. 
	//const int** pp2 = &p1;
	////p1 = p2; // Warning (Error) ���� ��ʴ� �ƴϴ�. 
	////*p2 = 123; //Error
	//p2 = p1;

	//int x2 = 30;
	//int* p3 = &x2;
	//*pp2 = p3;
	////���������;տ� �������� const�� �ٿ��µ� indrection�� �ص� ���� �ٲܼ����ִ�. 
	//pp2 = &p1;


	//{
	//	const int** pp2;
	//	int* p1;
	//	const int n = 13;
	//	pp2 = &p1;
	//	**pp2 = &n;
	//	* p1 = 10; 
	//	//���ڵ��� �������ƾ��Ѵ�. �̷����ұ�� const����������Ҿ����
	//}

	return 0;
}