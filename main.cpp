#include <iostream>
long int fun1 (long int i, int j) {
    return i*j;
}

void fun2 (long int i) {
    printf("%ld",i);
}

 long int fun3 (long int i) {
   i=i%3;
    return i;
}


int main() {
    long int a=8;
    int b=2;

    a=fun1(a,b);
    fun2(a);
    a=fun3(a);
    return a;
}