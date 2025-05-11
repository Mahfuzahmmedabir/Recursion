#include<stdio.h>

void func1(){
    printf("func1\n");
}void func2(){
    printf("func2\n");
    func1();
}void func3(){
    printf("func3\n");
    func2();
}void func4(){
    printf("func4\n");
    func3();
}

int main()
{
  
    func4();
   return 0;
}