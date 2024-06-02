all:	all_c all_ml

# Règles pour la compilation en C
all_c:	build_c run_c

hello.c.exe:	hello.c
	gcc -Wall -Wextra -Werror -Wvla -std=c99 -fsanitize=address,undefined -pedantic -O0 -o hello.c.exe hello.c

build_c:	hello.c.exe

run_c:	hello.c.exe
	./hello.c.exe

# Règles pour la compilation en OCaml
all_ml:	build_ml run_ml

hello.ml.exe:	hello.ml
	ocamlopt.opt -O3 -o hello.ml.exe hello.ml

hello.ml.bc:	hello.ml
	ocamlc.opt -o hello.ml.bc hello.ml

build_ml:	hello.ml.exe

run_ml:	hello.ml.exe
	./hello.ml.exe
