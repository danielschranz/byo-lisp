prompt: prompt.c
	gcc -std=c99 -Wall prompt.c -o prompt

clean:
	rm prompt -f
