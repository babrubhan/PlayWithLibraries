all: wap
	
f1.o:	f1.c
	gcc -Wall -fPIC -c f1.c
	
f2.o:	f2.c
	gcc -Wall -fPIC -c f2.c
	
lib1.so: f1.o
	gcc -Wall -shared -o lib1.so f1.o
	
lib2.so: f2.o
	gcc -Wall -shared -o lib2.so f2.o
	
wap.o:	wap.c
	gcc -Wall -c wap.c
	
wap:	wap.o	
	gcc -Wall -rdynamic -o wap wap.c -ldl

clean:
	rm -rf *o wap
