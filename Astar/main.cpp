
#include <iostream>
#include "Astar.h"
using namespace std;

int main()
{
	//��ʼ����ͼ���ö�ά���������ͼ��1��ʾ�ϰ��0��ʾ��ͨ
	vector<vector<int>> maze = {
		{1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,1,1,0,1,0,0,0,0,1},
		{1,0,0,1,1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,1,1,1},
		{1,1,1,0,0,0,0,0,1,1,0,1},
		{1,1,0,1,0,0,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,1,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1}
	};
	Astar astar;
	astar.InitAstar(maze);

	//������ʼ�ͽ�����
	Point start(1, 1);
	Point end(6, 10);
	//A*�㷨��Ѱ·��
	list<Point *> path = astar.GetPath(start, end, false);
	//��ӡ
	for (auto &p : path)
		cout << '(' << p->x << ',' << p->y << ')' << endl;

	system("pause");
	return 0;
}
//����ʼ�����ӵ� "�����б�"
//do
//{
//	Ѱ�ҿ����б���Fֵ��͵ĸ���, ���ǳ���Ϊ��ǰ��.
//		�����л����ر��б�.
//		�Ե�ǰ�����ڵ�8���е�ÿһ��
//		if (������ͨ�� || �Ѿ��� "�ر��б�" ��)
//		{
//			ʲôҲ����.
//		}
//	if (�����ڿ����б���)
//	{
//		�������ӽ� "�����б�", �ѵ�ǰ����Ϊ��һ��ĸ��ڵ�, ������һ��� FGH
//			if (���Ѿ��ڿ����б���)
//			{
//				if (��GֵΪ�ο�����µ�·���Ƿ����, ���͵�Gֵ��ζ�Ÿ��õ�·��)
//				{
//					����һ��ĸ��ڵ�ĳɵ�ǰ��, �������¼�����һ��� GF ֵ.
//				}
//			} while (Ŀ����Ѿ��� "�����б�", ��ʱ��·�����ҵ�)
//				��������б��Ѿ�����, ˵��·��������.
//
//				����Ŀ���ʼ, ����ÿһ��ĸ��ڵ��ƶ�ֱ���ص���ʼ��, �����·��.
// ctrl �� k + ctrl+c ��ȫ��ע�͡�
				