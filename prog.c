#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>

int main()
{
  char *password = NULL;
  char *hash = NULL;
    
  scanf("%ms",&password);
  scanf("%ms",&hash);

  char *cryptPassword = crypt(password, "00");
  if(cryptPassword == NULL){
    printf("Error");
    }else{
      if(strcmp(cryptPassword, hash) == 0) {
        printf("allow");
      } else {
        printf("deny");
    }
  }
  free(password);
  free(hash);
  return 0;
}
