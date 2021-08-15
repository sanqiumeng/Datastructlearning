# python学习笔记

## 一.第一周

### 1.试试

绘制五角星

```python
from turtle import *
color ('red', 'red')
begin_fill()
for i in range (5):
    fd(200)
    rt(144)

end_fill()
# my_input = input()
```

温度转化

```python
#TempConvert.py
TempStr=input("请输入带有符号的温度值：")
if TempStr[-1] in ['F','f']:
    C=(eval(TempStr[0:-1])-32)/1.8
    print("转化后的温度是{:.2f}C".format(C))
elif TempStr[-1] in ['C','c']:
    F=1.8*eval(TempStr[0:-1])+32
    print("转化后的温度是{:.2f}F".format(F))
else:print("输入格式错误")
```

### 2.基础语法

#### i.注释方式

1）.以#开头的单行注释

2）.以‘’‘  开头  ’‘’结尾的多行注释

#### ii.命名与保留字

1).命名规则：大小写字母、数字、下划线、汉字等字符及组合

2).命名注意：大小写敏感，首字符不能是数字，不与保留字相同

![image-20210806093952076](C:\Users\徐伊\AppData\Roaming\Typora\typora-user-images\image-20210806093952076.png)

### 3.数据类型

1).字符串：由一对单引号或双引号表示

-字符串是字符的有序序列，可以对其中的字符进行索引

索引：返回字符串中单个字符  <字符串>[M]

切片：返回字符串中一段字符子串  <字符串>[M:N]

2).数字类型：整数和浮点数

3).列表类型：由0个或多个数据组成的有序序列，用[ ]表示用，分隔各元素

### 4.语句与函数

1）赋值语句：给变量赋予新的数值，赋值语句右侧的数据类型同时作用于变量

2）分支语句：由判断条件决定程序运行方向的语句

if /elif/else  判断条件 <u>：</u> 如果判断条件为true执行：后面的语句

函数：根据输入参数产生不同输出的功能过程

函数名（参数）

变量=input（提示信息的字符串）

 print（ ）函数格式化：

例.   print("转化后的温度是{:.2f}C".format(C))

eval()函数：去掉参数最外引号并执行余下语句

## 二.第二周

### 1.绘制蟒蛇

```python
#pythondraw.py
import turtle
turtle.setup(650,350,200,200)
turtle.penup()
turtle.fd(-250)
turtle.pendown()
turtle.pensize(25)
turtle.pencolor("purple")
turtle.seth(-40)
for i in range(4):
    turtle.circle(40,80)
    turtle.circle(-40,80)
turtle.circle(40,80/2)
turtle.fd(40)
turtle.circle(16,180)
turtle.fd(40*2/3)
turtle.done()
```

2.turtle库

## 三.第三周

### 1.数字类型及操作

#### 1）整数类型

$$
pow(x,y):\exp_x y
$$

整数类型：十进制：101，99，-121

二进制：以0B或者0b开头，0B101

八进制：以0O或0o开头，0O123

十六进制：以0X或0x开头，0X9a

#### 2）浮点数类型

$$
round(x,d):对x四舍五入，截取d位小数
$$

$$
<a>e<b>:a*\exp_10 b
$$

#### 3)复数类型

z=<u>1.23e-4</u>+<u>5.6e+89</u>j

z.real:获取实数部分

z.imag：获取虚数部分

#### 4）数值运算操作符

+、-、*、%与C语言一致

x/y ：产生浮点数类型结果，

x//y：整数除，10//3结果为3

x**y:幂运算，x的y次幂

#### 5）数值运算函数

abs(x)：对x取绝对值

divmod(x,y)：商余，同时输出商和余数

divmod(10,3)结果为(3,1)

pow(x,y[,z]):(x**y)%z

round(x[,d]):对x四舍五入，截取d位小数

int(x)：将x变成整数，舍弃小数部分

int(123.45)结果为123  ； int("123") 结果为123

