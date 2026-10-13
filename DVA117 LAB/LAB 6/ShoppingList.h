#ifndef SHOPPING_LIST_H
#define SHOPPING_LIST_H
#define MAX_LIST_LENGTH 5
#define MAX_ITEM_NAME 100
#define MAX_UNIT_NAME 10
/*Här lägger du eventuella makrodefinitioner*/


// Struct definitions

/*Deluppgift 3 - definiera dina strukter här.           *
 *Det är viktigt att du använder de namn som anges i    *
 *uppgiftsspecifikationen, har du inte gjort det kommer *
 *resten av kodskelettet inte att kompilera.            *
 *När du definierat strukternakommer eventuella         *
 *varningar att försvinna och du ska kunna kompilera    *
 *och köra programmet, ingenting kommer dock att hända  *
 *när du gör val i menyn.                               */

struct GroceryItem{

    char productName[MAX_ITEM_NAME];
    float ammount;
    char unit[MAX_UNIT_NAME];
};

struct ShoppingList{

    struct GroceryItem itemList[MAX_LIST_LENGTH];
    int length; 
};

// Function declarations

void addItem(struct ShoppingList *list);
void printList(struct ShoppingList *list);
void editItem(struct ShoppingList *list);
void removeItem(struct ShoppingList *list);
void saveList(struct ShoppingList *list); //implementeras i laboration 7
void loadList(struct ShoppingList* list); //implementeras i laboration 7

void readItemName(char name[]);
void readItemAmmount(float *ammount);
void readUnit(char unit[]);


#endif

