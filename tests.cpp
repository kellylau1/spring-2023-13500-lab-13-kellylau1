#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

TEST_CASE("Task A: Print all numbers in range") {
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(1, 5) == "1 2 3 4 5");
}

TEST_CASE("Task B: Sum of numbers in range") {
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
}

TEST_CASE("Task C: Sum of elements in array") {
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21; 

    CHECK(sumArray(arr, size)== 43);
    CHECK(sumArray(arr,0)==0);
    CHECK(sumArray(arr, 5) == 34);
}

TEST_CASE("Task D: Is string alphanumeric?") {
    CHECK(isAlphanumeric("ABCD") == 1);
    CHECK(isAlphanumeric("Abcd1234xyz") == 1);
    CHECK(isAlphanumeric("KLMN 8-7-6") == 0);
}

TEST_CASE("Task E: Nested parentheses") {  
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens("()")  == true);
    CHECK(nestedParens("(((")  == false);
    CHECK(nestedParens("(()") == false);
}



    


    