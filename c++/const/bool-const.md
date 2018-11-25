#### 介绍bool类型，以及const关键字在c,c++中的区别
> 1.bool 类型
> 2.const
>time：2018.11.20

***

* 1 bool类型

  +  在c中
     - 没有bool类型
     ![](assets/markdown-img-paste-20181120213502782.png)

  +  在c++中
     - 有bool类型
     ![](assets/markdown-img-paste-2018112021375847.png)

  + 在c中实现BOOL，并观察与c++中的区别
    - 区别仅仅在占用的大小方面
    ![](assets/markdown-img-paste-20181120214639359.png)

***

* 2 const关键字
  + const常量必须赋初值
  ![](assets/markdown-img-paste-20181120215355582.png)

  + const常量值定义后不能改变
  ![](assets/markdown-img-paste-20181120215705825.png)

  + 通过指针可以修改const常量的值，得让编译器不知道常量的值
  ![](assets/markdown-img-paste-20181120220232909.png)

  + const在C语言中的表示是不可以修改值的变量
  ![](assets/markdown-img-paste-20181120220624733.png)
 ***
