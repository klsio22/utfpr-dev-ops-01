#include <sys/syscall.h>
#include <unistd.h>

const char message[] =
    "Hello world\n"
    "klesio\n";

int main() {
	//write(1, message, sizeof(message) - 1);
	syscall(SYS_write, STDOUT_FILENO, message, sizeof(message) - 1);

	//_exit(0);
	//syscall(SYS_exit, 0);
	return 0;
}
