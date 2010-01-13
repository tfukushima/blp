#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *filename;

    if (argc != 2) {
        fprintf(stderr, "usage: useupper file\n");
        exit(1);
    }
    filename = argv[1];

    if (!freopen(filename, "r", stdin)) {
        fprintf(stderr, "chould not redirect stdio from file %s\n", filename);
        exit(2);
    }
    execl("./upper", "upper", 0);
    
    perror("could not exec ./upper");
    exit(3);
}
