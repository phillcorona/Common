#include "get_next_line.h"

void test_case(char *file)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return;
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line: %s", line);
		free(line);
	}
	close(fd);
}

int main(void)
{
	printf("Test 1 - Read from a file with multiple lines:\n");
	test_case("test/testfile.txt");

	printf("\nTest 2 - Read from an empty file:\n");
	test_case("test/emptyfile.txt");

	printf("\nTest 3 - Read from a file with a single line:\n");
	test_case("test/singlelinefile.txt");

	printf("\nTest 4 - Read from a file with lines ending with newline characters:\n");
	test_case("test/newlinefile.txt");

	printf("\nTest 5 - Read from a file that has no newline at the end:\n");
	test_case("test/no_newline_file.txt");

	printf("\nTest 6 - Test when the file descriptor is invalid:\n");
	test_case("test/invalidfile.txt");

	printf("\nTest 7 - Test when BUFFER_SIZE is small:\n");
	test_case("test/buffer_size_file.txt");

	printf("\nTest 8 - Test with a very large file:\n");
	test_case("test/largefile.txt");

	printf("\nTest 9 - Test edge case with file starting with newline:\n");
	test_case("test/leading_newline_file.txt");

	printf("\nTest 10 - Test reading and freeing multiple lines:\n");
	test_case("test/multiline_test_file.txt");

	return 0;
}
