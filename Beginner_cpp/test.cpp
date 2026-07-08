#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<assert.h>
using namespace std;
int x = 1;
//define a namespace within a namespace
namespace shared {
	int rand = 10;
	namespace A {
		int x = 1;
	}

	namespace B {
		int x = 2;
	}


}



//if no scope is specified,search first in the local scope,
//and then in the global scope
//int main() {
	//int x = 0;
	//printf("%d\n", x);//default access to local variables
	//printf("%d\n", ::x);//access global variables
	//printf("%p\n", rand);//print the function address
	//printf("%d\n", shared::rand);//access variables within the specified scope
	//printf("%d\n", shared::A::x);
	//printf("%d\n", shared::B::x);
	//std::cout << "hello world\n" << std::endl;
	//return 0;
//}

//void Func1(int a , int b, int c ) {
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//}
//int main() {
//	Func1(1,2,3);
//	return 0;
//}

//function overloading
//there can be funtions with the same name,
// but with diffent numbers or types of parameters
//void swap(int* p1, int* p2) {
//
//}
//void swap(double*p1, double* p2) {
//
//}
//
//void swap(int& p1, int& p2) {
//	int tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//int main() {
//	int a = 10;
//	int& b = a;
//	return 0;
//}

typedef struct AeqLiist {
	int* a;
	int size;
	int capacity;
}SL;
void SLInit(SL& sl, int n = 4) {
	sl.a = (int*)malloc(n * sizeof(int));
	sl.size = 0;
	sl.capacity = n;
}
void SLPushBack(SL& sl, int x) {
	//resize
	sl.a[sl.size] = x;
	sl.size++;

}

int& SLAt(SL& sl,int i) {
	assert(i < sl.size);
	return sl.a[i];
}
//int main() {
//	SL s;
//	SLInit(s);
//	SLPushBack(s, 1);
//	SLPushBack(s, 2);
//	SLPushBack(s, 3);
//
//	for (int i = 0; i < s.size; i++) {
//		SLAt(s, i)++;
//	}
//
//	for (int i = 0; i < s.size; i++) {
//		cout << SLAt(s, i) << endl;
//	}
//	return 0;
//}
int main() {
	//int x = 1;
	//const int& r = x * 10;
	double d = 1.1;
	const int& r5 = d;
	int i = d;
	cout << i <<" "<< d << endl;

	return 0;
}