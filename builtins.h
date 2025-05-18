// builtins.h - Header for built-in shell commands
// Author: Ayush Rawat

#ifndef BUILTINS_H
#define BUILTINS_H

// Built-in command function prototypes
void executeECHO(char **tokens);
void executeCD(char **tokens);
void executePWD();
void executePINFO(char **tokens);

#endif