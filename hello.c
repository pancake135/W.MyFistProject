#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "입력이 되지않았습니다.\n", 13);
		return 1;
	}
	write(1,"입력이 되었습니다.\n", 11);
	return 0;
}
