#ifndef MAIN_H
#define MAIN_H

/**
 * read_textfile -reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the nameof the file
 * @letters: the number of letters the functions should read and print.
 * Return: 0
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
