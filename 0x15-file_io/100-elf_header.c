#include "main.h"

/**
 * display_type - This is a function that displays the elf type
 * @buff: This is a pointer to the buff
 * Return: Nothing
 */

void display_type(char *buff)
{
	char check = buff[16];

	if (buff[5] == 1)
	{
		check = buff[16];
	} else
		check = buff[17];

	printf(" Type:		");
	if (check == 0)
		printf("NONE (No file type)\n");
	else if (check == 1)
		printf("REL (Relocation file)\n");
	else if (check == 2)
		printf("EXEC (Exectable file)\n");
	else if (check == 3)
		printf("DYN (Shared object file)\n");
	else if (check == 4)
		printf("CORE (core file)\n");
	else
	{
		printf("<unknown: %x>\n", check);
	}
}


/**
 * display_version - This is a function that displays the version
 * @buff: This is a pointer to the buff
 * Return: Nothing
 */

void display_version(char *buff)
{
	int de_ver = buff[6];

	printf(" Version:		%d", de_ver);

	if (de_ver == EV_CURRENT)
	{
		printf(" (current)");
	}

	printf("\n");
}


/**
 * display_address - This is a function that displays the address
 * @buff: This is a pointer to file
 * Return: Nothing
 */

void display_address(char *buff)
{
	int count, start;
	char check;

	printf(" Entry point address:		0x");

	check = buff[4] + '0';
	if (check == '1')
	{
		start = 26;
		printf("80");

		for (count = start; count >= 22; count--)
		{
			if (buff[count] > 0)
				printf("%x", buff[count]);
			else if (buff[count] < 0)
				printf("%x", 256 + buff[count]);
		}
		if (buff[7] == 6)
			printf("00");
	}
	if (check == '2')
	{
		start = 26;
		for (count = start; count > 23; count--)
		{
			if (buff[count] >= 0)
				printf("%02x", buff[count]);
			else if (buff[count] < 0)
				printf("%02x", 256 + buff[count]);
		}
	}
	printf("\n");
}


/**
 * display_osabi - This is a function that displays thr osabi
 * @buff: This is a pointer to file
 * Return: Nothing
 */

void display_osabi(char *buff)
{
	char check = buff[7];

	printf(" OS/ABI:		");

	if (check == 0)
		printf("UNIX - System V\n");
	else if (check == 2)
		printf("UNIX - NetBSD\n");
	else if (check == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", check);

	printf(" ABI Version:		%d\n", buff[8]);
}


/**
 * display_info - This is a function that checks magic
 * @buff: This is a pointer to the file
 * Return: Nothing
 */

void display_info(char *buff)
{
	int size;

	printf(" Magic: ");

	for (size = 0; size < 16; size++)
		printf(" %02x", buff[size]);

	printf("\n");
}

/**
 * display_data - This is a funcction that displays the data
 * @buff: This is a pointer to file
 * Return: Nothing
 */

void display_data(char *buff)
{
	char info = buff[5];

	printf(" Data:		2's complement");
	if (info == 1)
	{
		printf(", little endian\n");
	}

	if (info == 2)
	{
		printf(", big endian\n");
	}
}


/**
 * elf_search - This is a function that checkes if a file is elf
 * @buff: This is a pointer to the file
 * Return: An int value
 */

int elf_search(char *buff)
{
	int de_address = (int)buff[0];
	char E = buff[1];
	char L = buff[2];
	char F = buff[3];

	if (de_address == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}


/**
 * system_search - This is a function that checkes the system
 * @buff: This is a char pointer to the file
 * Return: Nothing
 */

void system_search(char *buff)
{
	char check = buff[4] + '0';

	if (check == '0')
		exit(98);

	printf("ELF Header:\n");
	display_info(buff);

	if (check == '1')
		printf(" Class:		ELF32\n");
	if (check == '2')
		printf(" Class:		ELF64\n");

	display_data(buff);
	display_version(buff);
	display_osabi(buff);
	display_type(buff);
	display_address(buff);
}


/**
 * main - This is the main function for elf_header
 * @ac: This is the argument count
 * @av: This is the argument vector i.e array of argument
 * Return: int value
 */

int main(int ac, char **av)
{
	char buff[27];
	int file_open;
	ssize_t read_file;

	if (ac != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	file_open = open(av[1], O_RDONLY);
	if (file_open < 0)
	{
		dprintf(2, "Error: file can not be open\n");
		exit(98);
	}
	lseek(file_open, 0, SEEK_SET);

	read_file = read(file_open, buff, 27);
	if (read_file == -1)
	{
		dprintf(2, "Error: file can not be read\n");
		exit(98);
	}

	if (!elf_search(buff))
	{
		dprintf(2, "Err: This is not an ELF\n");
		exit(98);
	}

	system_search(buff);
	close(file_open);

	return (0);
}
