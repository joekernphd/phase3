 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
 #include <string>
 #include <unordered_map>
 #include <sstream>
 #include <vector>
 using namespace std;
 struct Node {
    string* code;
    string* value;
    
    ~Node() {
        if(code != NULL) {
                delete code;
        }
        if(value != NULL) {
                delete value;
        }
    }
 };

 #include "y.tab.h"
