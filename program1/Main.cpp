#include <iostream>
#include "RB-Tree.h"
#include "List.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Tree_Node<int, string> tree;
	List<int> keys_list;
	List<string> values_list;
	tree.Nil_Creating();
	int keys[3] = { 9,10,11 };
	string values[3] = { "nine","ten" ,"eleven" };
	for (size_t i = 0; i < 3; i++)
		tree.Insert(keys[i], values[i]);
	tree.Insert(12, "twelve");
	tree.Insert(20, "twenty");
	tree.Insert(1, "one");
	tree.Insert(2, "two");
	//tree.Remove(10);
	cout << "Ключи красно-черного дерева: ";
	tree.Get_Keys(tree.Get_Root(), &keys_list);
	keys_list.print_to_console();
	cout << endl;
	cout << "Информация красно-черного дерева: ";
	tree.Get_Values(tree.Get_Root(), &values_list);
	values_list.print_to_console();
	cout << endl;
	cout << "Красно-черное дерево: " << endl;
	tree.Print(tree.Get_Root());
}