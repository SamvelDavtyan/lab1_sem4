#pragma once
#include "List.h"
#include <iostream>

enum Color { BLACK, RED };

template<class key_type, class data_type>
class Tree_Node
{
public:

	~Tree_Node() 
	{
		Clear();
	}

	void left_rorate(Tree_Node* x);
	void right_rorate(Tree_Node* y);

	// INSERT
	void Insert(key_type key, data_type data);
	void Insert_FIXUP(Tree_Node* node);

	// REMOVE
	void Remove(key_type key);
	void Transplant(Tree_Node* u, Tree_Node* v);
	Tree_Node* Tree_Minimum(Tree_Node* node);
	void Delete_FIXUP(Tree_Node* node);

	// FIND
	data_type Find(key_type key);

	// CLEAR
	void Clear();

	// GET KEYS
	void Get_Keys(Tree_Node* node, List<key_type>* keys);

	// GET VALUES
	void Get_Values(Tree_Node* node, List<data_type>* values);

	// PRINT
	void Print(Tree_Node* node);

	Tree_Node* Get_Root() { return this->root; }
	Tree_Node* Get_Nil() { return this->nil; }

	void Nil_Creating()
	{
		this->nil = new Tree_Node;
		this->nil->color = BLACK;
		this->root = nil;
	}
	
private:
	Tree_Node* root;
	Tree_Node* parent;
	Tree_Node* right;
	Tree_Node* left;
	Tree_Node* nil;
	Color color;
	data_type data;
	key_type key;
};

#include "RB-Tree.inl"