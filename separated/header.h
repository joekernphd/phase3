#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;
struct Node {
   string code;
   string value;

   Node() {
       code = "";
       value = "";
   }
};

struct Element {
   string name;    //variable name
   int size;       //size if array, 0 if scalar
   string localTo; //which function is this variable local to

   Element(string n, int s) {
       name = n;
       size = s;
       localTo = "";
   }
};

extern int tempCount;
extern int labelCount;
extern vector<Node*> nodes;
extern unordered_map<string, Element> symbolTable;
extern void yyerror(const char *msg);
extern int yylex();
extern vector< pair<string,string> > functions;
extern string code;
extern string makeTemp();
extern string makeLabel();

#include "y.tab.h"
