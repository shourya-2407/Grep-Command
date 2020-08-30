#include<string.h>
#include"header.h"
#include<stdio.h>
char* mystrstr(char* a, char* b){
	char *x = a, *y = b;
	while(*x != '\0' && *y != '\0'){
		if(*x == *y){
			x++;
			y++;
		}
		else{
			if(y == b)
				x++;
			else{
				x = x - (y - b) + 1;
				y = b;
			}
		}

	}
	if(*y == '\0')
		return x - strlen(b);
	else
		return NULL;
}
