#include <studio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "storage_mgr.h"
#include "dberror.h"


void initStorageManager (void){
}

/*The main function has two main parts as the professor required:
  1. Page Functions:
     - Create page files
     - Open page files
     - Close page files
     - Destroy page files
  2. Read and Write functions:
     - Read functions:
        - Read block
        - Get block's position
        - Read the first block
        - Read previous block
        - Read current block
        - Read next block
        - Read last block
      - Write block:
        - Write block
        - Write current block
        - Append empty block
        - Ensure Capacity
*/

