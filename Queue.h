//
// Created by ronal on 2/4/2023.
//

#ifndef ARRAYIMPLEMENTATIONTEMPLATEOFQUEUE_QUEUE_H
#define ARRAYIMPLEMENTATIONTEMPLATEOFQUEUE_QUEUE_H

template <typename T> class Queue{
public:
    // Atributos da Fila.
    int front, rear;
    int size;
    int capacity;
    T* array;

    // Métodos da Fila.

    Queue<T> CreateQueue(int capacity);
    ~Queue();
    bool isFull(Queue<T> queue);
    bool isEmpty(Queue<T> queue);
    void Enqueue(Queue<T> queue, T item);
    T Dequeue(Queue<T> queue);
    T Front(Queue<T> queue);
    T Rear(Queue<T> queue);

};
#endif //ARRAYIMPLEMENTATIONTEMPLATEOFQUEUE_QUEUE_H
