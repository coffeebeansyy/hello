#include <iostream>
#include "pthread.h"
#include <pthread.h>
#include <time.h>

int add(int a,int b){
    return a+b;
}

int main() {
    pthread_t p;
    add(1,2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
