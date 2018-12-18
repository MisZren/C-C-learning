#### 数据结构概论和动态数组vector
> 1.概论(H16)
> 2.数据结构(逻辑结构)分类(H31)
> 3.存储结构(H45)

> 4.动态数组(H53)
>> 4.1.基本概念(H56)
>> 4.2.访问方式(H70)
>> 4.3.成员函数介绍(H145)
>> 4.4.迭代器(H175)

>time：2018.12.17

***

* 1 数据结构
  + 数据 + 算法 = 程序
  + 什么是数据：
    - 很多不同的信息
  + 相互之间存在一种或多种特定关系的数据元素的集合。
    数据元素直接的关系称为结构。
  + 四种基本结构：
    - 集合
    - 线性结构
    - 树形结构
    - 图状结构
  + 数据的存储及操作(增删改查，排序)。

***

* 2 数据结构(逻辑结构)分类
  + 线性结构
    - 线性表
    - 栈
    - 队列，双队列
    - 数组
    - 字符串
  + 非线性结构
    - 数
    - 二叉树
    - 图

***

* 3 存储结构
  + 顺序存储结构
    - 数组
  + 非顺序存储结构
    - 链表

***

* 4 动态数组

***
* 4.1 基本概念
  + std::vector 是封装动态数组的顺序容器
    std::pmr::vector 是使用多态分配器的模板别名(暂不讨论)

  + 因为是元素相继存储，所以不仅可以用迭代器，还能用指向元素的常规指针访问元素。
    ![](assets/markdown-img-paste-2018083020422469.png)

  + 成员类型，主要学习下iterator
    ![](assets/markdown-img-paste-20180830204553228.png)

    - 简单介绍
      ![](assets/markdown-img-paste-20180830204732749.png)
***

* 4.2 访问方式
  + 下标访问

  ```c++
  for (size_t nCount = 0; nCount < v.size(); nCount++)
  {
    cout << v[nCount] << " ";
  }
  ```
    ![](assets/markdown-img-paste-2018083100570353.png)

  + 迭代器

    ```c++
    for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++)
    {
        cout << *itbegin << endl;
    }
    ```
      ![](assets/markdown-img-paste-20180831015747824.png)

  + 回调函数
    - 头文件:algorithm
    ![](assets/markdown-img-paste-20180831022106948.png)

    ```c++
    cout << "myvector contains:" << endl;
    auto print = [](const int& n){ std::cout << " " << n; };
    for_each(v.begin(), v.end(), print);
    ```
    ![](assets/markdown-img-paste-20180831021921458.png)

  + 基于范围的for循环
    - 在范围上执行for循环
    - 语法
      ![](assets/markdown-img-paste-20180831022641204.png)

    -语法的解释
     ```c++
     //c++17前
     {
         auto && __range = 范围表达式;
         for (auto __begin = 首表达式, __end = 尾表达式; __begin != __end; ++__begin)
         {
             范围声明 = *__begin;
             循环语句
         }
     }
     ```

     ```c++
     //c++17后
     {
         初始化语句
         auto && __range = 范围表达式;
         auto __begin = 首表达式;
         auto __end = 尾表达式;
         for(; __begin != __end; ++__begin)
         {
             范围声明 = *__begin;
             循环语句
         }
     }
     ```

     ```c++
     for (int i : v)
    {
    cout << i << " ";
    }
     ```

     ![](assets/markdown-img-paste-20180831024236852.png)
***

* 4.3 成员函数介绍

  + std::vector::size()
  ![](assets/markdown-img-paste-20180831005612316.png)

    - 实际就是指向容器末元素后一元素的迭代器 - 指向容器首元素的迭代器
  ![](assets/markdown-img-paste-20180831013027982.png)

  + std::vector::back()
    - 返回到容器中最后一个元素的引用
    - 在空容器中对back()的调用是未定义的
    ![](assets/markdown-img-paste-20180831014534160.png)

    - 对于容器c

          return c.back();<==>{auto tmp = c.end(); --tmp; return *tmp}
      ![](assets/markdown-img-paste-20180831014802288.png)

    ```c++
    vector<int>::iterator p = v.end();
    cout << v.back() << endl;
    cout << *(--p) << endl;
    ```

  + std::vector::end, std::vector::begin
    - 返回值：指向后随最后元素的迭代器
    ![](assets/markdown-img-paste-20180831015133744.png)

***

* 4.4 迭代器
  + 迭代器的分类依据并不是迭代器的类型，而是迭代器所支持的操作。换句话说，某个类型只要支持相应的操作，就可以作为迭代器使用
    - 例如：指针支持所有随机访问迭代器操作的要求，于是任何需要随机访问迭代器的地方都可以使用指针
    ![](assets/markdown-img-paste-20180831010708787.png)
