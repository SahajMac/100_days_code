//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    int day, year;
    char month[3];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%2s/%d", &day, month, &year);
    printf("%02d-Apr-%d", day, year);
    return 0;
}
