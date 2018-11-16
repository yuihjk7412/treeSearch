struct tree
{
	int data;
	struct tree * ltree;
	struct tree * rtree;
};
#pragma once
class treeClass
{
public:
	treeClass();
	~treeClass();
	struct tree * createTree(struct tree * r);
	void preSearch(struct tree * r);
	void midSearch(struct tree * r);
	void postSearch(struct tree * r);
	void levelSearch(struct tree * r);
	void preSearchNotRecursive(struct tree * r);
	void midSearchNotRecursive(struct tree * r);
};
