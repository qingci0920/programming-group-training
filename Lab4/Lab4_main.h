#pragma once
#include "pch.h"
#include "Lab4_view.h"
#include "Lab4_sort.h"
#include "Lab4_loadfile.h"
#include "Lab4_data.h"
#include "Lab4_conf.h"
#include "Lab4_call.h"
#define menu "李怡的实验4程序：\n\t\
1. 调用实验3程序生成记录文件\n\t\
2. 读取指定数据记录文件（二维数组存储方式）\n\t\
3. 读取指定数据记录文件（结构体数组存储方式）\n\t\
4. 读取指定数据记录文件（指针数组存储方式）\n\t\
5. 读取指定数据记录文件（链表存储方式）\n\t\
6. 调用实验3生成数据记录文件，同时读取数据记录文件（二维数组方式存储）\n\t\
7. 调用实验3生成数据记录文件，同时读取数据记录文件（结构体数组方式存储）\n\t\
8. 调用实验3生成数据记录文件，同时读取数据记录文件（指针数组方式存储）\n\t\
9. 调用实验3生成数据记录文件，同时读取数据记录文件（链表方式存储）\n\t\
10. 调用实验3生成数据记录文件，同时读取数据记录文件并排序（二维数组方式存储）\n\t\
11. 调用实验3生成数据记录文件，同时读取数据记录文件并排序（结构体数组方式存储）\n\t\
12. 调用实验3生成数据记录文件，同时读取数据记录文件并排序（指针数组方式存储）\n\t\
13. 调用实验3生成数据记录文件，同时读取数据记录文件并排序（链表方式存储、冒泡排序）\n\t\
14. 调用实验3生成数据记录文件，同时读取数据记录文件并排序（链表方式存储、快速排序）\n\t\
15. 重新设置配置参数值\n\t\
0. 退出\n"
int run(int argc, char* argv[]);
int sysCheck();
void sysInit();