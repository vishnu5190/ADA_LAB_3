#include <stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>

void insertionSort(int array[], int length){
    int i, j, k, temp;
    for(i=0;i<length-1; i++){
        for(j=i+1; j>0; j--){
            if(array[j]<array[j-1]){
                 temp =array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
            else{
                break;
            }
        }
    }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
   int i,j,k, a[15000], ch, n, temp;
   clock_t start, end;
   while(1){
        printf("\n1:For manual entry of N value and array elements");
        printf("\n2:To display time taken for sorting number of elements N in the range 500 to 14500");
        printf("\n3:To exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch(ch){
            case 1:  printf("\nEnter the number of elements: ");
                scanf("%d",&n);
                printf("\nEnter array elements: ");
                for(i=0;i<n;i++) {
                    scanf("%d",&a[i]);
                }
                start=clock();
                //int size = sizeof(a)/sizeof(a[0]);
                insertionSort(a, n);
                end = clock();
                printf("sorted array\n");
            printArray(a, n);
            printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
            break;

  case 2:   n = 500;
    while(n <= 14500) {
        for(i = 0; i < n; i++) {
            a[i] = rand();
        }
        start = clock();
        insertionSort(a, n);
        for(j = 0; j < 500000; j ++) {
            temp = 8;
        }
        end = clock();
        printf("\n Time taken to sort %d numbers is %f secs\n", n, (((double)(end-start))/CLOCKS_PER_SEC));
        n = n + 1000;
    }
    break;

    case 3: exit(0);
}
    return 0;
}
}
