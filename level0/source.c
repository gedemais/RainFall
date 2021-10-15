#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (atoi(argv[1]) != 423)
	{
		fwrite("No !\n", 5, 1, stderr);
		return (0);
	}
	char	*sh = strdup("/bin/sh");
	gid_t gid = getegid();
	gid_t uid = geteuid();

	setresgid(gid, gid, gid);
	setresuid(uid, uid, uid);
	execv(sh, 0);
}
