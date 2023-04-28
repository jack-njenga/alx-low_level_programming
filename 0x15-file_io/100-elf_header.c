#include "main.h"

/**
 * main - Entry point of the program
 * @argc: argument counter
 * @argv: argumets vector
 *
 * Return: 0 on success, else on error code
 */

int main(int argc, char *argv[])
{
	int fd, i = 0;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		exit(98);
	}
	read(fd, &header, sizeof(header));
	printf("ELF Header:\n");
	printf("%-11s", " Magic:");
	for (n = 0; n < 16; n++)
	{
		printf("%02x", (unsigned int) header.e_ident[n]);
		if (n < 15)
			printf(" ");
	}
	printf("\n");
	printf("%-36s %d\n", "  Class:", header.e_ident[4]);
	printf("%-36s %d\n", "  Data:", header.e_ident[5]);
	printf("%-36s %d\n", "  Version:", header.e_machine);
	printf("%-36s %d\n", "  OS/ABI", header.e_ident[7]);
	printf("%-36s %d\n", "  ABI Version:", header.e_ident[8]);
	printf("%-36s %d\n", "  Type:", header.e_type);
	printf("%-36s 0x%lx\n", "  Entry point addres:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Start of program headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Start of section headers:", header.e_entry);
	printf("%-36s 0x%x\n", "  Flags:",  header.e_flags);
	printf("%-36s 0x%lx\n", "  Size of this header:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Size of program headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Number of program headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Size of section headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Number of section headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Section header string table index:", header.e_entry);
	return (0);
}
