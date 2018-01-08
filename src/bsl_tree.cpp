//============================================================================
// Name        : cpp_test.cpp
// Author      : ww
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include  "test_main.h"
#include <set>

using namespace std;

//定义二叉树的节点的数据结构

template<typename T>
struct BiTNode{
    T data;
    BiTNode<T> *left,*right;
};

//定义模板类型别名，不能在struct之前，直接用typedef
template<typename T>
using BiTNodePtr = BiTNode<T>* ; //c++ 定义模板类的别名。

template<typename T>
class BiTree {
private:
    BiTNodePtr<T> root;//二叉排序树的树根

public:
    BiTree(){root = NULL;}

    //使用vector数组中的元素的构造一颗二叉排序树数据；
    BiTree(vector<T> vec){
        root = NULL;
    }

    BiTNodePtr<T> getRoot(){
        return root;
    }

    /*
     * 二叉排序树的查找:递归实现
     *
     * 从位置begin开始，查找key值；
     * (*pos)保存key值对应的位置的指针；
     * parent保存对应key值的父节点指针；
     * 找到返回TRUE；否则返回FALSE；
     */
    bool search(BiTNodePtr<T> begin, T key, BiTNodePtr<T> *pos, BiTNodePtr<T> parent) const{

        cout << "enter into function search!" <<endl;
        if (!begin){
            *pos = NULL;
            parent = NULL;
            return false;
        }

        if (begin->data == key){

            *pos = begin;
            return true;
        }else if (begin->data < key){
            //到左子树进行搜索
            return this->search(begin->left, key, pos, begin);
        }else{
            return this->search(begin->right, key ,pos, begin);
        }

    }//end search
};


int bsl_tree_test() {
	cout << "info retrive" << endl; // prints info retrive

	BiTree<int> test;
	BiTNodePtr<int> *pos = NULL;

	//test.search(test.getRoot(), 5, pos, NULL);

	int arr[] = {2,5,1,7,4};

	set<int> test_set;
	test_set.insert(arr,arr+5);

	cout << *test_set.lower_bound(3) <<endl;
	cout << *test_set.upper_bound(3) <<endl;

	cout << "over!" << endl;


	return 0;
}
