#ifndef __THREAD_FACTORY__
#define __THREAD_FACTORY__
#include "work_que.h"

//线程结构体
typedef struct{
    pthread_t  *pthid;//线程id
    pQue threadQue;
    pthread_cond_t cond;//条件变量，用于同步
    //void* (*threadFunc)(void*);
}factory,*pFactory;

#endif
