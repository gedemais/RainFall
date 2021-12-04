#include <stdio.h>
#include <stdlib.h>

int	language = 0;

int		greetuser(char *username)
{
	char	str[72];

	if (language == 0)
		strcpy(str, "Hello ");
	else if (language == 1)
		strcpy(str, "Hyvää päivää ");
	else if (language == 2)
		strcpy(str, "Goedemiddag! ");

	strcat(str, username);
	
	return (puts(str));
}

int     main(int argc, char**argv)
{
	char		*lang;
	char		buff[76];
	char		buff2[80];

	if (argc == 3)
	{
		memset(buff, 0, 19);
		strncpy(buff, argv[1], 40);
		strncpy(buff + 40, argv[2], 32);

		if ((lang = getenv("LANG")) != 0)
		{
			if (memcmp(lang, "fi", 2) == 0)
				language = 1;
			else if (memcmp(lang, "nl", 2) == 0)
				language = 2;
		}
		memcpy(buff2, buff, 19);
		return (greetuser(buff2));
	}

	return (1);
}