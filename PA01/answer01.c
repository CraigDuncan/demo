
#include "answer01.h"

// NOTE: You are NOT to use the strings library on this assignment,
// as stated in the README.

// DO NOT BEGIN WORKING ON THIS FILE UNTIL YOU HAVE COMPLETELY AND
// THOROUGHLY READ THE README FILE!!!

int arraySum(int * array, int len)
{
    int sum = 0;  //initial value.
    int i = 0;
    for (i = 0; i < len; i++) {
		sum += array[i];
    }
    return sum;
}

int arrayCountNegative(int * array, int len)
{
    int count = 0;
    int i;
    for (i = 0; i < len; i++) {
		count += (array[i] < 0);
    }
    return count;
}

int arrayIsIncreasing(int * array, int len)
{    
    int bool = 1;
    int i;
    for (i = 0; i < len - 1; i++) {
		if (array[i] > array[i + 1]) {
			bool = 0;
		}
    }
    return bool;
}

int arrayIndexRFind(int needle, const int * haystack, int len)
{
    int index = -1;
    int i;
    for (i = 0; i < len; i++) {
		if (haystack[i] == needle) {
			index = i;
		}
    }
    return index;
}

int arrayFindSmallest(int * array, int len)
{
	int indexMin = 0;
	int i;
    for (i = 0; i < len; i++) {
		if (array[i] < array[indexMin]) {
		    indexMin = i;
		}
    }
    return indexMin; 
}

size_t my_strlen(const char * str)
{	
	size_t len = 0;
	while (str[len] != '\0') {
		len++;
	}
    return len;
}

char * my_strchr(const char * str, int ch)
{
	int len = 0;
	while (str[len] != '\0') {
		if (str[len] == ch) {
			return (char *) &str[len];
		}
		len++;
	}
	if ('\0' == ch) {
		return (char *) &str[len];
	}
    return NULL;
}

char * my_strstr(const char * haystack, const char * needle)
{
	int loc = 0;
	int matchLetter = 0;
	while (haystack[loc] != '\0') {
		if (needle[matchLetter] == '\0') {
			return (char *) &haystack[loc - matchLetter];
		}
		else if (haystack[loc] == needle[matchLetter]) {
			matchLetter++;
		}
		else {
			matchLetter = 0;
		}
		loc++;
	}
    return NULL;
}

char * my_strcpy(char * dest, const char * src)
{
	//int x = sizeof(dest);
	//int y = my_strlen(src);
	//if (x > (y + 1)) {
		int index = -1;
		do {
			index++;
			dest[index] = src[index];
		} while (src[index] != '\0');
	//}
    return dest;
}

char * my_strcat(char * dest, const char * src)
{
	int ofset = my_strlen(dest);
	int index = -1;
	do {
		index++;
		dest[index + ofset] = src[index];
	} while (src[index] != '\0');
	
	return dest;
}

int my_isspace(int ch)
{
	char * s1 = "  \f\n\r\t\v";
	int len = 0;
	while (s1[len] != '\0') {
		len++;
		if (ch == s1[len]){
			return 1;
		}
	}
    return 0;
}

int my_atoi(const char * str)
{
	int index = 0;
	while (my_isspace(str[index])) {
		index++;
	}
	int sign = 1;
	if (str[index] == '-') {
		sign = -1;
		index++;
	}
	int sum = 0;
	while ('0' <= str[index] && str[index] <= '9') {
		sum *= 10;
		sum += (str[index] - 48);
		index++;
	}
    return sum * sign;
}

