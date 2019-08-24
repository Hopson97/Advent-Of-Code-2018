#include "days.h"

char* getContent(FILE* file) 
{
    char* buffer = 0;
    long length;
    if (file) {
        fseek(file, 0, SEEK_END);
        length = ftell (file);
        fseek(file, 0, SEEK_SET);
        buffer = malloc(length);
        if (buffer) {
            fread(buffer, 1, length, file);
        }
        fclose(file);
    }
    return buffer;
}

void doDay(int day, void(*func)(const char*)) 
{
    char fileName[64];
    printf("==\nDay %d\n", day);

    strcat(fileName, "input/day");
    strcat(fileName, itoa(day));
    strcat(fileName, ".txt");

    

    FILE* f = fopen(fileName, "r");
    func();
    
    printf("\n==\n\n");
}

int main() 
{
    doDay(1, &day1);
}
