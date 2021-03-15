#!/bin/zsh
FILE=./main.c
if [[ -a "$FILE" ]]; then
	echo "$FILE exists."
	exit
fi

tee main.c << EOF > /dev/null
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int main(int argc, char *argv[]) {

    return EXIT_SUCCESS;
}
EOF
vim main.c
