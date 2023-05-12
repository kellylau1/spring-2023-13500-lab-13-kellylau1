#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "recursion.h"

std::string printRange(int left, int right) {
    if (left > right) {
        return " ";
    }
    if (left == right) {
        return std::to_string(left); 
    }
    else {
        return std::to_string(left) + " " + printRange(left+1, right); 
    }
}

int sumRange(int left, int right) {
    if (left > right) {
        return 0;
    }
    if (left == right) {
        return left; 
    }
    else {
        return left + sumRange(left+1, right); 
    }
}


int sumArray(int *arr, int size) {
    if (size == 0) {
        return 0;
    }
return arr[0] + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(std::string s) {
    
    if (s.length() == 0) {
        return true;
    }
    
    char first = s[0];
    bool first_alpha = std::isalnum(first);
    bool rest_alpha = isAlphanumeric(s.substr(1)); 
    return first_alpha && rest_alpha;

}

bool nestedParens(std::string s) {
    if (s.length() == 0) {
        return true; 
    }
    if (s[0] == '(' && s[s.length() - 1] == ')') {
        return nestedParens(s.substr(1, s.length() - 2));
    }
    else {
        return false;
    }
}

