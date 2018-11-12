#include<iostream>
#include<stdio.h>


void (*functon_point)(void );
void change(void(*pn)(void) );
void dsply_data(void);
void drect_funcation();
char data[]={0x00,0x01,0x03,0x04,0x05};
int main()
{
    int a,b;
    char *pa;
    a=10,
    b=a+10;
    change(dsply_data); //将函数传递给函数指针
    functon_point();    //调用函数指针
    functon_point=drect_funcation; //函数指针赋值到入口参数
    functon_point();               //调用函数指针
    std::cout <<"hello"<< std::endl;
    //system("pause");
}

void change(void(*pn)(void) )//入口函数类型一致和函数指针一致
{
  functon_point=pn;

}
void dsply_data(void)
{
  printf("this is funcation point\r");
}

void drect_funcation()
{
  printf("data drect to funcaton\r");
}