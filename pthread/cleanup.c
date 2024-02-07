#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

static void cleanup_func(void *p)
{
    puts(p);
}

static void *foo(void *p)
{
    puts("Thread is working!");
    pthread_cleanup_push(cleanup_func, "cleanup: 1");
    pthread_cleanup_push(cleanup_func, "cleanup: 2");
    pthread_cleanup_push(cleanup_func, "cleanup: 3");
    puts("push over");
    pthread_cleanup_pop(1);
    pthread_cleanup_pop(1);
    pthread_cleanup_pop(1);
    pthread_exit(NULL);
}

int main()
{
    pthread_t tid;

    puts("begin");

    pthread_create(&tid, NULL, foo, NULL);

    pthread_join(tid, NULL);
    puts("end");

    exit(0);
}