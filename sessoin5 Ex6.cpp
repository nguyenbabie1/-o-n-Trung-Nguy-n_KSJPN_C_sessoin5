#include<stdio.h>

int main(){
    int a, b, choice;
    printf("CALCULATOR\n");
    printf("\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
    
    printf("Nhap so bat ki: ");
    scanf("%d", &a);

    printf("Nhap so bat ki: ");
    scanf("%d", &b);

    printf("Nhap lua chon cua ban: ");
	scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case 2: 
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case 3:
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("%d / %d = %.2f\n", a, b, (float)a / b);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5: // Thoát
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Chon lai di khong mat em day!\n");
        }
    return 0;
}
