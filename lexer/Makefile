count_words: count_words.o lexer.o -ll
	clang count_words.o lexer.o -ll -ocount_words

count_words.o: count_words.c
	clang -c count_words.c

lexer.o: lexer.c
	clang -c lexer.c

lexer.c: lexer.l
	flex -t lexer.l > lexer.c
