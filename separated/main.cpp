#include "header.h"

int tempCount = 0;
string makeTemp() {
   string ret = "__temp";
   ret += to_string(tempCount);
   tempCount++;
   return ret;
}

int labelCount = 0;
string makeLabel() {
   string ret = "LABEL";
   ret += to_string(labelCount);
   labelCount++;
   return ret;
}

void yyerror(const char *msg);
extern int currLine;
extern int currPos;
int yylex();
string code = "";
vector<pair <string, string>> functions;   //function name, code for function
unordered_map<string, Element> symbolTable;
vector<Node*> nodes;
bool error = false;
int main( int argc, char* argv[] ) {  
    // Allow for command-line specification of source file
    if ( argc > 1  &&  freopen( argv[1], "r", stdin) == NULL ) {
        cout << argv[0] << ": file " << argv[1]; 
        cout << " cannot be opened.\n";
        exit( 1 );
    }
    string compilerName;
    compilerName = argv[0];           // For use in error messages
    yyparse();                                // build syntax tree
    for(auto i : symbolTable) {
        cout << "var:" << i.first << " size:" << i.second.size << " localto:" <<i.second.localTo << endl;
    }
    if(!error) {
        for(auto s : functions) {
            // cout << "function: " << s.first << endl;
            cout << s.second;
        }
    }
    for(Node* n : nodes) {
        delete n;
    }
    //string xxx = makeTemp();
}


void yyerror(const char *msg) {
    printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
