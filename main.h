#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
/*function prototypes*/
char **get_path_dirs(char **en);
void messsage_error(char *name, int cycles, char **cmd);
void execute_command(char **command, char **name, char **env, int cycles);
void print_environ(char **env);
int string_comapre(char *str1, char *str2);
unsigned int string_length(char*str);
char *string_con(char *destination, char *source);
char *string_copy(char *destination ,char *source);
int str_int(char *string);
void handle_signal(int promt_handle);
void handle_EOF(char *buffer_string);
void free_memory(char **cmd);
void free_mem_exist(char **cmd);
void exist_shell(char **cmd);
void child_pro (char **name, char **en, int cycles);
int change_directory(const char *path);
char **tokenizer(char *buffer,*buffer, const char *string);
#endif
