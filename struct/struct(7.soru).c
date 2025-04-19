// Bir banka için müşteri hesap bilgileri(müşteri adı,bakiyesi) kaydedilecektir. Kullanıcıdan alınan
// n sayısına göre n adet müşteriyi pointer kullanarak oluşturunuz ve her müşterinin adını ve bakiyesini kullanıcıdan alınız.
// HesapListele fonksiyonunu kullanarak bankadaki müşterilerin adını ve bakiyesini listeledikten sonra tüm müşterilerin toplam bakiyesini yazdırınız.
#include <stdio.h>
#include <stdlib.h>

struct AccountInfo {
    char name[50];
    int balance;
};

void listAccounts(int count, struct AccountInfo *customers) {
    int totalBalance = 0;

    printf("\nCustomer List:\n");
    printf("------------------------------\n");
    for (int i = 0; i < count; i++) {
        totalBalance += (customers + i)->balance;
        printf("Customer Name: %s\nBalance: %d\n", (customers + i)->name, (customers + i)->balance);
    }
    printf("\nTotal Balance: %d\n", totalBalance);
}

int main() {
    int customerCount;

    printf("Enter the number of customers: ");
    scanf("%d", &customerCount);

    struct AccountInfo *customers = (struct AccountInfo *)malloc(customerCount * sizeof(struct AccountInfo));

    if (customers == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (int i = 0; i < customerCount; i++) {
        printf("\nEnter details for Customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", (customers + i)->name);
        printf("Balance: ");
        scanf("%d", &(customers + i)->balance);
    }

    listAccounts(customerCount, customers);

    free(customers);

    return 0;
}