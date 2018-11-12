# my_c_project
【这是一个C语言指针、结构体、函数指针、指针函数等操作】<br>
## 配置视频和显示效果
 [配置视频](https://www.youtube.com/watch?v=DIw02CaEusY&t=857s)
![image](https://github.com/wushulu/Cproject/blob/master/%E5%9B%BE%E7%89%87/%E9%85%8D%E7%BD%AE%E5%AE%8C%E6%88%90.png)<br>

## 仿真
仿真断点单步运行
![image](https://github.com/wushulu/Cproject/blob/master/%E5%9B%BE%E7%89%87/%E4%BB%BF%E7%9C%9F.png)
## 指针函数
类型标识符    *函数名(参数表)

    int *f(x，y);
    说明：一般返回的是指针（地址）
    使用方法：指针函数赋值给指针（*p=*f(x,y))
    调用：访问指针 *P完成调用
```cpp
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
```
## 函数指针
返回值类型 ( * 指针变量名) ([形参列表]);

      int (*f)(x，y);
      说明：可以直接将函数赋值给指针
      调用方法：先将函数赋值给函数指针  再调用 f(x,y);
```cpp
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
```SSS


