/*
 * stl_set_use.cpp
 *
 *  Created on: Jan 12, 2018
 *      Author: wangwei69
 */

#include <unordered_set> //主要查询来用
#include <iostream>

using namespace std;


void stl_set_use_test(){

    //港澳地区的cityid
    int cityid[] = {
            2911,
            2912,
            2913,
            2914,
            2915,
            2916,
            2917,
            2918,
            2919,
            2920,
            2921,
            2922,
            2923,
            2924,
            2925,
            2926,
            2927,
            2928,
            2929,
            2930,
            2931,
            2932,
            2933,
            2934
    };

    std::unordered_set<int> hk_mc_city(cityid, cityid+23);

    auto it = hk_mc_city.find(2911);

    if (it != hk_mc_city.end()){
        std::cout << "find it " <<std::endl;
    }else{
        cout << "not find it " << endl;
    }




}

