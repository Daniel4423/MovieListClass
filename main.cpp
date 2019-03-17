

/* 
 * File:   main.cpp
 * Author: Dan
 *
 * Created on March 17, 2019, 1:58 PM
 */

#include <cstdlib>
#include<iostream>
#include"Movies.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Movies movieList;
    movieList.AskForTopTitles();
    movieList.Print();
    
    return 0;
}

