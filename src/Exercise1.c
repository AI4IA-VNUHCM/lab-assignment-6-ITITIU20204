/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
void Ex1(int n){
	//Your codes here
  /*int a,b,c,d;
  if (n<0 || n >9999){
	  printf("Error!! The input is invalid");	
	if (n>=1000) {
		a = n/1000;
		Ex1(a);
		printf(" thousand ");
		} else a=0;

	if (n>=100) {
		b = (n-a*1000)/100;
		Ex1(b);
		printf (" hundred ");
		} else b=0;

	
	if (n>=10) {
		c = (n-a*1000-b*100)/10;
		if ((n-a*1000-b*100)>=20 || c==0) {
		switch(c) {
		case 9:printf("ninty ");  break;
		case 8:printf("eighty "); break;
		case 7:printf("seventy ");break;
		case 6:printf("sixty ");  break;
		case 5:printf("fifty ");  break;
		case 4:printf("fourty");  break;
		case 3:printf("thirty "); break;
		case 2:printf("twenty "); break;
		}
		d= n-1000*a-100*b-c*10;
		Ex1(d);

		} else if (c==1) {
			c = (n-a*1000-b*100);
			switch(c) {
				case 10:printf("ten");break;
				case 11:printf("eleven");break;
				case 12:printf("twelve");break;
				case 13:printf("thirteen");break;
				case 14:printf("fourteen");break;
				case 15:printf("fifteen ");break;
				case 16:printf("sixteen");break;
				case 17:printf("seventeen");break;
				case 18:printf("eighteen");break;
				case 19:printf("ninteen");break;
			}
		}
	}
	
	switch(n) {
		case 9: printf("nine");break;
		case 8: printf("eight");break;
		case 7: printf("seven");break;
		case 6: printf("six");break;
		case 5: printf("five");break;
		case 4: printf("four");break;
		case 3: printf("three");break;
		case 2: printf("two");break;
		case 1: printf("one");break;
	}
}*/
int a,b,c,d;
	if (n<0 || n>9999) printf("The input number is invalid!!");
	if (n>=1000) {
		a = n/1000;
		Ex1(a);
		printf(" thousand ");
		} else a=0;

	if (n>=100) {
		b = (n-a*1000)/100;
		Ex1(b);
		printf (" hundred ");
		} else b=0;

	if (n>=10) {
		c = (n-a*1000-b*100)/10;
		if ((n-a*1000-b*100)>=20 || c==0) {
		switch(c) {
		case 9:printf("ninty ");break;
		case 8:printf("eighty ");break;
		case 7:printf("seventy ");break;
		case 6:printf("sixty ");break;
		case 5:printf("fifty ");break;
		case 4:printf("fourty ");break;
		case 3:printf("thirty ");break;
		case 2:printf("twenty ");break;
		}
		d= n-1000*a-100*b-c*10;
		Ex1(d);

		} else if (c==1) {
			c = (n-a*1000-b*100);
			switch(c) {
				case 10:printf("ten");break;
				case 11:printf("eleven");break;
				case 12:printf("twelve");break;
				case 13:printf("thirteen");break;
				case 14:printf("fourteen");break;
				case 15:printf("fifteen ");break;
				case 16:printf("sixteen");break;
				case 17:printf("seventeen");break;
				case 18:printf("eighteen");break;
				case 19:printf("ninteen");break;
			}
		}
	}
	
	switch(n) {
		case 9:printf("nine");break;
		case 8:printf("eight");break;
		case 7:printf("seven");break;
		case 6:printf("six");break;
		case 5:printf("five");break;
		case 4:printf("four");break;
		case 3:printf("three");break;
		case 2:printf("two");break;
		case 1:printf("one");break;
	}
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
