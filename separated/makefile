all: minil

lexer: minil.lex 
	flex minil.lex

bison: minil.y
	bison -d -v --file-prefix=y minil.y

minil: bison lexer
	g++ -std=c++11 -o parser lex.yy.c y.tab.c main.cpp -lfl
