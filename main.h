#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
extern char **environ;
char **extract_tok(char *p, int n);
char *copy_buff(char *buffer, ssize_t res);
void exec_cmd(char **arg, char *buffer, char *p, char **av, int i);
void freearg(char **arg);
int num_tok(char *buffer, char *p);
void envr(char **arg, char *buffer, char *p, int n, char **av, int j);
char **extract2_tok(char *p, int n, char **arg);
void print(char **av, char **arg, int i);
char *num_to_string(int i);
void free_all(char *buffer, char *p, char **arg);
int _process(char *buffer, int i, char *p, char **av);
void str_extract(char *env_copy, char **arg, char *buffer,
int n, char **av, int j, char *p);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int _strncmp(char *str1, char *str2, int i);
void handle_exit(char *buffer);





#endif
