#include <stdio.h>

int main(void)
{
    int gs1, group_identifier, publisher_code, item_number, check_digit;

    puts("Insert ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group_identifier, publisher_code, item_number, check_digit);
    
    return 0;
}
