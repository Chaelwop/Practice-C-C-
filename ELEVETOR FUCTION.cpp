#include <stdio.h>

void elevator(int currentFloor, int destinationFloor) {
    if (currentFloor == destinationFloor) {
        printf("Already on the destination floor.\n");
    } else {
        printf("Elevator moving from floor %d to floor %d.\n", currentFloor, destinationFloor);
    }
}

int main() {
    int currentFloor = 30;
    int destinationFloor = 40;
    
    printf("Current floor: %d\n", currentFloor);
    printf("Destination floor: %d\n", destinationFloor);

    elevator(currentFloor, destinationFloor);

    return 0;
}

