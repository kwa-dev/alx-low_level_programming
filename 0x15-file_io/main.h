#ifndef MAIN_H
#define MAIN_H

/**
 *create_flle - create file
* read_textfile -reads a text file and prints it to POSIX stdout.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *Returns: 1 on success, -1 on failure
 * @filename: pointer to the nameof the file
 * @letters: the number of letters the functions should read and print.
 * Return: 0
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
