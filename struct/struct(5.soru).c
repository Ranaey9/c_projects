// Kullanıcıdan doğum tarihi ve şimdiki tarihi gün,ay,yıl şeklinde ayrı ayrı
// aldıktan sonra her iki tarih verisini YasHesapla isimli fonksiyona göndererek
// kullanıcının yaşını gün,ay,yıl olarak yazdırınız.
#include <stdio.h>
struct BirthDate {
    int day;
    int month;
    int year;
};

struct CurrentDate {
    int currentDay;
    int currentMonth;
    int currentYear;
};

int calculateAge(struct BirthDate birth, struct CurrentDate current) {
    int age = current.currentYear - birth.year;

    if (birth.month > current.currentMonth || 
       (birth.month == current.currentMonth && birth.day > current.currentDay)) {
        age--;
    }

    return age;
}

int main() {
    struct BirthDate birthDate;
    struct CurrentDate currentDate;

    printf("Enter your birth date (Day Month Year): ");
    scanf("%d %d %d", &birthDate.day, &birthDate.month, &birthDate.year);

    printf("Enter the current date (Day Month Year): ");
    scanf("%d %d %d", &currentDate.currentDay, &currentDate.currentMonth, &currentDate.currentYear);

    int result = calculateAge(birthDate, currentDate);

    printf("Your age: %d\n", result);

    return 0;
}