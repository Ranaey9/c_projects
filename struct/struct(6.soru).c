// Kullanıcıdan saat, dakika ve saniye olarak ayrı ayrı girilen iki zaman arasındaki farkı yine saat,dakika ve saniye cinsinden bulup ekrana yazdırınız.
#include <stdio.h>

#include <stdio.h>

struct BirthDate {
    int day;
    int month;
    int year;
};

struct CurrentDate {
    int day;
    int month;
    int year;
};

int calculateAge(struct BirthDate birth, struct CurrentDate current) {
    int age = current.year - birth.year;

    if (birth.month > current.month || 
        (birth.month == current.month && birth.day > current.day)) {
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
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    int age = calculateAge(birthDate, currentDate);

    printf("Your age: %d years\n", age);

    return 0;
}