

int *p;
p = (int*)malloc(sizeof(int));
*p = 10;
free(p);
-------------
int *p;
p = (int*)malloc(sizeof(int) * 10);

free(p);
----------

int *p;
p = (int*)malloc(sizeof(int) * 10);

free(p + 1);
----------

int a;
pid = fork();
if(pid)
{
	printf("%p", &a);
}
else
{
	printf("%p", &a);
}
same or diff?

-------

garbage
dangling pointer
when does differencing a dangling pointer fail?
--------

malloc(1) ? 
--------
