gen: gen_main.o gen_func.o 
	gcc -o gen gen_main.o gen_func.o  
gen_main.o: gen_main.c
	gcc -c gen_main.c
gen_func.o: gen_func.c
	gcc -c gen_func.c
