#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 100

int main(int argc, const char *argv[])
{
#if 0
	char t[] = "POKLOPAC_MALI";
	char t2[100] = "POKLOPAC_MALI";
	char *s1 = "POKLOPAC_MALI";
	printf("%s\n", t);
	printf("%lu\n", strlen(t));
	printf("%lu\n", sizeof(t));
	printf("%s\n", t2);
	printf("%lu\n", strlen(t2));
	printf("%lu\n", sizeof(t2));
	printf("%s\n", s1);
	printf("%lu\n", strlen(s1));
	printf("%lu\n", sizeof(s1));
#endif
#if 0
	char name[MAX_NAME_SIZE];

	// scanf("%s", name);
	// gets(name);
	fgets(name, MAX_NAME_SIZE, stdin);

	printf("%s", name);
	fprintf(stdout, "%s", name);
	fprintf(stderr, "No error\n");
#endif

	char t[2][3] = {"OK", "NG"};
	printf("%s\n", t[0]);
	printf("%s\n", t[1]);

	char t[][3] = {"OK", "NG", "XX", "YY"};
	printf("%s\n", t[0]);
	printf("%s\n", t[1]);
	printf("%s\n", t[2]);
	printf("%s\n", t[3]);

	char *t3[] = {"il", "fait", "beau", "et", "chaud"};
	printf("%s", t[0]);

	return 0;
}