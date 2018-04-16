#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "LinkedListOfInts.h"


class Test {

public:

        /**
         * Constructor
         **/
        Test();


        /**
         * runs the tests.
         **/
        void test();

 private: 

        /**
        * creates a generic list to run tests on
        **/
        LinkedListOfInts genericTestList();

        /**
        * Tests that an emypt list is created.
        **/
        void test1();

        /**
        * Tests the isEmpty() method
        **/
        void test2();

        /**
        * Tests that addFront adds one value to the list.
        **/
        void test3();

        /**
        * Tests that addBack adds one value to the list.
        **/
        void test4();

        /**
        * Tests the search method.
        **/
        void test5();

        /**
        * Tests if removeBack subtracts 1 from the size of the linked list.
        **/        
       void test6();

        /**
        * Tests if removeBack removes the node in the back of the list
        **/  
       void test7();        

};
#endif