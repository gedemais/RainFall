#include <stdlib.h>
#include <string.h>

class N {
    public:

    N(int nb) {
        this->nb = nb;
    }

    int operator+(N &obj) {
        return this->nb + obj.nb;
    }

    int operator-(N &obj) {
        return this->nb - obj.nb;
    }

    void setAnnotation(char *buffer)
    {
        memcpy(this->buf, buffer, strlen(buffer));
        return;
    }

    private:

    int     nb;  
    char    buf[108];
};

int     main(int argc, char**argv)
{
    N   *a;
    N   *b;

    if (argc < 2)
        exit(1);

    a = new N(5);
    b = new N(6);
    a->setAnnotation(argv[1]);
    
    return b->operator+(a);
}