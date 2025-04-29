// #include <stdio.h>
// int main(){

//    // String

//    float a; /*undeclared variable*/
//    char name[] = "Mimi";

//    printf("%s", name);

//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    /* String functions */
//    // Variable type for string is char and format specifier %s.

//    char Tomato[] = "Swiss Bread and SSD";

//    printf("%c", Tomato[6]);

//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    /* String functions */
//    // Variable type for string is char and format specifier %s.

//    char jerry[48];
//    char tom[48];

//    scanf("%[^\n]", &jerry);
//    printf("%s\n", jerry);

//    printf("=========================\n");

//    scanf("%s", &tom);
//    printf("%s", tom);

//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    /*
//    String Functions
//    1. strlen() = used to find the length of a string
//    */

//    char name[] = "Discord";

//    int length = strlen(name);

//    printf("%d", length);

//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){

//    char mimi[20];
//    scanf("%s", &mimi);

//    char broh[20]; /* strcpy( j ney, j dey); */

//    strcpy(broh, mimi);
//    printf("%s",broh);

//    return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){

//    char name[] = "Nuzud";

//    printf("%s\n", name);
//    printf("%s", strrev(name));

// }

// #include <stdio.h>
// #include <string.h>
// int main(){
// /*
// if string matches then 0
// if first string is ref; second is diff 1
// if second string has extra stuff -1
// */
//    char str1[] = "Hippo62";

//    printf("%d", strcut());

//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){

//    // concatenates

//    char hi[20];
//    char name[20];
//    scanf("%s", &hi);
//    scanf("%s", &name);

//    printf("%s", strcat(hi, name));

//    return 0;
// }

// #include <stdio.h>
// int main(){
//    int num;
//    scanf("%d", &num);
//    int *pointer = &num;
//    printf("%p\n", pointer); /*Address*/
//    printf("%d", *pointer);  /*Value stored*/

//    return 0;
// }

// #include <stdio.h>
// int main(){
//    // int n = 19;
//    for(int i = 1; i<=19; i+=3){
//       printf("%d ", i);
//    }
//    return 0;
// }

#include <stdio.h>
int main()
{
   int n, even = 0, odd = 0;
   scanf("%d", &n);
   int array[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if(array[i] % 2 == 0){
         even++;
      }
      else{
         odd++;
      }
   }
   printf("Even = %d\n", even);
   printf("Odd = %d", odd);
   return 0;
}

