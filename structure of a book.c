//c structures
#include<stdio.h> //scanf(),printf()
#include<string.h> //strcpy()
struct book1{
    char title[30];
    char Author[30];
    char ISBN[13];
    float price;
 int publication_year;

}book1,book2;

int main(){
   //struct book book1,book2;
//strcpy(book1.author,"john smith");
printf("Enter the name of author: ");
scanf("%s", &book1.Author);
book1.price=48.99;
book1.publication_year=2022;
strcpy(book1.title,"introduction to c programming");
strcpy(book1.ISBN,"9780131103627");

printf("title: %s \n",book1.title);
printf("price: %f \n",book1.price);
printf("publication_year: %d \n",book1.publication_year);
printf("Author: %s \n",book1.Author);
printf("ISBN: %s \n",book1.ISBN);
return 0;
    
}