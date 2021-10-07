#include <stdio.h>

/**
* before_main - prints before main function is executed
*/
void  _attribute_((constructor))  before_main()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
