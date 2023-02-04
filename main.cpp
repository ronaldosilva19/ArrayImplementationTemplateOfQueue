#include <iostream>
#include "Queue.h"
using std::cout; using std::cin;

int main() {
    Queue<int>  queue = queue.CreateQueue(100);
    int mult = 1;
    for(auto i = 1; i <= 100; i++){
        queue.Enqueue(queue, i * mult );
        mult *= 5;
    }

    cout << "Elemento do final da Fila: " << queue.Rear(queue) << "\n";
    while(!queue.isEmpty(queue)) {
        cout << "Elemento do inicio: " << queue.Front(queue) << "\n";
        cout << "Removendo elemento: " << queue.Dequeue(queue) << "\n";
    }
    return 0;
}