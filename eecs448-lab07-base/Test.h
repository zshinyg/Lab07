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
        * Tests that an emypt list is created.
        **/
        void test1();

        /**
        * Tests if is empty returns true when the list is empty
        **/
        void test2();

        /**
        * Tests that addFront adds one value to the list.
        **/
        void test3();

        /**
        * Tests that addFront adds one value to the front of the list.
        **/
        void test4();

        /**
        * Tests that addBack adds one value to the back of the list.
        **/
        void test5();

        /**
        * Tests that addBack adds one value to the list.
        **/
        void test6();

        /**
        * Tests the search method.
        **/
        void test7();

        /**
        * Tests if removeBack subtracts 1 from the size of the linked list.
        **/
        void test8();

        /**
        * Tests if removeBack removes the node in the back of the list
        **/
        void test9();

        /**
        * Tests if removeFront decrements the value of size.
        **/
        void test10();

        /**
        * Search returns false if the value does not exist.
        **/
        void test11();

        /**
        * Search returns false if the value does not exist.
        **/
        void test12();      

        /**
        * Test the size method after using addFront multiple times.
        **/
        void test13();

        /**
        * Test the size method after using addBack multiple times.
        **/
        void test14();

        /**
        * removeBack returns false when nothing is removed
        **/
        void test15();

        /**
         * removeBack returns true when a value is removed
         * */
        void test16();

        /**
        * removeFront returns false when nothing is removed
        **/
        void test17();

        /**
         * removeFront returns true when a value is removed
         * */
        void test18();

        /**
         * removeFront() removes the front value
         * */
        void test19();
};
#endif
