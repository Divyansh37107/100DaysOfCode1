#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;
    char input[20];

    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    scanf("%19s", input);

    if (input[0] == 'R' && input[1] == 'E' &&
        input[2] == 'D' && input[3] == '\0')
    {
        light = RED;
    }
    else if (input[0] == 'Y' && input[1] == 'E' &&
             input[2] == 'L' && input[3] == 'L' &&
             input[4] == 'O' && input[5] == 'W' &&
             input[6] == '\0')
    {
        light = YELLOW;
    }
    else if (input[0] == 'G' && input[1] == 'R' &&
             input[2] == 'E' && input[3] == 'E' &&
             input[4] == 'N' && input[5] == '\0')
    {
        light = GREEN;
    }
    else
    {
        printf("Invalid traffic light!");
        return 0;
    }

    switch (light)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}