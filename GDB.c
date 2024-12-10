#include <stdio.h>
void fun4()
{
    int fun4var = 40;
    printf("Value of fun4 var is %d\n", fun4var);
}
void fun3()

{
    int fun3var = 30;
    printf("Value of fun3 var is %d\n", fun3var);
    fun4();
}
void fun2()
{
    int fun2var = 20;
    printf("Value of fun2 var is %d\n", fun2var);
    fun3();
}
void fun1()
{
    int fun1var = 10;
    printf("Value of fun1 var is %d\n", fun1var);
    fun2();
}

int main()
{
    int mainvar = 100;
    printf("Value of main var is %d\n", mainvar);
    fun1();
}