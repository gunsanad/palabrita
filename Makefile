alpha2: main.c gfx_mod.c
	gcc -w main.c gfx_mod.c -o palabrita -lX11 -lm -ldl -lpthread
