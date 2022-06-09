#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "ctype.h"

char* vietHoa(char *s){
	char *kq = (char*) malloc (strlen(s)*sizeof(char));
	if(s[0]>='a' && s[0]<='z'){
		kq[0] = s[0] - 32;
	}
	else
		kq[0] = s[0];
	int i;
	for(i=1; i<strlen(s);i++){
		kq[i] = s[i];		
	}
	kq[strlen(s)] = '\0';
	return kq;
} 

int main(){
    char *mt[5] = {"the", "a", "one", "some", "any"};
    char *dt[5] = {"boy", "girl", "dog", "town", "car"};
    char *dongtu[5] = {"drove", "jumped", "ran", "walked", "shipped"};
    char *gt[5] = {"to", "from", "over", "under", "on"};
    
    srand((int)time(0));
    int i = 10 + rand() % 21;
    
    int j;
    for(j=0; j<i; j++){
		printf("%s %s %s %s %s.\n", vietHoa(mt[rand()%5]), gt[rand()%5], dongtu[rand()%5], mt[rand()%5], dt[rand()%5]);
    }
    return 0;
}