//  assignment no 9 use around 21 build in function in string
#include <stdio.h>
#include<string.h>

main()
{
	int n;
	char web[20]="Mayuripatil";
	n= strlen(web);
	printf("%d",n);
}

//strcpy function
int main(){
	char web[10]= "Mayuri";
	char site [10]= "Vedika";
	strcpy(web,site);
	printf("%s",web);
	printf("\n%s\n",site);
}

//strncpy () function 3 characture copy
int main(){
	char web[10]= "Mayuri";
	char site [10]= "Vedika";
	strncpy(web,site,3);
	printf("%s",web);
	printf("\n%s\n",site);
}


// strset () function
int main()
{
	char str [10] ="Mayuri";
	strset(str,'*');
	printf("%s", str);
}


// strnset () function
int main()
{
	char str [10] ="Mayuripatil";
	strnset(str,'*',4);
	printf("%s", str);
}

//my strcmp function
int main()
{
	int n;
	char str[10] = "Mayuri";
	char str1[10] = "Harshada";
	n = strcmp(str,str1);
	printf("%d",n);
}

//my strncmp function
int main()
{
	int n;
	char str[10] = "Mayuri";
	char str1[10] = "May";
	n = strncmp(str,str1,3);
	printf("%d",n);
}

//strcat () function
int main()
{
	char web [10] = "Akash";
	char site [10] = " Patil";
	strcat (web,site);
	printf("%s",web);
}

//strncat () function
int main()
{
	char web [10] = "Akash";
	char site [10] = " Patil";
	strncat (web,site,3);
	printf("%s",web);
}

//strrev () function
int main()
{
	char web [20] = "Akash";
	strrev (web);
	printf("%s",web);
}


//strchr () function
int main()
{
	char web [50] = "Akasha is Good Girl";
	char *p;
	p = strchr (web,'i');
		printf("%s",p);
}

//strrchr () function
int main()
{
	char web [50] = "Akasha is Good and Nice Girl";
	char *p;
	p = strrchr (web,'o');
		printf("%s",p);
}

//strstr () function
int main()
{
	char web [50]= " Flawar is Beautiful. ";
	char *p;
	p = strstr(web,"ea");
	printf("%s",p);
}

 strupr() and strlwr()
 
 int main()
 {
 	char str1[] = "Hello World";
    char str2[] = "Good Night"; 
	printf("Original str1: %s", str1);
	printf("Uppercase str1: %s",strupr(str1));
	
	printf("\n original str2: %s",str2);
		printf("Uppercase str2: %s",strlwr(str2));
 }