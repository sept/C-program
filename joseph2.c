#include <stdio.h>

int joseph(int peop_num, int off_num)
{
int store_peop[peop_num];
int i = 0;

for (i = 0; i < peop_num; i++)
{
store_peop[i] = 0;
}

int quit_peop_num = 0;

i = 0;

int count = 0;

while (quit_peop_num < peop_num - 1)
{
if (store_peop[i] == 0)
{
count++;
printf("%4d\n");
}


if (count == off_num)
{
store_peop[i] = 1;
count = 0;
quit_peop_num++;
printf("%4d(out)\n");
}

i++;

i = i % peop_num;
}

for (i = 0; i < peop_num; i++)
{
if (store_peop[i] == 0)
{
printf("The last people is %d\n", i + 1);
}
}

return 0;
}

int main()
{
int peop_num = 100;
int off_num = 3;

joseph(peop_num, off_num);

return 0;
}
