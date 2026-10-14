#define _CRT_SECURE_NO_WARNINGS
#include"ShoppingList.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For dynamic memory (lab 7)


void addItem(struct ShoppingList *list)
{
    if(list->length  >= MAX_LIST_LENGTH){
        printf("The item list if full!");
        return;
    }
    struct GroceryItem *item = &list->itemList[list->length];
    readItemName(item->productName);  
    readItemAmmount(&item->ammount);    
    readUnit(item->unit);
    (list->length)++;   ///Uppdating length of the list
}

void printList(struct ShoppingList *list)
{
    ///Displays items with formating 
    for(int i = 0; i < list->length; i++)
    {
        printf("%d. %-20s %8.2f %-10s\n",
       i + 1, list->itemList[i].productName, list->itemList[i].ammount,
       list->itemList[i].unit);
    }
}

void editItem(struct ShoppingList *list)
{
    int select;

    do{
        printf("Select item: \n");
        printList(list);
        scanf("%d", &select);
    }while(select <= 0 || select > list->length);

    readItemAmmount(&list->itemList[select - 1].ammount); ///Calls readItemAmmount() to set new ammount
}

void removeItem(struct ShoppingList *list)
{
    int select;

    do{
        printf("Select item to remove: \n");
        printList(list);
        scanf("%d", &select);
    }while(select <= 0 || select > list->length);

    for(int i = select - 1; i < list->length - 1; i++)
    {
        ///Shifts the list one index up
        strcpy(list->itemList[i].productName, list->itemList[i + 1].productName);
        list->itemList[i].ammount = list->itemList[i + 1].ammount;
        strcpy(list->itemList[i].unit, list->itemList[i + 1].unit);
    }
    (list->length)--; ///Updates the list length

}

/*saveList och loadList implementeras i laboration 7*/
void saveList(struct ShoppingList *list)
{

}

void loadList(struct ShoppingList *list)
{
    
}

void readItemName(char name[]) ///Gets item name
{
    while(getchar() != '\n');

    printf("Item name: ");
    fgets(name, MAX_ITEM_NAME, stdin);
    name[strlen(name) - 1] = '\0';
    
}

void readItemAmmount(float *ammount) ///Gets the ammount
{
    do{
        printf("Item ammount: ");
        scanf("%f", ammount);
    }while(*ammount < 1);
    
    while(getchar() != '\n');
}

void readUnit(char unit[]) ///Gets the units
{
    printf("Unit: ");
    fgets(unit, MAX_UNIT_NAME, stdin);
    unit[strlen(unit) - 1] = '\0';
}


