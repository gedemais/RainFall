#include <stdio.h>
#include <stdlib.h>

int	langage;

int	greetuser(char *username)
{
	char	str[72];

	if (langage == 0)
		strcpy(str, "Hello ");
	else if (langage == 1)
		strcpy(str, "Hyvää päivää ");
	else if (langage == 2)
		strcpy(str, "Goedemiddag! ");

	strcat(str, username);
	return (puts(str));
}

int     main(int argc, char**argv)
{
	char		*lang;
	char		buff[76];
	char		buff2[80];

	if (argc != 3)
		return (1);

	memset(buff, 0, 19);
	strncpy(buff, argv[1], 40);
	strncpy(buff + 40, argv[2], 32);

	if (!(lang = getenv("LANG")))
		return (0);

	langage = 0;
	if (memcmp(lang, "fi", 2) == 0)
		langage = 1;
	else if (memcmp(lang, "nl", 2) == 0)
		langage = 2;

	memcpy(buff2, buff, 19);

    return (greetuser(buff2));
}