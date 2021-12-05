#include <stdio.h>
int j; // file scope begins

void f(int i) { //block scope of i begins
    int j = 1;  //block scope of j begins
    i++;        //i refers to the function parameter
    for (int i = 0; i < 2; i++) {   //block scope of loop-local i begins
      int j = 2;                //block scope of inner j begins; hides outer 
      printf("%d\n",j);         //inner j is in scope, prints 2
    }
    printf("%d\n", j);          //outer j is in scope, prints 1
}

int main(void) {
    f(5);
}
void g(int j);