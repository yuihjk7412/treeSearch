#include "pch.h"
#include "treeClass.h"
#include <malloc.h>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;


treeClass::treeClass()
{
}


treeClass::~treeClass()
{
}

tree * treeClass::createTree(tree * r)
{
	r = (struct tree *)malloc(sizeof(struct tree));
	cin >> r->data;
	if (!r->data)
	{
		return r;
	}
	else
	{
		cout << r->data << " left child is";
		r->ltree = createTree(r->ltree);
		cout << r->data << " right child is";
		r->rtree = createTree(r->rtree);
	}
	return r;
}

void treeClass::preSearch(tree * r)
{
	if (!r->data)
	{
		return;
	}
	cout << r->data << "\t";
	preSearch(r->ltree);
	preSearch(r->rtree);
}

void treeClass::midSearch(tree * r)
{
	if (!r->data)
	{
		return;
	}
	midSearch(r->ltree);
	cout << r->data << "\t";	
	midSearch(r->rtree);
}

void treeClass::postSearch(tree * r)
{
	if (!r->data)
	{
		return;
	}
	postSearch(r->ltree);
	postSearch(r->rtree);
	cout << r->data << "\t";
}

void treeClass::levelSearch(tree * r)
{
	queue <struct tree *> q;
	q.push(r);
	while (!q.empty())
	{
		r = q.front();
		cout << r->data << "\t";
		q.pop();
		if (r->ltree->data)
		{
			q.push(r->ltree);
		}
		if (r->rtree->data)
		{
			q.push(r->rtree);
		}
	}
}

void treeClass::preSearchNotRecursive(tree * r)
{
	stack <struct tree *> q;
	while (!q.empty() || r->data)
	{
		if (r->data)
		{
			cout << r->data << "\t";
			q.push(r->rtree);
			r = r->ltree;			
		}
		else
		{
			r = q.top();
			q.pop();
		}
	}
}

void treeClass::midSearchNotRecursive(tree * r)
{
	stack <struct tree *> q;
	while (!q.empty() || r->data)
	{
		if (r->data)
		{			
			q.push(r);
			r = r->ltree;
		}
		else
		{
			r = q.top();
			q.pop();
			cout << r->data << "\t";
			r = r->rtree;
		}
	}
}



