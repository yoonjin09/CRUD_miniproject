#include <stdio.h>

typedef struct{
	char name[60];
	int weight;
	int price;
	int tenprice;
	int stargr;
} Product2;

int createProduct2(Product2 *p);
void readProduct2(Product2 p);
int updateProduct2(Product2 *p);
int deleteProduct2(Product2 *p);
int selectMenu2();
void listProduct2(Product2 *p,int count);
int selectDataNo2(Product2 *p, int count);

	