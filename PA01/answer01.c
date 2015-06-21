
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
	if (array + i > array[i + 1]) {
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
    return 0;
}

char * my_strchr(const char * str, int ch)
{
    return NULL;
}

char * my_strstr(const char * haystack, const char * needle)
{
    return NULL;
}

char * my_strcpy(char * dest, const char * src)
{
    return NULL;
}

char * my_strcat(char * dest, const char * src)
{
    return NULL;
}

int my_isspace(int ch)
{
    return -1;
}

int my_atoi(const char * str)
{
    return -1;
}

