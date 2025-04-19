// 2.soru => Bir sınıftaki 10 öğrenci için öğrenci no,vize ve final notları tutulacaktır. Bu işlem için dizinin her bir elemanında öğrencinin numarası,vize ve final notu olacak şekilde 10 elemanlı bir dizi oluşturulup değerleri kullanıcıdan alınacak ve bu dizi Notcalculate fonksiyonuna gönderilip her öğrencinin ortsı ve öğrenci numarası, ayrıca sınıfın genel not ortsı ekrana yazdırılacaktır.
#include <stdio.h>
#include <stdio.h>

struct Notes {
    int studentNumber;
    int visa;
    int final;
};

void calculateAndPrint(struct Notes notes[]) {
    float totalAverage = 0;
    printf("\nStudent Grades and Averages:\n");
    printf("--------------------------------\n");

    for (int i = 0; i < 5; i++) {
        float average = (notes[i].visa * 0.4) + (notes[i].final * 0.6);
        totalAverage += average;
        printf("Student Number: %d\tAverage: %.2f\n", notes[i].studentNumber, average);
    }

    totalAverage /= 5; 
    printf("\nClass Average: %.2f\n", totalAverage);
}

int main() {
    struct Notes notes[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Student Number: ");
        scanf("%d", &notes[i].studentNumber);
        printf("Visa Grade: ");
        scanf("%d", &notes[i].visa);
        printf("Final Grade: ");
        scanf("%d", &notes[i].final);
    }

    calculateAndPrint(notes);

    return 0;
}