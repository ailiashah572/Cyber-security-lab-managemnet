#include <stdio.h>
int main() {
    char n[50];
    int c, d, s;
    float cc, dc, sc, ct, dt, ti;
    printf("Enter Lab Name: ");
    scanf(" %[^\n]", n);
    printf("Enter Number of Computers: ");
    scanf("%d", &c);
    printf("Enter Number of Network Devices: ");
    scanf("%d", &d);
    printf("Enter Number of Security Tools: ");
    scanf("%d", &s);
    printf("Enter Cost per Computer: ");
    scanf("%f", &cc);
    printf("Enter Cost per Network Device: ");
    scanf("%f", &dc);
    printf("Enter Annual Security Software Cost: ");
    scanf("%f", &sc);
    ct = c * cc;
    dt = d * dc;
    ti = ct + dt + sc;
    printf("\n========================================\n");
    printf("       CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");
    printf("Lab Name             : %s\n", n);
    printf("Computers            : %d\n", c);
    printf("Network Devices      : %d\n", d);
    printf("Security Tools       : %d\n", s);
    printf("Computer Cost        : %.2f\n", ct);
    printf("Network Device Cost  : %.2f\n", dt);
    printf("Software Cost        : %.2f\n", sc);
    printf("----------------------------------------\n");
    printf("Total Lab Investment : %.2f\n", ti);
    printf("----------------------------------------\n");
    printf("========================================\n");
    return 0;
}
