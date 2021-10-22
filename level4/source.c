
void	p(char *buffer)
{
	printf(buffer);
}

void	n(void)
{
	char	buffer[512];
	int		m = 0;

	fgets(buffer);
	p(buffer);

	if (m != 0x01025544)
		return ;

	system("cat /home/user/level5/.pass");
}

int		main(void)
{
	n();
	return (0);
}
