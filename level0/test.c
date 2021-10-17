

int main(int argc, char **argv) {

	char	*s;

	mmap(s, 66, open('bytes', O_RDONLY), PROT_READ | PROT_WRITE, MAP_FILE | MAP_PRIVATE, fd, 0);

    int (*ret)() = (int(*)())s;


    ret();

}
