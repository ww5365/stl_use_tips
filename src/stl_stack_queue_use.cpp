/*
 * stl_stack_queue_use.cpp
 *
 *  Created on: Jan 15, 2018
 *      Author: wangwei69
 */

#include "test_main.h"
#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

void stl_stack_queue_use_test(){

    //栈 队列 使用
    std::stack<int> sta;
    std::queue<int>* que; //默认底层容器：deque
    std::queue<int, list<int> >*que2; //使用list

    que = new queue<int>();
    que2 = new queue<int,list<int> >;

    que->push(1);
    que->push(2);

    while(!que->empty()){
        cout << "queue element: " << que->front() << endl;
        que->pop();
    }

    delete que;
    delete que2;


}




