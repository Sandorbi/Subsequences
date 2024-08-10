/*
 * File: Subsequences.cpp

#include <iostream>
#include <string>
#include "console.h"
using namespace std;

/* Given two strings, returns whether the second string is a
 * subsequence of the first string.
 */
bool isSubsequence(string text, string subsequence);

int main() {
    string text, subseq;
    cout << "Enter text: " << endl;
    cin >> text;
    cout << "Enter subSeq: " << endl;
    cin >> subseq;
    bool s = isSubsequence(text, subseq);
    if (s) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    cout << "here" << endl;
    return 0;
}

bool isSubsequence(string text, string subsequence) {
    if (subsequence.empty()) {
        return true;
    }
    if (text.empty()) {
        return false;
    }
    if (subsequence[0] == text[0]) {
        return isSubsequence(text.substr(1), subsequence.substr(1));
    }
    else {
        return isSubsequence(text.substr(1), subsequence);
    }
}
