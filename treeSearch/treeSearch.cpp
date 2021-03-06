// treeSearch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "treeClass.h"

int main()
{
	treeClass tree1;
	struct tree * tree1root = (struct tree *)malloc(sizeof(struct tree));
	std::cout << "root node";
	tree1root = tree1.createTree(tree1root);
	std::cout << "前序遍历递归算法：";
	tree1.preSearch(tree1root);
	std::cout << "\n";
	std::cout << "前序遍历非递归算法：";
	tree1.preSearchNotRecursive(tree1root);
	std::cout << "\n";
	std::cout << "中序遍历递归算法：";
	tree1.midSearch(tree1root);
	std::cout << "\n";
	std::cout << "中序遍历非递归算法：";
	tree1.midSearchNotRecursive(tree1root);
	std::cout << "\n";
	std::cout << "后序遍历递归算法：";
	tree1.postSearch(tree1root);
	std::cout << "\n";
	std::cout << "层次遍历递归算法：";
	tree1.levelSearch(tree1root);
    std::cout << "Done!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
