#include<iostream>
#include<stdio.h>


char *point_funcation(char *p,char n);//使用函数指针调用任意数值值
char data[]={0x00,0x01,0x03,0x04,0x05};
int main()
{
    int a,b;
    char *pa;
    a=10,
    b=a+10;
   // printf("%d",b);
   *pa=*point_funcation(data,3);
    printf("%d\n",*pa);
    std::cout <<"hello"<< std::endl;
    //system("pause");
}

char *point_funcation(char *p,char n)
{
  char *pnt;
  pnt=(p+n);
  return (pnt);

}