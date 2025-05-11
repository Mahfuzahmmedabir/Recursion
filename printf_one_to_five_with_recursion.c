#include<stdio.h>

void func(int i ){
    if(i == 6){
        return;
    }
    printf("%d\n", i);
    func(i+1);
}
void five_to_one(int x){
   if(x == 0){
    return;
   }
   printf("%d \n", x);
   five_to_one(x-1);
}

int main()
{
   int i = 1;
   func(i);
   printf("-----\n");
   int x = 5;
   five_to_one(x);
   return 0;
}