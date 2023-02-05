#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // C++ example with different data types and formatted output
    int i;
    char c;
    double d;
    long l;
    float f;
    scanf("%d %ld %c %f %lf", &i, &l,&c,&f,&d);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf", i, l,c,f,d);
    return 0;
}
