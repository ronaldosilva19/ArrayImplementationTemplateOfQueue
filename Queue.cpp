//
// Created by ronal on 2/4/2023.
//

#include <iostream>
#include <climits>
#include "Queue.h"

using std::cout; using std::cin;

template <typename T> Queue<T> Queue<T>::CreateQueue(int capacity){
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->array = new T[queue->capacity];

    return queue;
}

template <typename T> Queue<T>::~Queue(){
    delete[] array;
}
template <typename T> bool Queue<T>::isFull(Queue<T> queue){
    return (queue->size == queue->capacity);
}
template <typename T> bool Queue<T>::isEmpty(Queue<T> queue){
    return (queue->size == 0);
}
template <typename T> void Queue<T>::Enqueue(Queue<T> queue, T item){
    if(isFull(queue)){
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << "Enfileirando " << item << "\n";
}
template <typename T> T Queue<T>::Dequeue(Queue<T> queue){
    if(isEmpty(queue)){
        return (EXIT_FAILURE);
    }
    T item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;

    return item;
}
template <typename T> T Queue<T>::Front(Queue<T> queue){
    if(isEmpty(queue)){
        return (EXIT_FAILURE);
    }
    return queue->array[queue->front];
}
template <typename T> T Queue<T>::Rear(Queue<T> queue){
    if(isEmpty(queue)){
        return (EXIT_FAILURE);
    }
    return queue->array[queue->rear];
}
