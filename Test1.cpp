#include <stdio.h>
#include <cstring>

typedef struct {
	int		Reserved2	: 4,	//reserved
			Fuse		: 1,	//Fuse상태: 정상=1, 비정상=0
			Reserved1   : 1,	//reserved
			Run			: 1,	//동작 상태: Run=1, Stop=0
			Normal		: 1;	//장착 여부: 장착=1, 미장착=0
} MODULE_STS;

MODULE_STS status;

void Foo()
{

	memset(&status, 0xFF, sizeof(status));
	
	int buf[30];
	
	buf[30] = 5;
	
	if (status.Run == 1)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	
	printf("%d, %d\n", status.Run, buf[30]);

}


int main(int, char **)
{
	Foo();
	
	return 0;
}
