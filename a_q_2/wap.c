#include<dlfcn.h>
#include<stdio.h>
int main()
{
	int n;
	void (*fn)();
	void *lib_handle;	//Null pointer
	scanf("%d", &n);
	
	switch(n)
	{
		case 1: 
			lib_handle = dlopen("/usr/lib/lib1.so", RTLD_LAZY);
			if(!lib_handle){
				fprintf(stderr, "%s\n", dlerror());
			}
			fn = dlsym(lib_handle, "f1");	//pointing to function f1
			(*fn)();
			break;
		case 2:
			lib_handle = dlopen("/usr/lib/lib2.so", RTLD_LAZY);
			fn = dlsym(lib_handle, "f2");
			(*fn)();
			break;

		default: printf("405");
			break;
	}
	
	dlclose(lib_handle);
	return 0;
}
