/*
 * two_dimension_array.cpp
 *
 *  Created on: Jan 5, 2018
 *      Author: wangwei69
 */

#include "test_main.h"
using namespace std;

/*
 * 二维数组：不同定义和实现方式
 *
 */

int two_dimension_array_test(){


    cout << "test two dimension array" << endl;

    const int SIZE = 3;
    //定义二维数组并全部初始为1，栈中
    int test1[SIZE][SIZE] = {1};

    //动态分配的二维数组行，存放int*类型数据
    int **test2 = new int*[SIZE];

    for (int i = 0; i < SIZE; i++){
        //动态分配二维数组的列，test2[i]指向数组首地址，数组存放int；
        //未初始化里面数据
        test2[i] = new int[SIZE];
    }


    //使用vector定义二维数组，初始化为2
    vector<vector<int> > test3(SIZE,vector<int>(SIZE,2));

    for (int i =0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            cout << test1[i][j] << " ";
        }
        cout << endl;
    }


    for (int i =0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            cout << test2[i][j] << " ";
        }
        cout << endl;
    }


    //动态数组使用完了一定要释放
    for(int i = 0; i < SIZE; i++){
        delete []test2[i]; //new了几次，delete几次；释放数组前面加[]
    }
    delete []test2;

    for (int i = 0; i < test3.size(); i++){
        for (int j = 0; j < test3[i].size(); j++){
            cout << test3[i][j] << " ";
        }
        cout << endl;
    }




}
