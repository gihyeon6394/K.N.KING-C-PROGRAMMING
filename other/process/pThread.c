//
// Created by kkh04511 on 2023-06-28.
//

#include <pthread.h
#include <stdio.h>

#include <stdlib.h>


int sum;

void *runner(void *param); /* the thread */

int main(int argc, char *argv[])

{
    pthread_t tid; /* the thread identifier */
    pthread attr t attr; /* set of thread attributes */

    pthread_attr_init(&attr); /* get the default attributes */
    pthread_create(&tid,&attr,runner,argv[1]); /* create the thread */
    pthread_join(tid, NULL); /* wait for the thread to exit */

    printf("sum = %d\n",sum);

}

/* The thread will begin control in this function */
void *runner(void *param)
{
    int i, upper = atoi(param);
    sum = 0;

    if (upper > 0) {
        for (i = 1; i <= upper; i++)
            sum += i;
    }

    pthread_exit(0);
}