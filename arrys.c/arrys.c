
//--dizi:kullanıcdan n sayısı alınız ve en küçük elemanı bul 0-100 arasında olacak
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     float numb[100],max;
//     printf("enter number");
//     scanf("%d", &n);
//     for (i=0;i<n;i++)
//     {printf("%d", i + 1);
//         scanf("%f:", &numb[i]);
//     }
//     max=numb[0];
//     for (i = 1; i < n; i++)
//     {
//         if (numb[0] < max)
//         {
//             max= numb[0];
//         }
//     }
//     printf("result:%.2f:", numb[0]);
//     return 0;
// }

//--0-10 arası sayıları bir diziye aktarıp diziyi yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int dizi[11], i;
//     for (i = 1; i < 10; i++)
//     {
//         dizi[i] = i;
//         printf("%d", dizi[i]);
//     }
//     return 0;
// }

//--1-100 arası çift sayıları bir diziye aktarıp dizi elemanlarını yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int dizi[51], i;
//     for (i = 0; i <= 50; i++)
//     {
//         dizi[i]=i*2;
//         printf("%d\n", dizi[i]);
//     }
//     return 0;
// }

//--Girilen 5 sayıyı bir diziye aktardıktan sonra ayrı bir döngüde dizi elemanlarını yazdırıp toplamlarını hesaplayınız.
// #include <stdio.h>
// int main()
// {
//     int i, sum = 0, numb[5];
//     for (i = 0; i < 5; i++)
//     {
//         printf("enter number");
//         scanf("%d", &numb[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("array elements:%d\n ", numb[i]);
//         sum += numb[i];
//     }
//     printf("result:%d\n", sum);
//     return 0;
// }

//--Kullanıcıdan alınan N adet sayıdan en büyük ve en küçük olanı bulunuz.
// #include <stdio.h>
// int main() {
//     int n, i;
//     printf("How many numbers do you want to enter? ");
//     scanf("%d", &n);
//     int numbers[n];
//     printf("Enter number 1: ");
//     scanf("%d", &numbers[0]);
//     int min = numbers[0];
//     int max = numbers[0];
//     for (i = 1; i < n; i++) {
//         printf("Enter number:");
//         scanf("%d", &numbers[i]);
//         if (numbers[i] < min) {
//             min = numbers[i];
//         }
//         if (numbers[i] > max) {
//             max = numbers[i];
//         }
//     }
//     printf("Max: %d\nMin: %d\n", max, min);
//     return 0;
// }

//---Bir tamsayı dizisini tersten yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int numb[7], i;
//     printf("1.enter a number");
//     for (i = 0; i < 7; i++)
//     {
//         scanf("%d", &numb[i]);
//     }
//     for (i = 6; i >= 0; i--)
//     {
//         printf(" %d ", numb[i]);
//     }
//     return 0;
// }

//--Bir dizinin elemanlarını başka bir diziye kopyalayıp yeni diziyi yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("sayi gir");
//     scanf("%d", &n);
//     int dizi[n];
//     for (i = 0; i < n; i++)
//     {
//         printf("dizinin boyutunu al");
//         scanf("%d", &dizi[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("numb:%d", dizi[i]);
//     }
//     return 0;
// }

//---Fibonacci serisini dizi kullanarak oluşturunuz.
// #include <stdio.h>
// int main()
// {
//     int i;
//     int fib[9];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (i = 2; i < 9; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         printf("%d ", fib[i]);
//     }
//     return 0;
// }

//---10 kişilik bir sınıfta öğrencilerin bir dersten aldığı notlar klavyeden girilecektir. Notlar girildikten sonra, sınıfın ortalamasını, sınıftaki en yüksek ve en düşük notu bulan programı yazınız.
// #include <stdio.h>
// int main()
// {
//     int dizi[10], i;
//     float sum = 0, average = 0;
//     for (i = 0; i < 10; i++)
//     {
//         printf("enter exam number:");
//         scanf("%d", &dizi[i]);
//         sum += dizi[i];
//     }
//         average = sum / 10;
//     int max, min;
//     max = dizi[0];
//     min = dizi[0];
//     for (i = 0; i < 10; i++)
//     {
//         if (dizi[i] > max)
//         {
//             max = dizi[i];
//         }
//         if (dizi[i] < min)
//         {
//             min = dizi[i];
//         }
//     }
//     printf("average:%.2f \n max score:%d \n min score:%d", average, max, min);
//     return 0;
// }

//--Verilen bir dizinin k.konumuna x değerini yerleştiriniz.(k ve x kullanıcıdan alınacaktır.)
// #include <stdio.h>
// int main()
// {
//     int dizi[] = {4, 1, 8, 2, 9};
//     int i, index, deger;
//     printf("index gir ");
//     scanf("%d", &index);
//     printf("sayi gir");
//     scanf("%d", &deger);
//     dizi[index] = deger;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", dizi[i]);
//     }
//     return 0;
// }

// ---Verilen bir dizinin k.konumuna x değerini yerleştiriniz.(k ve x kullanıcıdan alınacaktır.)
//  #include <stdio.h>
//  int main()
//  {
//      int konum, sayi, i, dizi[] = {9, 8, 7, 6, 5};
//      printf("sayi gir: ");
//      scanf("%d", &sayi);
//      printf("index: ");
//      scanf("%d", &konum);
//      for (i = 0; i < 5; i++)
//      {
//          if (dizi[i] == dizi[konum])
//              dizi[konum] = sayi;
//          printf("%d ", dizi[i]);
//      }
//      return 0;
//  }

//----Girilen N elemanlı bir tamsayı dizisinde istenen bir sayıyı arayıp konumunu yazdırınız.
// #include <stdio.h>
// int main() {
//     int N,konum, istenensayi = 0;
//     printf("Dizi eleman sayisini girin: ");
//     scanf("%d", &N);
//     int arr[N];
//     printf("Dizinin elemanlarini girin:\n");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Aranan sayiyi girin: ");
//     scanf("%d",&konum);
//     for (int i = 0; i < N; i++) {
//         if (arr[i] ==konum){
//             printf("Sayi %d konumunda bulundu (index: %d).\n",konum, i);
//             istenensayi = 1;
//             break;
//         }
//     }
//     if (!istenensayi) {
//         printf("Sayi dizide bulunamadi.\n");
//     }
//     return 0;
// }

//---Girilen N elemanlı bir tamsayı dizisinde istenen bir sayıyı arayıp konumunu yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int dizi[5];konum,hedef;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter lo number");
//         scanf("%d", &dizi[i]);
//     }
//     printf("ente"konum,);
//     scanf("%d",)konum,;
//     for (int i = 0; i < 5; i++)
//     {
//         if (dizi[i] ==konum),
//         {
//             printf("index:%d", i);
//         }
//     }
//     return 0;
// }

//---Girilen bir karakter dizisinde istenen bir harften kaç adet tekrarlandığını bulunuz.
// #include <stdio.h>
// int main()
// {
//     char word[10], letters;
//     int i, s = 0;
//     printf("enter sentence");
//     scanf("%s", &word);
//     printf("lutfen aranan harfi giriniz");
//     scanf(" %c", &letters);
//     for (i = 0; i < word[i] != '\0'; i++)
//     {
//         if (word[i] == letters)
//         {
//             s++;
//         }
//     }
//     printf("%d", s);
//     return 0;
// }

//---Girilen bir metindeki boşluk sayısını bulunuz.
// #include <stdio.h>
// int main()
// {
//     char text[100];
//     int i, s = 0;
//     printf("enter a text");
//     gets(text);
//     for (i = 0; text[i] != '\0'; i++)
//     {
//         if (text[i] == ' ')
//         {
//             s++;
//         }
//     }
//     printf("Number of spaces:%d", s);
//     return 0;
// }

//--Girilen bir cümledeki kelime sayısını bulunuz.
// #include <stdio.h>
// int main()
// {
//     char text[100];
//     int i, s = 1; // kelime boşluktan +1 şekilde artar
//     printf("ente a sentence\n");
//     gets(text);
//     for (i = 0; text[i] != '\0'; i++)
//     {
//         if (text[i] == ' ' && text[i+1] != ' ' && text[i+1] !='\0')//text[i]==' ' olsada olur sonuc olarak sayac önemli
//         { // ascıı arkada değerlendiyor
//           s++;
//         }
//     }
//     printf("word number:%d", s);
//     return 0;
// }

//---Girilen bir cümledeki Büyük harf,Küçük harf,Rakam ve diğer sembolleri bulunuz.
// #include <stdio.h>
// int main()
// {
//     char character[100], numb = 0, letter = 0, sembol = 0;
//     int i;
//     printf("enter a sentence: ");
//     gets(character);
//     for (i = 0; character[i] != '\0'; i++)
//     {
//         if (character[i] >= 'a' && character[i] <= 'z' || character[i] >= 'A' && character[i] <= 'Z')
//         {
//             letter++;
//         }
//         else if (character[i] >= '0' && character[i] <= '9')
//         {
//             numb++;
//         }
//         else
//         {
//             sembol++;
//         }
//     }
//     printf("letter:%d\nnumber:%d\nsembol:%d", letter, numb, sembol);
//     return 0;
// }

//---Girilen kelimenin palindrom olup olmadığını bulunuz.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int start = 0, end = 0, isPalindrome = 1;
//     printf("Bir kelime girin: ");
//     scanf("%s", str);
//     while (str[end] != '\0') {
//         end++;
//     }
//     end--;
//     // Palindrom kontrolü
//     while (start < end) {
//         if ((str[start] >= 'A' && str[start] <= 'Z')) {
//             str[start] = str[start] + 32;  // 'A' -> 'a'
//         }
//         if ((str[end] >= 'A' && str[end] <= 'Z')) {
//             str[end] = str[end] + 32;  // 'A' -> 'a'
//         }
//         if (str[start] != str[end]) {
//             isPalindrome = 0;
//             break;
//         }
//         start++;
//         end--;
//     }
//     if (isPalindrome) {
//         printf("'%s' kelimesi bir palindromdur.\n", str);
//     } else {
//         printf("'%s' kelimesi bir palindrom değildir.\n", str);
//     }
//     return 0;
// }

// int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; Verilen sayı dizisinde çift sayıları tek sayıya (kendisinden bir fazla olan sayıya) çeviren program kodunu yazınız. (20=>21, 60=>61 şeklinde olacaktır.
// #include <stdio.h>
// int main()
// {
//     int arr[14] = {20, 60, 45, 42, 23, 24, 26, 125, 66, 55, 145, 50, 30, 40}, i;
//     for (i = 0; i < 14; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             arr[i] = arr[i] + 1;
//         }
//         printf("%d=>%d   ", arr[i], arr[i] + 1);
//     }
//     return 0;
// }

// int sayilar[]=; Verilen sayı dizisinde yan yana olan çift sayı ikilisi bulan program (20-60, 24-26, 50-30, 30-40 şeklinde 4 adet olarak ekrana yazdırılacaktır.)
// #include <stdio.h>
// int main()
// {
//     int i, arr[] = {20, 60, 45, 42, 23, 24, 26, 125, 66, 55, 145, 50, 30, 40}, s = 0;
//     for (i = 0; i < 14; i++)
//     {
//         if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)
//         {
//             printf("%d-%d ", arr[i], arr[i + 1]);
//         }
//     }
//     return 0;
// }

// Kullanıcıdan alınan bir kelimedeki harfleri Harf isimli diziye, rakamları ise Rakam isimli diziye aktardıktan sonra bu dizileri sırayla ekrana yazdıran programın kodunu yazınız
// #include <stdio.h>
// int main()
// {
//     char character[50];
//     int l = 0, n = 0;
//     printf("enter the sentece");
//     gets(character);
//     for (int i = 0; character[i] != '\0'; i++)
//     {
//         if (character[i] >= 'a' && character[i] <= 'z' || character[i] >= 'A' && character[i] <= 'Z')
//         {
//             printf("letter:%c\n", character[i]);
//             l++;
//         }
//         if (character[i] >= '0' && character[i] <= '9')
//         {
//             printf("number:%c\n", character[i]);
//             n++;
//         }
//     }
//     return 0;
// }

// 10 elemanlı bir tamsayı dizisindeki elemanları ve her bir elemanın değeri kadar yıldız oluşturarak yazdırınız.
// #include <stdio.h>
// int main()
// {
//     int arr[6] = {6, 5, 4, 3, 2, 1}, i, j;
//     for (i = 0; i < 6; i++)
//     {
//         printf("index:%d: %d", i, arr[i]);
//         for (j = 0; j < arr[i]; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1,den  N ye kadar sayılar yazdır dizi
//  #include <stdio.h>
//  int main()
//  {
//      int n, i;
//      printf("sayi gir");
//      scanf("%d", &n);
//      int dizi[n];
//      for (i = 0; i < n; i++)
//      {
//          dizi[i] = i;
//      }
//      for (i = 1; i < n; i++)
//      {
//          printf("%d ", dizi[i]);
//      }
//      return 0;
//  }

// DİZİ Verilen bir sayının tam bölenlerini bulan algoritma
//  #include <stdio.h>
//  int main()
//  {
//      int arr[100], i, numb;
//      printf("sayi gir");
//      scanf("%d", &numb);
//      for (i = 1; i <= numb; i++)
//      {
//          if (numb% i == 0)
//          {
//              arr[i] = i;
//              printf("%d", arr[i]);
//          }
//      }
//      return 0;
//  }

// DİZİ Girilen bir sayının basamak değerlerini yazdırınız
// #include <stdio.h>
// int main()
// {
//     int digit[100], numb, i, s = 0;
//     printf("enter number");
//     scanf("%d", &numb);
//     for (i = 0; numb > 0; i++)
//     {
//         digit[i] = numb % 10;
//         numb /= 10;
//         s++;
//     }
//     for (int j = s - 1; j >= 0; j--)
//     {
//         printf("%d  ", digit[j]);
//     }
//     return 0;
// }

// --DİZİ Girilen n adet sayı içerisinden pozitif, negatif ve sıfır sayısının kaçar adet tekrarlandığını bulunuz.
//  #include <stdio.h>
//  int main()
//  {
//  	int dizi[5],i,pozitif=0,negatif=0,sifir=0;
//  for(i=0;i<5;i++)
//  {
//  	printf("%d. sayiyi gir:",i+1);
//  	scanf("%d",&dizi[i]);
//  	if(dizi[i]>0)
//  	{
//  	printf("%d pozitiftir\n",dizi[i]);
//  	pozitif++;
//  	}
//      else if(dizi[i]<0)
//  	{
//  	negatif++;
//  		printf("%d negatiftir\n",dizi[i]);}
//  	else
//  	{
//  	sifir++;
//  		printf("%d sifirdir\n",dizi[i]);}
//  }
//  	printf("toplam %d adet pozitif\n%d adet negatif\n%d adet sifir vardir ",pozitif,negatif,sifir);
//  return 0;
//  }
