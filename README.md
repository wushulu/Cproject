# my_c_project
【这是一个C语言指针、结构体、函数指针、指针函数等操作】<br>
## 配置视频和显示效果
 配置仿真步骤如[配置视频](https://www.youtube.com/watch?v=DIw02CaEusY&t=857s)<br>
 [国内镜像](https://github.com/wushulu/Cproject/blob/master/Set%20Up%20C%2B%2B%20Development%20With%20Visual%20Studio%20Code%20on%20Windows%2010%20(VS%20Code).mp4)
![image](https://github.com/wushulu/Cproject/blob/master/%E5%9B%BE%E7%89%87/%E9%85%8D%E7%BD%AE%E5%AE%8C%E6%88%90.png)<br>
## 文件路径
根目录文件使用
```cpp
#include""
```
而不是
```cpp
#include<>
```

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
```
## 指针的基础知识
   ```c
   int *p ,a;
   p=&a;
   (*p)++;
   ++*p;
   *p++;
  
   ```
   其中p 是指针变量 ，p=&a 代表P指向a的地址，*p是a的值。<br>
   (*p)++ 等同于 ++*p 运算后同样指向a, 但是*p++ 指的是将p的值加1 ，运算后p的值不指向a了。
### 积分定理的应用
  ```c
  float function1(float f);//定义积分函数
  short N;//设计多次积分N
  float h;//定义h=(a-b)/N 积分的小区间
  s=(function1(a)+function1(b))/2; //计算中间值的积分 第一个值
  for (i=i;i<N;i++)
  {
    s+=function1(a+i*h);//计算单个积分长度总和
  }
  return s*h;//计算出长度*H 等于面积 即积分
  ```
  


