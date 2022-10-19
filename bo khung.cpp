void initArray(){
    printf("\nInit Arry");
}
void findMax(){
    printf("\nSo Max la: ");
}
void findMin(){
    printf("\nSo Min la: ");
}
void sortAsc(){
    printf("\nSap xep ASC: ");
}
void sortDesc(){
    printf("\nSap xep DESC: ");
}

int main(){
    menu();
    return 0;
}

void menu(){
    int ch;
    while(1){
        printf("\t\tFunctions\n");
        printf("\n1. Init Arry");
        printf("\n2. findMax");
        printf("\n3. findMin");
        printf("\n4. sortAsc");
        printf("\n5. sortDesc");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("\n %d",&ch);
       
        switch(ch){
            case 1: initArray();
                break;
            case 2: findMax();
                break;
            case 3: findMin();
                break;
            case 4: sortAsc();
                break;
            case 5: sortDesc();
                break;
            case 6:
                exit(0);
        }
    }
   
}
