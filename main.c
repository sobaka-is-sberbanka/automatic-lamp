#include <stdio.h>

int main()
{
    int i, i1, i2;
    char array1[80][80], array2[80][80];
    printf("Введите количество эл-ов 1-ого множества: ");
    scanf("%i", &i);
    i1 = i;
    for (int k=0; k<i; k++) {
        printf("Введите %d-ый элемент множества: ", k+1);
        scanf("%s", &array1[k]);
    }
    printf("Введите количество эл-ов 2-ого множества: ");
    scanf("%i", &i);
    for (int k=0; k<i; k++) {
        printf("Введите %d-ый элемент множества: ", k+1);
        scanf("%s", &array2[k]);
    }
    i2 = i;
    for(;;) {
        printf("Меню:\n1. Вывести элементы 1 множества\n2. Вывести элементы 2 множества\n3. Добавить элемент в 1 множество\n4. Добавить элемент во 2 множество\n5. Удалить элемент из множества\n6. Выйти из программы\nВведите номер команды: ");
        scanf("%d", &i);
        switch (i) {
            default:
                break;
            
            case 6:
                return 0;
                
            case 1:
                for (int k=0; k<i1; k++){
                    printf("%s ", array1[k]);
                }
                printf("\n");
                break;

            case 2:
                for (int k=0; k<i1; k++){
                    printf("%s ", array2[k]);
                }
                printf("\n");
                break;
                
            case 3:
                printf("Введите новый элемент: ");
                scanf("%s", array1[i1]);
                i1++;
                break;

            case 4:
                printf("Введите новый элемент: ");
                scanf("%s", array2[i2]);
                i2++;
                break;
                
            case 5:
                printf("Введите номер множества и номер элемента, который вы хотите удалить по порядку: ");
                int *a, *b;
                scanf("%d", &a);
                scanf("%d", &b);
                if (a==1){
                    for (int k = b-1; k<i1; k++){
                        for (int d; d<80; d++){
                            array1[k][d]=array1[k+1][d];
                        }
                    }
                    i1--;
                } else
                if (a==2){
                    for (int k = b-1; k<i2; k++){
                        for (int d; d<80; d++){
                            array2[k][d]=array2[k+1][d];
                        }
                    }
                }
                break;
        }
    }
}
