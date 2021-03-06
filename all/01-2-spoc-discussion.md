# lec1: 操作系统概述

---

## **提前准备**

（请在上课前完成）

* 完成lec1的视频学习和提交对应的在线练习
* git pull ucore\_os\_lab, ucore\_os\_docs, os\_tutorial\_lab, os\_course\_exercises in github repos。这样可以在本机上完成课堂练习。
* 知道OS课程的入口网址，会使用在线视频平台，在线练习/实验平台，在线提问平台\(piazza\)
  * [http://os.cs.tsinghua.edu.cn/oscourse/OS2019spring](http://os.cs.tsinghua.edu.cn/oscourse/OS2019spring)


* 会使用linux shell命令，如ls, rm, mkdir, cat, less, more, gcc等，也会使用linux系统的基本操作。
* 在piazza上就学习中不理解问题进行提问。



# 思考题

## 填空题

* 当前常见的操作系统主要用__c__编程语言编写。
* "Operating system"这个单词起源于__Operater__ 。
* 在计算机系统中，控制和管理__硬件__ 、有效地组织__软件__运行的系统软件称作__操作系统__ 。
* 允许多用户将若干个作业提交给计算机系统集中处理的操作系统称为__批处理__操作系统
* 你了解的当前世界上使用最多的操作系统是__intel 80x86系列 window系列__ 。
* 应用程序通过__系统调用__接口获得操作系统的服务。
* 现代操作系统的特征包括__并发__ ， \_\_共享\_\_  ， \_\_虚拟\_\_ ，\_\_异步\_\_。
* 操作系统内核的架构包括__分层结构__ ， \_\_微内核结构\_\_ ， \_\_外核结构\_\_ 。

## 问答题

- 请总结你认为操作系统应该具有的特征有什么？并对其特征进行简要阐述。
</br>&emsp;我认为操作系统应该具有：
</br>&emsp;①可靠性/稳定性
</br>&emsp;②高效性，因为操作系统是一切软件的基础，所以必须稳定高效。
</br>&emsp;③安全性
</br>&emsp;④协同性，这是网络兴起和电子产品普及后的必然需求。
</br>&emsp;⑤适应性，现在各种新硬件层出不穷，能够适应各种不同的硬件也是必然的需求。

- 为什么现在的操作系统基本上用C语言来实现？为什么没有人用python，java来实现操作系统？
</br>&emsp;①编写操作系统需要和底层硬件进行交互，所以必须和底层交互好。
</br>&emsp;②因为操作系统编程任务量大，所以语言必须方便理解，有一定普及率。
</br>&emsp;③操作系统的需求（稳定性 高效性等）要求语言本身有着良好的效率。
</br>&emsp;④历史因素，c出现早，早期系统就是用c语言编写的，所以参考资料和语言普及率都相当不错。
</br>&emsp;⑤c语言是现在为止各项因素最符合操作系统编写需求的。
</br>&emsp;⑥java和python等高级语言本身有着各种各样的硬伤导致它们不适合编写操作系统（和底层交互不好，效率较低等）

---

## 可选练习题

---

- 请分析并理解[v9\-computer](https://github.com/chyyuu/os_tutorial_lab/blob/master/v9_computer/docs/v9_computer.md)以及模拟v9\-computer的em.c。理解：在v9\-computer中如何实现时钟中断的；v9 computer的CPU指令，关键变量描述有误或不全的情况；在v9\-computer中的跳转相关操作是如何实现的；在v9\-computer中如何设计相应指令，可有效实现函数调用与返回；OS程序被加载到内存的哪个位置,其堆栈是如何设置的；在v9\-computer中如何完成一次内存地址的读写的；在v9\-computer中如何实现分页机制。


- 请编写一个小程序，在v9-cpu下，能够输出字符


- 输入的字符并输出你输入的字符


- 请编写一个小程序，在v9-cpu下，能够产生各种异常/中断


- 请编写一个小程序，在v9-cpu下，能够统计并显示内存大小



- 请分析并理解[RISC-V CPU](http://www.riscvbook.com/chinese/)以及会使用模拟RISC\-V(简称RV)的qemu工具。理解：RV的特权指令，CSR寄存器和在RV中如何实现时钟中断和IO操作；OS程序如何被加载运行的；在RV中如何实现分页机制。
  - 请编写一个小程序，在RV下，能够输出字符
  - 输入的字符并输出你输入的字符
  - 请编写一个小程序，在RV下，能够产生各种异常/中断
  - 请编写一个小程序，在RV下，能够统计并显示内存大小
