#include<stdio.h>

int main(){
int a = 15;
int *copy_a;

a/=3;
copy_a = &a; ++*copy_a;
a = *copy_a;

if (*copy_a == a){
	printf("Copy_a = %d\n", *copy_a);
	printf("a = %d\n", a); 
	printf("Therfore, copy_a = a = %d\n", *copy_a);
}
return 0;
}