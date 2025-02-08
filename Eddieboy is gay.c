#include <stdio.h>
#include <string.h>

int main() {
    char manalo[20];  

    do {
        printf("Is Eduardo Manalo gay? (yes/no) \n");
        scanf("%19s", manalo); 

        if (strcmp(manalo, "no") == 0) {
            printf("Hindi ka nagpatisod kapatid.\n");
        } else if (strcmp(manalo, "yes") == 0) {
            printf("Ikaw ay itinitiwalag mula sa Iglesia mula ngayon.\n");
        }

    } while (strcmp(manalo, "yes") != 0 && strcmp(manalo, "no") != 0); 

    return 0;
}
