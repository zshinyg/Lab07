#include "Test.h"



Test::Test() {

}


void Test::test(){
    std::cout << "LAB 07: LINKED LIST TESTING \nBY: COLTYN GATTON" << std::endl;
    std::cout << "==============================" << std::endl;

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();  
    test11();
    test12();
    test13();
    test14();

    std::cout << "==============================" << std::endl;
}

void Test::test1(){
    LinkedListOfInts testList;
     if(testList.size() == 0){
         std::cout << "TEST 1: size of empty list is zero: PASSED" << std::endl;
     } else{
         std::cout << "TEST 1: size of empty list is zero: FAILED" << std::endl;
     }
}

void Test::test2(){
    LinkedListOfInts testList;
    if(testList.isEmpty() == true){
        std::cout << "TEST 2: isEmpty returns true if the list is empty: PASSED" << std::endl;
    } else{
        std::cout << "TEST 2: isEmpty returns true if the list is empty: FAILED" << std::endl;

    }
}

void Test::test3(){
    LinkedListOfInts testList;
    testList.addFront(1);
    if(testList.size() == 1){
        std::cout << "TEST 3: size returns correct value after 1 addFront: PASSED" << std::endl;
    } else{
        std::cout << "TEST 3: size returns correct value after 1 addFront: FAILED" << std::endl;
    }
}

void Test::test4(){
    LinkedListOfInts testList;
    testList.addFront(1);
    testList.addFront(2);                                   //List should be 2,1
    std::vector<int> myVector = testList.toVector();       //Vector should be 2,1
    if(myVector.front() == 2){
        std::cout << "TEST 4: addFront adds the correct value to the front of the list: PASSED" << std::endl;
    }else{
        std::cout << "TEST 4: addFront adds the correct value to the front of the list: FAILED" << std::endl;
    }
}

void Test::test5(){
    LinkedListOfInts testList;
    testList.addBack(1);
    testList.addBack(2);                                    //List should be 1,2
    std::vector<int> myVector = testList.toVector();       //Vector should be 1,2
    if(myVector.back() == 2){
        std::cout << "TEST 5: addBack adds the correct value to the back of the list: PASSED" << std::endl;
    }else{
        std::cout << "TEST 5: addBack adds the correct value to the back of the list: FAILED" << std::endl;
    }
}

void Test::test6(){
    LinkedListOfInts testList;
    testList.addBack(1);
    if(testList.size() == 1){
        std::cout << "TEST 6: size returns correct value after 1 addBack: PASSED" << std::endl;
    } else{
        std::cout << "TEST 6: size returns correct value after 1 addBack: FAILED" << std::endl;
    }
}

void Test::test7(){
    LinkedListOfInts testList;
    testList.addFront(3);
    testList.addFront(2);
    testList.addBack(1);
    testList.addBack(0);                                //List should be 3,2,1,0
    bool isInList = testList.search(1);                 // Search for 1 in the list
    std::vector<int> myVector = testList.toVector();
    if(isInList && (std::find(myVector.begin(), myVector.end(), 1) != myVector.end())){         //Tests if the value exists in the vector and list.
        std::cout << "TEST 7: search returns true when the value exists: PASSED" << std::endl;
    } else{
        std::cout << "TEST 7: search returns true when the value exists: FAILED" << std::endl;
    }
}

void Test::test8(){
    LinkedListOfInts testList;
    testList.addFront(3);                               //List should be [3]
    testList.removeBack();
    if(testList.size() == 0){                           //list should be size 0
        std::cout << "TEST 8: size will return the correct value after 1 removeback(): PASSED" << std::endl;
    } else{
        std::cout << "TEST 8: size will return the correct value after 1 removeback(): FAILED" << std::endl;
    }
}

void Test::test9(){
    LinkedListOfInts testList;
    testList.addFront(3);
    testList.addFront(2);
    testList.addBack(1);
    testList.addBack(0);                                //List should be [3,2,1,0]
    testList.removeBack();                              //list should be 3,2,1 now
    std::vector<int> myVector = testList.toVector();   //creates a vector
    if(myVector.back() == 1){
        std::cout << "TEST 9: removeBack removes one value from the back of the list: PASSED" << std::endl;
    } else{
        std::cout << "TEST 9: removeBack removes one value from the back of the list: FAILED" << std::endl;
    }
}

void Test::test10(){
    LinkedListOfInts testList;
    testList.addFront(1);
    testList.removeFront();
    if(testList.size() == 0){
        std::cout << "TEST 10: removeFront decrements the size by 1 after1 use: PASSED" << std::endl;
    }else{
        std::cout << "TEST 10: removeFront decrements the size by 1 after 1 use: FAILED" << std::endl;
    }
}

void Test::test11(){
    LinkedListOfInts testList;
    if(testList.search(1) == false){
        std::cout << "TEST 11: search returns false when the value does not exist: PASSED" << std::endl;
    } else{
        std::cout << "TEST 11: search returns false when the value does not exist: FAILED" << std::endl;
    }
}

void Test::test12(){
    LinkedListOfInts testList;
    testList.addFront(1);
    if(testList.isEmpty() == false){
        std::cout << "TEST 12: isEmpty returns false when the list is not empty: PASSED" << std::endl;
    } else{
        std::cout << "TEST 12: isEmpty returns false when the list is not empty: FAILED" << std::endl;
    }
}

void Test::test13(){
    LinkedListOfInts testList;
    testList.addFront(1);               //size = 1
    testList.addFront(2);               //size = 2
    testList.addFront(3);               //size = 3
    testList.addFront(4);               //size = 4
    if(testList.size() == 4 ){
        std::cout << "TEST 13: size returns correct value after performing multiple addFronts: PASSED" << std::endl;
    } else{
        std::cout << "TEST 13: size returns correct value after performing multiple addFronts: FAILED" << std::endl;
    }
}

void Test::test14(){
    LinkedListOfInts testList;
    testList.addBack(1);               //size = 1
    testList.addBack(2);               //size = 2
    testList.addBack(3);               //size = 3
    testList.addBack(4);               //size = 4
    if(testList.size() == 4 ){
        std::cout << "TEST 14: size returns correct value after performing multiple addBacks: PASSED" << std::endl;
    } else{
        std::cout << "TEST 14: size returns correct value after performing multiple addBacks: FAILED" << std::endl;
    }
}

void Test::test15(){
    LinkedListOfInts testList;
    bool testRemove = testList.removeBack();
    if(testRemove == false){
        std::cout << "TEST 15: removeBack returns false when nothing is removed: PASSED" << std::endl;
    } else{
        std::cout << "TEST 15: removeBack returns false when nothing is removed: FAILED" << std::endl;
    }
}

void Test::test16(){
    LinkedListOfInts testList;
    testList.addBack(1);
    testList.addFront(2);
    bool testRemove = testList.removeBack();
    if(testRemove == true){
        std::cout << "TEST 16: removeBack returns true when a value is removed: PASSED" << std::endl;
    } else{
        std::cout << "TEST 16: removeBack returns true when a value is removed: FAILED" << std::endl;
    }
}

void Test::test17(){
    LinkedListOfInts testList;
    bool testRemove = testList.removeFront();
    if(testRemove == false){
        std::cout << "TEST 17: removeFront returns false when nothing is removed: PASSED" << std::endl;
    } else{
        std::cout << "TEST 17: removeFront returns false when nothing is removed: FAILED" << std::endl;
    }
}

void Test::test18(){
    LinkedListOfInts testList;
    testList.addBack(1);
    testList.addFront(2);
    bool testRemove = testList.removeFront();
    if(testRemove == true){
        std::cout << "TEST 16: removeFront returns true when a value is removed: PASSED" << std::endl;
    } else{
        std::cout << "TEST 16: removeFront returns true when a value is removed: FAILED" << std::endl;
    }
}