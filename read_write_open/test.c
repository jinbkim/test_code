#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		main(void)
{
	char	temp[100];
	char	str[] = "hello";
	int		fd;

	fd = open("./test.txt", O_CREAT|O_RDWR);
	read(fd, temp, 5);  // 파일에서 5글자 읽음. fd는 5글자를 읽은 다음을 가리킴.
	write(1, temp, 5);  // 파일에서 읽은 5글자 모니터에 출력.
	write(fd, str, sizeof(str)-1);  // 파일의 5글자 뒤부터 str을 파일에 넣음.
	close(fd);
}