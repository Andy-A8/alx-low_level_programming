#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add
 *		at the end of the file.
 *
 * Return: 1 - on success or -1 - if the function fails.
 */
int append_text_to_file(const char *filename, char *text_content)

