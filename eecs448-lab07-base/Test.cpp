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
        std::cout << "TEST 2: isEmpty returns correct boolean if the list is empty: PASSED" << std::endl;
    } else{
        std::cout << "TEST 2: isEmpty returns correct boolean if the list is empty: FAILED" << std::endl;

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
    std::vector<int> myVector = testList.toVector();        //Vector should just be 1
    testList.addFront(2);                                   //List should be 2,1
    std::vector<int> myVector1 = testList.toVector();       //Vector should be 2,1
    if(myVector.begin() != myVector1.begin()){
        std::cout << "TEST 4: addFront adds the value to the front of the list: PASSED" << std::endl;
    }else{
        std::cout << "TEST 4: addFront adds the value to the front of the list: FAILED" << std::endl;
    }
}

void Test::test5(){
    LinkedListOfInts testList;
    testList.addBack(1);
    std::vector<int> myVector = testList.toVector();        //Vector should just be 1
    testList.addBack(2);                                    //List should be 2,1
    std::vector<int> myVector1 = testList.toVector();       //Vector should be 2,1
    if(myVector.end() != myVector1.end()){
        std::cout << "TEST 5: addBack adds the value to the back of the list: PASSED" << std::endl;
    }else{
        std::cout << "TEST 5: addBack adds the value to the back of the list: FAILED" << std::endl;
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
    std::find(myVector.begin(), myVector.end(), 1);     //Search for 1 in the vector.
    if(isInList && (std::find(myVector.begin(), myVector.end(), 1) != myVector.end())){         //Tests if the value exists in the vector and list.
        std::cout << "TEST 7: search returns the correct boolean when the value exists: PASSED" << std::endl;
    } else{
        std::cout << "TEST 7: search returns the correct boolean when the value exists: FAILED" << std::endl;
    }
}

void Test::test8(){
    LinkedListOfInts testList;
    testList.addFront(3);
    testList.addFront(2);
    testList.addBack(1);
    testList.addBack(0);                                //List should be 3,2,1,0
    testList.removeBack();
    std::vector<int> myVector = testList.toVector();    //creates a vector
    if(testList.size() == myVector.size()){             //Tests if the size of the vector is equal to the size of the list.
        std::cout << "TEST 8: size will return the correct value after removeback(): PASSED" << std::endl;
    } else{
        std::cout << "TEST 8: size will return the correct value after removeback(): FAILED" << std::endl;
    }
}

void Test::test9(){
    LinkedListOfInts testList;
    testList.addFront(3);
    testList.addFront(2);
    testList.addBack(1);
    testList.addBack(0);                                //List should be 3,2,1,0
    std::vector<int> myVector = testList.toVector();    //creates a vector
    testList.removeBack();                              //list should be 3,2,1 now
    std::vector<int> myVector1 = testList.toVector();   //creates a vector
    if(myVector.end() != myVector1.end()){
        std::cout << "TEST 9: removeBack removes one value from the back of the list: PASSED" << std::endl;
    } else{
        std::cout << "TEST 9: removeBack removes one value from the back of the list: FAILED" << std::endl;
    }
}
