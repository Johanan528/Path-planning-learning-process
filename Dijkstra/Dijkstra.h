// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

/************************************************************/
/*                程序作者：Willam                          */
/*                程序完成时间：2017/3/8                    */
/*                有任何问题请联系：2930526477@qq.com       */
/************************************************************/
//@尽量写出完美的程序
//https://blog.csdn.net/qq_35644234/article/details/60870719
#pragma once
//#pragma once是一个比较常用的C/C++杂注，
//只要在头文件的最开始加入这条杂注，
//就能够保证头文件只被编译一次。

#include<iostream>
#include<string>
using namespace std;

/*
本程序是使用Dijkstra算法实现求解最短路径的问题
采用的邻接矩阵来存储图
*/
//记录起点到每个顶点的最短路径的信息
struct Dis {
	string path;
	int value;
	bool visit;
	
};

class Graph_DG {
private:
	int vexnum;   //图的顶点个数
	int edge;     //图的边数
	int **arc;   //邻接矩阵      二维数组？
	Dis * dis;   //记录各个顶点最短路径的信息      数组？在后面引用这个类的时候没有直接定义arc和dis
public:
	//构造函数
	Graph_DG(int vexnum, int edge);
	//析构函数
	~Graph_DG();  //析构函数的作用类似于释放内存？
	// 判断我们每次输入的的边的信息是否合法
	//顶点从1开始编号
	bool check_edge_value(int start, int end, int weight);
	//创建图
	void createGraph();
	//打印邻接矩阵
	void print();
	//求最短路径
	void Dijkstra(int begin);
	//打印最短路径
	void print_path(int);
};
