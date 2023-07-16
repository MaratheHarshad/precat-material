#include <iostream>

struct Time
{
private:
    int hr;
    int min;

public:
    void acceptTime()
    {
        printf("Enter the hrs =  ");
        scanf("%d", &hr);
        printf("Enter the mins =  ");
        scanf("%d", &min);
    }

    void displyTime()
    {
        printf("Time = %d:%d", hr, min);
    }
};

int main()
{
    struct Time t;
    // t.hr = 9; // NOT allowed
    // t.min = 49; // NOT allowed
    t.acceptTime();
    t.displyTime();
    return 0;
}