//Bir şirkette çalışan personeller için adı,maaşı ve doğum tarihi(yıl,ay,gün) şeklinde bilgiler tutulmaktadır.
// 5 personel için bu bilgiler alındıktan sonra yaşı 25-40 arası olanların adı soyadı,maaşı ve yaşını ekrana listeleyiniz.(içiçe struct kullanılmalıdır)

#include <stdio.h>
struct BirthDate {
    int day;
    int month;
    int year;
};

struct Person {
    char firstName[20];
    char lastName[20];
    float salary;
    struct BirthDate birthDate;
};

int calculateAge(int birthYear) {
    int currentYear = 2025; 
    return currentYear - birthYear;
}

int main() {
    struct Person people[5];
    int numberOfPeople = 5;

    for (int i = 0; i < numberOfPeople; i++) {
        printf("\nEnter details for Person %d:\n", i + 1);
        printf("First Name: ");
        scanf("%s", people[i].firstName);
        printf("Last Name: ");
        scanf("%s", people[i].lastName);
        printf("Salary: ");
        scanf("%f", &people[i].salary);
        printf("Birth Date (Year Month Day): ");
        scanf("%d %d %d", &people[i].birthDate.year, &people[i].birthDate.month, &people[i].birthDate.day);
    }

    printf("\nPersonnel aged between 25 and 40 years:\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < numberOfPeople; i++) {
        int age = calculateAge(people[i].birthDate.year);
        if (age >= 25 && age <= 40) {
            printf("Name: %s %s, Salary: %.2f, Age: %d\n", 
                   people[i].firstName, people[i].lastName, people[i].salary, age);
        }
    }

    return 0;
}