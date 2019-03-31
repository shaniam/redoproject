#include <stdio.h>
#include <setjmp.h>
#include <signal.h>

jmp_buf env;
/*
void foo() 
{
	int *p;
	p = 0; 
	*p = 100;
}*/

void fault_handler(int signum)
{
	if(signum == SIGSEGV) {
		printf("Seg fault received. :(\n");
		longjmp(env, signum);
	} else if(signum == SIGALRM) {
		printf("RING RING RING!\n");
/*		longjmp(env, signum);*/
	}
}

int main()
{
	int i;

/*	signal(SIGSEGV, fault_handler);*/
	signal(SIGINT, SIG_IGN);
	signal(SIGALRM, fault_handler);

	alarm(1);
	sleep(1);

	i = setjmp(env);
	printf("Setjmp returned %d\n", i);
	
	if(i == 0) {/*
		alarm(1);
		sleep(1);*/
		/* risky function */
		/*foo();*/
	} else {
		printf("Looks like its time to wake up fam");
	}

/*	foo();*/
	return 0;
}

