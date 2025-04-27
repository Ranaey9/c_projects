
// 1. Tam sayılardan oluşan tek yönlü bir bağlı liste oluşturup kullanıcıdan alınan sayıları listeye ekleyiniz. -1 girildiğinde ise işlemi sonlandırıp listeyi yazdırınız.
// #include <stdio.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// void sonaekle(int veri)
// {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node *));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL)
//     {
//         ilk = yeni;
//     }
//     else
//     {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL)
//         {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
//     printf("%d sona eklendi\n", veri);
// }
// void Listele()
// {
//     printf("Liste: ");
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         printf("%d->", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     int sayi;
//     while (1)
//     {
//         printf("sayi gir: ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//         {
//             break;
//         }
//         sonaekle(sayi);
//     }
//     Listele();
//     return 0;
// }

// 2.Listedeki düğüm sayısını bulunuz.
// #include <stdio.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// void sonaekle(int veri)
// {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node *));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL)
//     {
//         ilk = yeni;
//     }
//     else
//     {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL)
//         {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
//     printf("%d sona eklendi\n", veri);
// }
// void Listele()
// {
//     int s = 0;
//     printf("Liste: ");
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         printf("%d->", gecici->data);
//         s++;
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
//     printf("Toplam %d düğüm vardır.\n", s);
// }
// int main()
// {
//     int sayi;
//     while (1)
//     {
//         printf("sayi gir: ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//         {
//             break;
//         }
//         sonaekle(sayi);
//     }
//     Listele();
//     return 0;
// }

// 3.Listedeki sayıların toplamını ve ortalamasını bulunuz.
// #include <stdio.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// void sonaekle(int veri)
// {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node)); // düzeltildi
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL)
//     {
//         ilk = yeni;
//     }
//     else
//     {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL)
//         {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
//     printf("%d sona eklendi\n", veri);
// }
// void orttophesapla()
// {
//     int sum = 0, s = 0;
//     float ort;
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         sum += gecici->data;
//         s++;
//         gecici = gecici->next;
//     }
//     ort = sum / s;
//     printf("Ortalama: %.2f\n", ort);
// }
// void Listele()
// {
//     printf("Liste: ");
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     int sayi;
//     while (1)
//     {
//         printf("Sayi gir : ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//             break;
//         sonaekle(sayi);
//     }
//     Listele();
//     orttophesapla();
//     return 0;
// }

// 4.Kullanıcıdan alınan bir sayının listede kaçıncı sırada olduğunu bulunuz.(Örneğin; 4, 7, 2, 5 olan bir listede sayı:2 girilmişse sıra:3 olur)
// #include <stdlib.h>
// #include <stdio.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// void sonaekle(int veri)
// {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL)
//     {
//         ilk = yeni;
//     }
//     else
//     {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL)
//         {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
// }
// void bul(int aranan)
// {
//     int s = 0;
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         if (gecici->data == aranan)
//         {
//             printf("%d :aranan sayi %d. inexte bulundu", aranan, s);
//             return;
//         }
//         gecici = gecici->next;
//         s++;
//     }
// }
// void listele()
// {
//     struct node *gecici = ilk;
//     printf("Liste: ");
//     while (gecici != NULL)
//     {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     int aranan, sayi;
//     while (1)
//     {
//         printf("sayi dizisini gir: ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//         {
//             break;
//         }
//         sonaekle(sayi);
//     }
//     listele();
//     printf("aranan sayiyi gir: ");
//     scanf("%d", &aranan);
//     bul(aranan);
//     return 0;
// }

// 5.Kullanıcının girdiği sırada(konumda) bulunan sayıyı ekrana yazdırınız.(Örneğin; 4, 7, 2, 5 olan bir listede sıra:2 girilmişse sayı:7 olur)
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node *sonraki;
// };
// struct node *ilk = NULL;
// // Bağlı listeye sona ekleme fonksiyonu
// void sonaekle(int sayi) {
//     struct node *yenidugum = (struct node*)malloc(sizeof(struct node));
//     yenidugum->data = sayi;
//     yenidugum->sonraki = NULL;
//     if (ilk == NULL) {
//         ilk = yenidugum;
//     } else {
//         struct node *gecici = ilk;
//         while (gecici->sonraki != NULL) {
//             gecici = gecici->sonraki;
//         }
//         gecici->sonraki = yenidugum;
//     }
// }
// // Bağlı listedeki belirli sıradaki sayıyı bulan fonksiyon
// int siradakiSayi(int sira) {
//     struct node *gecici = ilk;
//     int index = 1;  // Liste 1. sıradan başlıyor
//     while (gecici != NULL) {
//         if (index == sira) {
//             return gecici->data;  // İstenen sıradaki sayı bulundu
//         }
//         gecici = gecici->sonraki;
//         index++;
//     }
//     return -1;  // Eğer sıra listede yoksa -1 döndür
// }
// // Bağlı listeyi yazdıran fonksiyon
// void liste() {
//     struct node *gecici = ilk;
//     printf("Bağlı Liste: ");
//     if (gecici == NULL) {
//         printf("Liste boş!\n");
//         return;
//     }
//     while (gecici != NULL) {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->sonraki;
//     }
//     printf("NULL\n");
// }
// int main() {
//     int sayi, sira;
//     printf("4 sayı giriniz:\n");
//     for (int i = 0; i < 4; i++) {
//         scanf("%d", &sayi);
//         sonaekle(sayi);
//     }
//     liste();
//     // Kullanıcıdan kaçıncı sıradaki sayıyı görmek istediğini alma
//     printf("Hangi sıradaki sayıyı görmek istiyorsunuz? ");
//     scanf("%d", &sira);
//     int bulunanSayi = siradakiSayi(sira);
//     if (bulunanSayi != -1) {
//         printf("%d. sıradaki sayı: %d\n", sira, bulunanSayi);
//     } else {
//         printf("Geçersiz sıra!\n");
//     }
//     return 0;
// }

// 6.Kullanıcı tarafından -1 girilene kadar girilen sayıları tek yönlü bağlı listeye küçükten büyüğe sıralı olarak ekleyiniz. -1 girildiğinde ise işlemi sonlandırıp listeyi yazdırınız.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* ilk = NULL;
// void basaekle(int data){
//     struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));
//     yeni->data = data;
//     yeni->next = ilk;
//     ilk = yeni;
// }
// void arayaekle(struct Node* onceki, int veri) {
//     struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));
//     yeni->data = veri;
//     yeni->next = onceki->next; // Yeni düğümün next'ini, öncekinin next'ine bağla
//     onceki->next = yeni;  // Önceki düğümün next'ini yeni düğüme bağla
// }
// void printList(){
//     printf("\nLinked list: ");
//     struct Node* gecici = ilk;
//     while(gecici != NULL){
//         printf("%d->", gecici->data);
//         gecici = gecici->next;
//     }
// printf("\n");
// }
// int main(){
//     int input;
//     while(1){
//         printf("enter a number: ");
//         scanf("%d", &input);
//         if(input == -1) {
//         break;
//     }
//         if(ilk == NULL)
//         basaekle(input);
//         else{
//             struct Node* gecici = ilk;
//             if(input < gecici->data)
//             basaekle(input);
//             else{
//                 while(1){
//                     if((gecici->next == NULL) || (gecici->next->data > input)){
//                         arayaekle(gecici, input);
//                         break;
//                     }
//                     gecici = gecici->next;
//                 }
//             }
//         }
//         printList();
//     }
//     printf("\n");
//     return 0;
// }

// 7.Tek yönlü bir bağlı listede kullanıcının girdiği konumdaki(sıradaki) sayıyı kullanıcıdan alınan sayı ile değiştiriniz.(Örneğin; 4, 7, 2, 5 olan bir listede sıra:2 yeni sayı:1 ise yeni liste:4, 1, 2, 5 olacaktır
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// void sonaekle(int veri)
// {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL)
//     {
//         ilk = yeni;
//     }
//     else
//     {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL)
//         {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
// }
// void bul(int aranan, int yenideger)
// {
//     int s = 0;
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         if (s == aranan)
//         {
//             gecici->data = yenideger;
//             return;
//         }
//         gecici = gecici->next;
//         s++;
//     }
//     printf("sıra:%d yeni sayı:%d", s, yenideger);
// }
// void listele()
// {
//     struct node *gecici = ilk;
//     printf("Liste: ");
//     while (gecici != NULL)
//     {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     int index, sayi, yenideger;
//     while (1)
//     {
//         printf("sayi gir: ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//         {
//             break;
//         }
//         sonaekle(sayi);
//     }
//     listele();
//     printf("\n");
//     printf("indexi gir: ");
//     scanf("%d", &index);
//     printf("istenen sayi gir: ");
//     scanf("%d", &yenideger);
//     bul(index, yenideger);
//     printf("\n");
//     listele();
//     return 0;
// }

// 8.Kullanıcıdan alınan 1.sayıyı bağlı listede bulup yine kullanıcıdan alınan 2.sayı ile değiştiriniz.(birden fazla aynı sayıdan varsa tümünü değiştirmelidir) (4,7,2,5,4 olan listede aranan:4 yeni sayı:1 ise yeni liste: 1,7,2,5,1)
//  #include <stdio.h>
//  #include <stdlib.h>
//  struct node {
//      int data;
//      struct node *sonraki;
//  };
//  struct node *ilk = NULL;
//  // Bağlı listeye sona ekleme fonksiyonu
//  void sonaEkle(int sayi) {
//      struct node *yenidugum = (struct node*)malloc(sizeof(struct node));
//      yenidugum->data = sayi;
//      yenidugum->sonraki = NULL;
//      if (ilk == NULL) {
//          ilk = yenidugum;
//      } else {
//          struct node *gecici = ilk;
//          while (gecici->sonraki != NULL) {
//              gecici = gecici->sonraki;
//          }
//          gecici->sonraki = yenidugum;
//      }
//  }
//  // Bağlı listedeki belirli bir sayıyı yeni sayıyla değiştiren fonksiyon
//  void sayiDegistir(int eskiSayi, int yeniSayi) {
//      struct node *gecici = ilk;
//      int bulundu = 0; // Sayının listede olup olmadığını takip eder
//      while (gecici != NULL) {
//          if (gecici->data == eskiSayi) {
//              gecici->data = yeniSayi;
//              bulundu = 1;
//          }
//          gecici = gecici->sonraki;
//      }
//      if (!bulundu) {
//          printf("Sayı bulunamadı!\n");
//      }
//  }
//  // Bağlı listeyi yazdıran fonksiyon
//  void liste() {
//      struct node *gecici = ilk;
//      printf("Bağlı Liste: ");
//      if (gecici == NULL) {
//          printf("Liste boş!\n");
//          return;
//      }
//      while (gecici != NULL) {
//          printf("%d -> ", gecici->data);
//          gecici = gecici->sonraki;
//      }
//      printf("NULL\n");
//  }
//  int main() {
//      int sayi, eskiSayi, yeniSayi;
//      printf("Sayıları giriniz (-1 ile çıkış yapabilirsiniz):\n");
//      while (1) {
//          scanf("%d", &sayi);
//          if (sayi == -1) {
//              break; // -1 girildiğinde döngüden çık
//          }
//          sonaEkle(sayi);
//      }
//      liste(); // İlk listeyi yazdır
//      // Kullanıcıdan değiştirilecek sayı ve yeni sayıyı alma
//      printf("Değiştirmek istediğiniz sayıyı giriniz: ");
//      scanf("%d", &eskiSayi);
//      printf("Yeni sayıyı giriniz: ");
//      scanf("%d", &yeniSayi);
//      sayiDegistir(eskiSayi, yeniSayi); // Sayıyı değiştir
//      liste(); // Güncellenmiş listeyi yazdır
//      return 0;
//  }

// 9.Bağlı listeyi özyinelemeli(recursive) olarak yazdırınız.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
// 	int data;
// 	struct node *sonraki;
// };
// struct node *ilk = NULL;
// // Bağlı listeye sona ekleme fonksiyonu
// void sonaEkle(int sayi)
// {
// 	struct node *yenidugum = (struct node *)malloc(sizeof(struct node));
// 	yenidugum->data = sayi;
// 	yenidugum->sonraki = NULL;
// 	if (ilk == NULL)
// 	{
// 		ilk = yenidugum;
// 	}
// 	else
// 	{
// 		struct node *gecici = ilk;
// 		while (gecici->sonraki != NULL)
// 		{
// 			gecici = gecici->sonraki;
// 		}
// 		gecici->sonraki = yenidugum;
// 	}
// }
// // Bağlı listeyi özyinelemeli (recursive) yazdıran fonksiyon
// void yazdir(struct node *gecici)
// {
// 	printf("%d -> ", gecici->data);
// 	yazdir(gecici->sonraki); // Sonraki düğüm için fonksiyonu tekrar çağır
// }
// int main()
// {
// 	int sayi;
// 	printf("Sayıları giriniz (-1 ile çıkış yapabilirsiniz):\n");
// 	while (1)
// 	{
// 		scanf("%d", &sayi);
// 		if (sayi == -1)
// 		{
// 			break; // -1 girildiğinde döngüden çık
// 		}
// 		sonaEkle(sayi);
// 	}
// 	printf("Bağlı Liste: ");
// 	yazdir(ilk); // Özyinelemeli olarak listeyi yazdır
// 	return 0;
// }

// 10.Bağlı listeyi özyinelemeli(recursive) olarak tersten(sondan başa) yazdırınız.
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node {
//     int data;
//     struct node* next;
// } node;
// node* ilk = NULL;
// node* tersIlk = NULL;
// void sonaEkle(int veri) {
//     node* yeni = (node*)malloc(sizeof(node));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL) {
//         ilk = yeni;
//     } else {
//         node* gecici = ilk;
//         while (gecici->next != NULL) {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
//     printf("%d eklendi\n", veri);
// }
// void basaEkle( int veri) {
//     node* yeni = (node*)malloc(sizeof(node));
//     yeni->data = veri;
//     yeni->next = NULL;
//     ilk = yeni;
// }
// // Recursive olarak listeyi ters listeye kopyalayan fonksiyon
// void ListeaRecursive(node* gecici) {
//     if (gecici == NULL)
//         return;
//     basaEkle(&tersIlk, gecici->data);
//     ListeRecursive(gecici->next);
// }
// void ListeyiYazdir(node* bas) {
//     node* gecici = bas;
//     while (gecici != NULL) {
//         printf("%d->", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// int main() {
//     int dizi;
//     while (1) {
//         printf("Sayi gir (-1 ile bitir): ");
//         scanf("%d", &dizi);
//         if (dizi == -1)
//             break;
//         sonaEkle(dizi);
//     }
//     printf("\nOrijinal liste:\n");
//     ListeyiYazdir(ilk);
//     ListeRecursive(ilk);
//     printf("\nTers liste:\n");
//     ListeyiYazdir(tersIlk);
//     return 0;
// }

// 11.Bağlı listeyi ikinci bir bağlı liste kullanarak tersten yazdırınız.(İlk listedeki her eleman ikinci listenin sürekli başına eklenmelidir)
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// struct node *tersIlk = NULL;
// void sonaEkle(int veri) {
//     struct node* yeni = (struct node *)malloc(sizeof(struct node));
//     if (yeni == NULL) {
//         printf("Bellek hatasi!\n");
//         return;
//     }
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL) {
//         ilk = yeni;
//     } else {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL) {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
// }
// // İkinci listeye başa ekleme (ters kopyalama için)
// void tersListeyeBasaEkle(int veri) {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node));
//     if (yeni == NULL) {
//         printf("Bellek hatasi!\n");
//         return;
//     }
//     yeni->data = veri;
//     yeni->next = tersIlk;
//     tersIlk = yeni;
// }
// // Listeyi ekrana yazdır
// void listele(struct node *baslangic) {
//     struct node *gecici = baslangic;
//     while (gecici != NULL) {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// // İlk listedeki elemanları ikinci listeye başa ekleyerek kopyala
// void tersKopyala() {
//     struct node *gecici = ilk;
//     while (gecici != NULL) {
//         tersListeyeBasaEkle(gecici->data);
//         gecici = gecici->next;
//     }
// }
// int main() {
//     int sayi;
//     printf("Sayi girin (-1 girerek bitirin):\n");
//     while (1) {
//         printf("Sayi: ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//             break;
//         sonaEkle(sayi);
//     }
//     printf("\nOrijinal liste:\n");
//     listele(ilk);
//     tersKopyala();
//     printf("\nTers liste:\n");
//     listele(tersIlk);
//     return 0;
// }

// 12. Bağlı listedeki sayıların ortalamasından küçük olanları listeden siliniz.
// #include <stdio.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *ilk = NULL;
// void Ekle(int veri)
// {
//     struct node *yeni = (struct node *)malloc(sizeof(struct node));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL)
//     { // Liste boşsa ilk düğüm olur
//         ilk = yeni;
//     }
//     else
//     {
//         struct node *gecici = ilk;
//         while (gecici->next != NULL)
//         {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni; // Son düğüme bağla
//     }
// }
// void silme(int aranan)
// {
//     if (ilk == NULL)
//     {
//         printf("bos\n");
//         return;
//     }
//     struct node *gecici = ilk;
//     if (ilk->data == aranan)
//     {
//         ilk = ilk->next;
//         printf("silindi: %d\n", gecici->data);
//         free(gecici);
//         return;
//     }
//     struct node *silencek;
//     while (gecici->next != NULL)
//     {
//         if (gecici->next->data == aranan)
//         {
//             silencek = gecici->next;
//             gecici->next = silencek->next;
//             printf("%d: silindi\n", silencek->data);
//             free(silencek);
//             return;
//         }
//         gecici = gecici->next;
//     }
//     printf("%d bulunamadi.\n", aranan);
// }
// void orthesapla()
// {
//     int sum = 0, s = 0;
//     float ort;
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         sum += gecici->data;
//         s++;
//         gecici = gecici->next;
//     }
//     ort = sum / s;
//     while (gecici != NULL)
//     {
//         if (gecici->data < ort)
//         {
//             printf("%d ", gecici->data);
//         }
//         gecici = gecici->next;
//     }
//     printf("\n");
// }
// void ListeYazdir()
// {
//     struct node *gecici = ilk;
//     while (gecici != NULL)
//     {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     int sayi, aranan;
//     // Kullanıcıdan veri al ve listeye ekle
//     while (1)
//     {
//         printf("Bir sayi gir (-1 ile bitir): ");
//         scanf("%d", &sayi);
//         if (sayi == -1)
//         {
//             break;
//         }
//         Ekle(sayi);
//     }
//     printf("\nBağlı Liste:\n");
//     ListeYazdir();
//     // Kullanıcıdan silmek istediği sayıyı al
//     printf("\nSilmek istediginiz sayiyi girin: ");
//     scanf("%d", &aranan);
//     silme(aranan);
//     printf("\nGüncellenmiş Liste:\n");
//     ListeYazdir();
//     // Ortalama hesapla ve küçükleri yazdır
//     orthesapla();
//     return 0;
// }

// 13.Verilen sayının bulunduğu tüm düğümleri siliniz. (Listenin başında,ortasında veya sonunda aynı sayının olduğu tüm düğümleri siliniz.).
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node* next;
// };
// struct node* ilk = NULL;
// void Ekle(int veri) {
//     struct node* yeni = (struct node*)malloc(sizeof(struct node));
//     yeni->data = veri;
//     yeni->next = NULL;
//     if (ilk == NULL) {
//         ilk = yeni;
//     } else {
//         struct node* gecici = ilk;
//         while (gecici->next != NULL) {
//             gecici = gecici->next;
//         }
//         gecici->next = yeni;
//     }
// }
// void TumunuSil(int aranan) {
//     struct node* gecici = ilk;
//     struct node* onceki = NULL;
//     int silinenSayi = 0;
//     while (gecici != NULL) {
//         if (gecici->data == aranan) {
//             // Silinecek düğüm baştaysa
//             if (gecici == ilk) {
//                 ilk = gecici->next;
//                 printf("Silindi: %d\n", gecici->data);
//                 free(gecici);
//                 gecici = ilk;
//             } else {
//                 // Silinecek düğüm ortada veya sondaysa
//                 onceki->next = gecici->next;
//                 printf("Silindi: %d\n", gecici->data);
//                 free(gecici);
//                 gecici = onceki->next;
//             }
//             silinenSayi++;
//         } else {
//             // Eşleşmediği için ilerliyoruz
//             onceki = gecici;
//             gecici = gecici->next;
//         }
//     }
//     if (silinenSayi == 0) {
//         printf("%d bulunamadi.\n", aranan);
//     }
// }
// void ListeYazdir() {
//     struct node* gecici = ilk;
//     while (gecici != NULL) {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->next;
//     }
//     printf("NULL\n");
// }
// int main() {
//     int sayi, aranan;
//     while (1) {
//         printf("Bir sayi gir (-1 ile bitir): ");
//         scanf("%d", &sayi);
//         if (sayi == -1) {
//             break;
//         }
//         Ekle(sayi);
//     }
//     printf("\nListe:\n");
//     ListeYazdir();
//     printf("\nSilmek istediginiz sayiyi girin: ");
//     scanf("%d", &aranan);
//     TumunuSil(aranan);
//     printf("\nGüncellenmiş Liste:\n");
//     ListeYazdir();
//     return 0;
// }

// 14. Verilen konumdan sonraki tüm düğümleri siliniz.
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* sonraki;
// };
// struct Node* ilk = NULL;
// void sonaEkle(int veri) {
//     struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));
//     yeni->data = veri;
//     yeni->sonraki = NULL;
//     if (ilk == NULL) {
//         ilk = yeni;
//     } else {
//         struct Node* gecici = ilk;
//         while (gecici->sonraki != NULL) {
//             gecici = gecici->sonraki;
//         }
//         gecici->sonraki = yeni;
//     }
// }
// void listeYazdir() {
//     struct Node* gecici = ilk;
//     while (gecici != NULL) {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->sonraki;
//     }
//     printf("NULL\n");
// }
// void konumdanSonrasiniSil(int konum) {
//     struct Node* gecici = ilk;
//     int index = 1;
//     while (gecici != NULL && index < konum) {
//         gecici = gecici->sonraki;
//         index++;
//     }
//     if (gecici == NULL || gecici->sonraki == NULL) {
//         printf("Geçersiz konum veya zaten son düğümdeyiz.\n");
//         return;
//     }
//     struct Node* silinecek = gecici->sonraki;
//     gecici->sonraki = NULL;
//     while (silinecek != NULL) {
//         struct Node* temp = silinecek;
//         silinecek = silinecek->sonraki;
//         printf("%d silindi.\n", temp->data);
//         free(temp);
//     }
// }
// int main() {
//     int dizi[] = {1, 2, 3, 4, 5, 6};
//     int boyut = sizeof(dizi) / sizeof(dizi[0]);
//     for (int i = 0; i < boyut; i++) {
//         sonaEkle(dizi[i]);
//     }
//     printf("Orijinal Liste:\n");
//     listeYazdir();
//     int konum;
//     printf("Hangi konumdan sonraki düğümleri silmek istiyorsunuz? ");
//     scanf("%d", &konum);
//     konumdanSonrasiniSil(konum);
//     printf("Güncellenmiş Liste:\n");
//     listeYazdir();
//     return 0;
// }

// 15.Bağlı listedeki tüm düğümleri siliniz.
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* sonraki;
// };
// struct Node* ilk = NULL;
// void sonaEkle(int veri) {
//     struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));
//     yeni->data = veri;
//     yeni->sonraki = NULL;
//     if (ilk == NULL) {
//         ilk = yeni;
//     } else {
//         struct Node* gecici = ilk;
//         while (gecici->sonraki != NULL) {
//             gecici = gecici->sonraki;
//         }
//         gecici->sonraki = yeni;
//     }
// }
// void listeYazdir() {
//     struct Node* gecici = ilk;
//     while (gecici != NULL) {
//         printf("%d -> ", gecici->data);
//         gecici = gecici->sonraki;
//     }
//     printf("NULL\n");
// }
// void tumDugumleriSil() {
//     struct Node* gecici = ilk;
//     while (gecici != NULL) {
//         struct Node* silinecek = gecici;
//         gecici = gecici->sonraki;
//         printf("%d silindi.\n", silinecek->data);
//         free(silinecek);
//     }
//     ilk = NULL;
// }
// int main() {
//     int dizi[] = {1, 2, 3, 4, 5, 6};
//     int boyut = sizeof(dizi) / sizeof(dizi[0]);
//     for (int i = 0; i < boyut; i++) {
//         sonaEkle(dizi[i]);
//     }
//     printf("Orijinal Liste:\n");
//     listeYazdir();
//     printf("Tüm düğümler siliniyor...\n");
//     tumDugumleriSil();
//     printf("Güncellenmiş Liste:\n");
//     listeYazdir();
//     return 0;
// }

