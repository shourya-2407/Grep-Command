#include<stdio.h>
#include"header.h"
#include<stdio.h>

char* mytok(char *str, char *del, int x){
        static char *c;
        static int j[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        static int i[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        if(str != NULL) {
                c = str;
                while(c[i[x]] != '\0') {
                        if(c[i[x]] == del[0])
                                c[i[x]] = '\0';
                        i[x]++;
                }
                while(c[j[x]] == '\0')
                        j[x]++;
                return &c[j[x]];
        }
        else {
                while(j[x] < (i[x]-1))  {
                        if(c[j[x]] == '\0' && c[j[x]]+1 != '\0') {
                                j[x]++;
                                return &c[j[x]];
                        }
                        j[x]++;
                }
                c = NULL;
                return NULL;
        }
}

