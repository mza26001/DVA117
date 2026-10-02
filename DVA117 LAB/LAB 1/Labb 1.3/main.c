#include  <stdio.h>

int main(void) {

    float p_vat, p_ex;
    int vat;

    printf("Price on article (including VAT): ");
    scanf("%f", &p_vat);
    printf("VAT (percentage as integer):  ");
    scanf("%d", &vat);
    p_ex = (float)vat/100+1;
    printf("Price excluding VAT is %.2fSEK\n", (float)p_vat/p_ex);
    printf("The VAT is %.2fSEK\n", p_vat - (float)p_vat/p_ex);
    
    return 0;
}