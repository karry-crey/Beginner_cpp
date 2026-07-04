#include<stdio.h>
#include<stdlib.h>
#include<iostream>
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
int main() {
	int x = 0;
	printf("%d\n", x);//default access to local variables
	printf("%d\n", ::x);//access global variables
	printf("%p\n", rand);//print the function address
	printf("%d\n", shared::rand);//access variables within the specified scope
	printf("%d\n", shared::A::x);
	printf("%d\n", shared::B::x);
	std::cout << "hello world\n" << std::endl;
	return 0;
}