 //kod
// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct Node{
// //     int data;
// //     struct Node *sonraki;
// //     struct Node *onceki;
// // }Node;
// // Node* ilk=NULL;
// // Node* dugumolustur(int veri)
// // {
// //     Node* yeni=(Node*)malloc(sizeof(Node*));
// //     yeni->data=veri;
// //     yeni->sonraki=NULL;
// //     yeni->onceki=NULL;
// //     return yeni;
// // }
// // void sonaekle(int veri)
// // {
// //     Node *yeni=dugumolustur(veri);
// //     if(ilk==NULL)
// //     {
// //         ilk=yeni;
// //     }
// //     else{
// //         Node *gecici=ilk;
// //         while(gecici->sonraki!=NULL){
// //             gecici=gecici->sonraki;
// //         }
// //         gecici->sonraki=yeni;
// //         yeni->onceki=gecici;
// //     }
// //     printf("%d listeye eklendi.\n",veri);
// // }
// // void BasaEkle(int veri){
// // 	Node *yeni=dugumolustur(veri);
// // 	if(ilk==NULL){//liste boş ise
// // 		ilk=yeni;
// // 	}
// // 	else{
// // 		yeni->sonraki=ilk; //listenin mevcuttaki ilk elemanı yeni eklenecek düğümden sonra olacak
// //         ilk->onceki=yeni;    //Çift yönlülüğü sağlar.
// // 		ilk=yeni;//ilk düğüm de artık yeni düğümü göstersin             
// // 	}
// // 	printf("%d basa eklendi.\n",veri);
// // }
// // //araya eklemek konum bazlıda olabilir datanın değerine bağlıda olabilir .ikisinide yap.
// // void ArayaEkle(int veri,int aranan){ //aranan sayı listede varsa bu sayıdan sonra yeni veriyi ekle
// // 	Node *yeni=dugumolustur(veri);
// // 	if(ilk==NULL){
// // 		ilk=yeni;
// // 	}
// // 	else{
// // 		struct Node* gecici=ilk; //ilk düğümü işaret eden bir geçici düğüm tanımla
// // 		while(gecici!=NULL){ 
// // 			if(gecici->data==aranan){//sonrasına eklenecek düğümü bul
// // 				yeni->sonraki=gecici->sonraki;//yeni düğüm, eklenecek düğümden sonraki düğüme bağlanır
// //                                 if(gecici->sonraki!=NULL){   //aranan eleman en son eleman ise!!!!BUNA BAKKKKK
// //                                     gecici->sonraki->onceki=yeni;
// //                                 }
// // 				gecici->sonraki=yeni;//sonrasına eklenecek düğüm(gecici düğüm), yeni düğüme bağlanır
// //                                 yeni->onceki=gecici;
// // 			Node* dugumolustur(int veri);
// // {
// //     Node* yeni=(Node*)malloc(sizeof(Node*));
// //     yeni->data=veri;
// //     yeni->sonraki=NULL;
// //     yeni->onceki=NULL;
// //     return yeni;
// // }	printf("%d araya eklendi.\n",veri);
// // 				break;
// // 			}
// // 			gecici=gecici->sonraki;
// // 		}
// // 	}
// // }
// // void Sil(int aranan){ //aranan sayının ilk bulunduğu düğümü sil
// // 	if(ilk==NULL){
// // 		printf("Liste BOS!\n");
// // 		return;
// // 	}
// //         Node* gecici=ilk;
// // 	if(ilk->data==aranan){//Listenin başındaki ilk eleman silinecek
// // 		ilk=ilk->sonraki; //ilk in sonrasındaki 2.eleman yeni ilk eleman olsun          
// //                 ilk->onceki = NULL;
// //                 printf("%d silindi.\n",gecici->data);
// //                 free(gecici);//önceki ilk elemanı tuttuğumuz gecici düğümünü bellekten sil
// //                 return;
// // 	}
// // 	else{//Listenin sonunda veya arada ise
// // 		while(gecici!=NULL){ 
// // 			if(gecici->data==aranan){ //gecici'den sonraki eleman silinecek eleman ise
// // 				Node*silinecek=gecici; 
// // 				gecici->onceki->sonraki=gecici->sonraki;//silinecek elemandan önceki düğüm(geçici) ile sonraki düğümü bağla	
// //                                 if (gecici->sonraki != NULL){
// //                                     gecici->sonraki->onceki=gecici->onceki;	
// //                                 }
// // 				printf("%d silindi.\n",silinecek->data);
// // 				free(silinecek);
// // 				return; //sildikten sonra return; veya break; ile döngüden çıkılabilir
// // 			}
// // 			gecici=gecici->sonraki;//silmediyse bir sonraki düğüme geçip döngüye devam etsin
// // 		}
// // 	}	
// // }
// // void listele(){
// //     if(ilk==NULL){
// //         printf("Liste bos.\n");
// //     }
// //     Node*gecici=ilk;
// //     printf("Bagli liste bastan: ");
// //     while(gecici!=NULL)
// //     {
// //         printf("%d-> ",gecici->data);
// //         gecici=gecici->sonraki;
// //     }
// //     printf("NULL\n");
// // }
// // void listelesondan(){
// //     printf("Bagli liste elemanlari sondan: ");
// //     Node*gecici=ilk;
// //     while(gecici->sonraki!=NULL)
// //     {
// //         gecici=gecici->sonraki;
// //     }
// //     while(gecici!=NULL){
// //         printf("%d ->",gecici->data);
// //         gecici=gecici->onceki;
// //     }
// //     printf("NULL\n");
// // }
// // int main(){
// //     sonaekle(3);
// //     sonaekle(5);
// //     sonaekle(7);
// //     sonaekle(12);
// //     BasaEkle(1);
// //     ArayaEkle(6,5); 
// //     listele();  
// //     Sil(12);
// //     listelesondan();
// // }

//1.soru Çift yönlü bir bağlı liste tanımlayıp kullanıcıdan alınan sayıları liste sonuna ekleyiniz.
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};
struct node* ilk = NULL; 
void SonaEkle(int veri) {
    struct node* yeni = (struct node*)malloc(sizeof(struct node)); 
    yeni->data = veri;
    yeni->next = NULL;
    yeni->prev = NULL;
    if (ilk == NULL) { 
        ilk = yeni;
    } else { 
        struct node* gecici = ilk;
        while (gecici->next != NULL) { 
            gecici = gecici->next;
        }
        gecici->next = yeni; // Son düğümün next'ini yeni düğüme bağla
        yeni->prev = gecici; // Yeni düğümün prev'ini eski son düğüme bağla
    }
}
void ListeYazdirIleri() {
    struct node* gecici = ilk;
    printf("İleri Liste: ");
    while (gecici != NULL) {
        printf("%d -> ", gecici->data);
        gecici = gecici->next;
    }
    printf("NULL\n");
}
void ListeYazdirGeri() {
    struct node* gecici = ilk;
    if (gecici == NULL) { 
        printf("Liste boş!\n");
        return;
    }
    while (gecici->next != NULL) {
        gecici = gecici->next;
    }
    printf("Geri Liste: ");
    while (gecici != NULL) { 
        printf("%d -> ", gecici->data);
        gecici = gecici->prev;
    }
    printf("NULL\n");
}
int main() {
    int sayi;
    while (1) {
        printf("Bir sayi gir (-1 ile bitir): ");
        scanf("%d", &sayi);
        if (sayi == -1) 
            break;
        SonaEkle(sayi); 
    }

    printf("\nBağlı Liste (İleri):\n");
    ListeYazdirIleri(); 

    printf("\nBağlı Liste (Geri):\n");
    ListeYazdirGeri();

    return 0;
}

//2.soru Çift yönlü bağlı liste elemanlarını tersten yazdırınız.
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};
struct node* ilk = NULL; // Listenin başı
void SonaEkle(int veri) {
    struct node* yeni = (struct node*)malloc(sizeof(struct node));
    yeni->data = veri;
    yeni->next = NULL;
    yeni->prev = NULL;
    if (ilk == NULL) {
        ilk = yeni;
    } else {
        struct node* gecici = ilk;
        while (gecici->next != NULL) {
            gecici = gecici->next;
        }
        gecici->next = yeni;
        yeni->prev = gecici;
    }
}
void ListeyiTerstenYazdir() {
    struct node* gecici = ilk;
    if (gecici == NULL) {
        printf("Liste bos!\n");
        return;
    }
    // Önce sona kadar git
    while (gecici->next != NULL) {
        gecici = gecici->next;
    }
    printf("Tersten Liste: ");
    while (gecici != NULL) {
        printf("%d -> ", gecici->data);
        gecici = gecici->prev;
    }
    printf("NULL\n");
}
int main() {
    int sayi;

    while (1) {
        printf("Bir sayi gir (-1 ile bitir): ");
        scanf("%d", &sayi);
        if (sayi == -1)
            break;
        SonaEkle(sayi);
    }
    ListeyiTerstenYazdir();
    return 0;
}

// 3.soru Çift yönlü bağlı listede girilen sayının sondan kaçıncı sırada olduğunu bulunuz. (Örnek: 1, 4, 20, 50, 80 ise; 50 sayısı sondan 2. Sıradadır.) 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};
struct node* ilk = NULL;
void SonaEkle(int veri) {
    struct node* yeni = (struct node*)malloc(sizeof(struct node));
    yeni->data = veri;
    yeni->next = NULL;
    yeni->prev = NULL;

    if (ilk == NULL) {
        ilk = yeni;
    } else {
        struct node* gecici = ilk;
        while (gecici->next != NULL) {
            gecici = gecici->next;
        }
        gecici->next = yeni;
        yeni->prev = gecici;
    }
}
void ListeYazdir() {
    struct node* gecici = ilk;
    printf("Liste: ");
    while (gecici != NULL) {
        printf("%d -> ", gecici->data);
        gecici = gecici->next;
    }
    printf("NULL\n");
}
void SondanBul(int aranan) {
    if (ilk == NULL) {
        printf("Liste bos!\n");
        return;
    }
    struct node* gecici = ilk;
    while (gecici->next != NULL) {
        gecici = gecici->next;
    }
    int sira = 1; // sondan 1. eleman
    while (gecici != NULL) {
        if (gecici->data == aranan) {
            printf("%d sayisi sondan %d. siradadir.\n", aranan, sira);
            return;
        }
        gecici = gecici->prev;
        sira++;
    }
    printf("%d sayisi listede bulunamadi.\n", aranan);
}

int main() {
    int sayi, aranan;
    while (1) {
        printf("Sayi gir (-1 ile bitir): ");
        scanf("%d", &sayi);
        if (sayi == -1)
            break;
        SonaEkle(sayi);
    }
    ListeYazdir();
    printf("Hangi sayinin sondan sirasi bulunacak? ");
    scanf("%d", &aranan);
    SondanBul(aranan);
    return 0;
}


//4.soru Girilen bir kelimenin her harfini çift yönlü bağlı listenin bir düğümüne ekleyiniz. Daha sonra bu kelimenin palindrom olup olmadığını bulunuz.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char harf;
    struct node* next;
    struct node* prev;
};
struct node* ilk = NULL;
void SonaEkle(char c) {
    struct node* yeni = (struct node*)malloc(sizeof(struct node));
    yeni->harf = c;
    yeni->next = NULL;
    yeni->prev = NULL;

    if (ilk == NULL) {
        ilk = yeni;
    } else {
        struct node* gecici = ilk;
        while (gecici->next != NULL) {
            gecici = gecici->next;
        }
        gecici->next = yeni;
        yeni->prev = gecici;
    }
}
void PalindromKontrol() {
    if (ilk == NULL) {
        printf("Liste bos!\n");
        return;
    }
    // Baştan ve sondan karşılaştır
    struct node* bas = ilk;
    struct node* son = ilk;
    while (son->next != NULL) {
        son = son->next;
    }

    // Şimdi baştan ve sondan karşılaştır
    while (bas != NULL && son != NULL) {
        if (bas->harf != son->harf) {
            printf("Kelime PALINDROM DEGIL.\n");
            return;
        }
        if (bas == son || bas->next == son) {
            break;
        }
        bas = bas->next;
        son = son->prev;
    }

    printf("Kelime PALINDROM!\n");
}

void ListeYazdir() {
    struct node* gecici = ilk;
    printf("Liste: ");
    while (gecici != NULL) {
        printf("%c -> ", gecici->harf);
        gecici = gecici->next;
    }
    printf("NULL\n");
}
int main() {
    char kelime[100];
    printf("Bir kelime girin: ");
    scanf("%s", kelime);
    for (int i = 0; kelime[i]!='\0'; i++) {
        SonaEkle(kelime[i]);
    }
    ListeYazdir();
    PalindromKontrol();
    return 0;
}

//5.soru Bir sınıftaki N öğrenci için kullanıcıdan alınan öğrenci no,vize ve final notlarını tek yönlü bir bağlı listeye ekleyiniz. Her öğrencinin numarasını ve not ortalamasını, ayrıca sınıfın genel not ortalamasını yazdırınız. Daha sonra kullanıcının girdiği bir öğrenci numarasını listede arayıp eğer varsa öğrencinin vize,final notlarını yazdırınız.

#include <stdio.h>
#include <stdlib.h>
struct Ogrenci {
    int no;
    int vize;
    int final;
    struct Ogrenci* next;
};
struct Ogrenci* ilk = NULL; 
void OgrenciEkle(int no, int vize, int final) {
    struct Ogrenci* yeni = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    yeni->no = no;
    yeni->vize = vize;
    yeni->final = final;
    yeni->next = NULL;

    if (ilk == NULL) {
        ilk = yeni;
    } else {
        struct Ogrenci* gecici = ilk;
        while (gecici->next != NULL) {
            gecici = gecici->next;
        }
        gecici->next = yeni;
    }
}
void OgrencileriYazdirVeSinifOrtalamasi() {
    struct Ogrenci* gecici = ilk;
    int toplam = 0, sayac = 0;
    printf("\nOgrenci Listesi:\n");
    while (gecici != NULL) {
        float ort = (gecici->vize * 0.4) + (gecici->final * 0.6);
        printf("No: %d, Ortalama: %.2f\n", gecici->no, ort);
        toplam += ort;
        sayac++;
        gecici = gecici->next;
    }

    if (sayac > 0) {
        float sinifOrt = (float)toplam / sayac;
        printf("\nSinif Ortalamasi: %.2f\n", sinifOrt);
    } else {
        printf("Listede ogrenci yok!\n");
    }
}
void OgrenciAra(int arananno) {
    struct Ogrenci* gecici = ilk;
    while (gecici != NULL) {
        if (gecici->no == arananno) {
            printf("\nOgrenci Bulundu!\n");
            printf("No: %d, Vize: %d, Final: %d\n", gecici->no, gecici->vize, gecici->final);
            return;
        }
        gecici = gecici->next;
    }
    printf("\nOgrenci bulunamadi.\n");
}

int main() {
    int N, no, vize, final;
    printf("Kac ogrenci gireceksiniz? ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("\n%d. ogrenci no: ", i + 1);
        scanf("%d", &no);
        printf("Vize notu: ");
        scanf("%d", &vize);
        printf("Final notu: ");
        scanf("%d", &final);
        OgrenciEkle(no, vize, final);
    }
    OgrencileriYazdirVeSinifOrtalamasi();
    int arananno;
    printf("\nBilgilerini ogrenmek istediginiz ogrenci no: ");
    scanf("%d", &arananno);
    OgrenciAra(arananno);
    return 0;
}

//(!!)6.soru Tek yönlü bir bağlı listeyi yığıt şeklinde kullanıp elemanları ekledikten sonra tersten(sondan başa) yazdırınız.(Listedeki tüm düğümler sırayla yığıta eklenip sonrasında tekrar çekilip yazıldığında tersten yazdırılmış olur)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int data;
    struct Node* next;
}Node;

Node* top = NULL;

void push(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == NULL){
        printf("Stack is empty. Could not pop. \n");
        return;
    }
    printf("popped %d \n", top->data);
    top = top->next;
}

int main(){
    push(1);
    push(2);
    push(3);
    pop(); pop(); pop();

    pop();
    
    printf("\n");
    return 0;
}

//(!!) 7.soru Tek yönlü bağlı listeyi bir kuyruk yapısı olarak oluşturunuz. Bu liste bir sipariş takibi için kullanılacaktır. Her sipariş için müşteri adı, adresi ve ürün adı tutulmalıdır. Yeni sipariş geldiğinde bu bilgiler alınıp kuyruğa eklenecek, sipariş gönder seçildiğinde ise kuyruktan sıradaki sipariş çıkarılıp ekrana yazdırılacaktır. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char customerName[50];
    char address[50];
    char product[50];
} Siparis;

typedef struct Node {
    Siparis siparis;  
    struct Node* next;  
} Node;

Node* first = NULL;  // Kuyruğun başı
Node* last = NULL;   // Kuyruğun sonu

void siparisEkle(Siparis yeniSiparis) {
    Node* yeniDugum = (Node*)malloc(sizeof(Node));
    yeniDugum->siparis = yeniSiparis;
    yeniDugum->next = NULL;

    if (last == NULL) {
        first = last = yeniDugum;  // Kuyruk boşsa, first ve last aynı olur
    } else {
        last->next = yeniDugum;  // Kuyruğun sonuna yeni siparişi ekle
        last = yeniDugum;        // Kuyruğun sonunu güncelle
    }
}

// Kuyruktan bir siparişi çıkarmak
void siparisCikart() {
    if (first == NULL) {
        printf("Kuyruk boş. Sipariş çıkarılamaz.\n");
        return;
    }

    Node* temp = first;
    first = first->next;  // Kuyruğun başını bir sonraki sipariş yap

    // Eğer kuyruk boşsa, last'ı NULL yap
    if (first == NULL) {
        last = NULL;
    }

    free(temp); 
}

void kuyruguYazdir() {
    if (first == NULL) {
        printf("Kuyruk boş.\n");
        return;
    }

    Node* current = first;
    printf("Müşteri Adı\tAdres\tÜrün\n");
    printf("--------------------------------\n");

    while (current != NULL) {
        printf("%s\t%s\t%s\n", current->siparis.customerName, current->siparis.address, current->siparis.product);
        current = current->next;
    }
}

int main() {
    Siparis siparis1 = {"a", "b", "c"};
    Siparis siparis2 = {"d", "e", "f"};
    Siparis siparis3 = {"g", "h", "l"};

    siparisEkle(siparis1);
    siparisEkle(siparis2);
    siparisEkle(siparis3);

    printf("3 sipariş kuyruğa eklendikten sonra:\n");
    kuyruguYazdir();
    siparisCikart();
    printf("\n1 sipariş çıkarıldıktan sonra:\n");
    kuyruguYazdir();

    siparisCikart();
    printf("\n2. sipariş çıkarıldıktan sonra:\n");
    kuyruguYazdir();

    siparisCikart();
    printf("\n3. sipariş çıkarıldıktan sonra:\n");
    kuyruguYazdir();

    siparisCikart();  
    return 0;
}
