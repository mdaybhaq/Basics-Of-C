#include <stdio.h>

struct Student {
	int id;
	int marks;
	char fav_char;

};
int main (){

	struct Student ayub , ehsan , yusuf ;
	ayub.id=1;
	ehsan.id=2;
	yusuf.id=3;

	ayub.marks=480;
	ehsan.marks=299;
	yusuf.marks=476;

	ayub.fav_char='m';
	ehsan.fav_char='z';
	yusuf.fav_char='y';

	printf("Ayub got %d marks \n", ayub.marks);




	return 0;

}