#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @file_path: A pointer to the path of the file.
 * @text: The string to add to the end of the file.
 *
 * Return: If the function fails or file_path is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *file_path, char *text)
{
	int file_descriptor, write_result, text_len = 0;

	if (file_path == NULL)
		return (-1);

	if (text != NULL)
	{
		for (text_len = 0; text[text_len];)
		text_len++;
	}

	file_descriptor = open(file_path, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text, text_len);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
