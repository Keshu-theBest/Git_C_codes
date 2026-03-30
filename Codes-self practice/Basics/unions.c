#include <stdio.h>
#include <string.h> // For strcpy function
#include "../../include/keshu_core.h"

int main(){

        union data
        {
            int i;
            float f;
            char str[20];
        };
    
        union data d;
    
        d.i = 10;
        printf("Data as integer: %d\n", d.i);
    
        d.f = 220.5;
        printf("Data as float: %.2f\n", d.f);
    
        strcpy(d.str, "Hello, World!");
        printf("Data as string: %s\n", d.str);
    
        k_signature();
        return 0;
}



//Difference between Union and Structure data types//





/*-----Basic idea-----
#Structure: Groups different data members; all members have their own memory and can hold values at the same time.

#Union: Groups different data members that share the same memory; only one member holds a valid value at a time.






------Syntax / keyword-------
#Structure is defined using the keyword struct.

#Union is defined using the keyword union.






--------Memory allocation and size--------------
#In a structure, each member gets its own storage; total size ≈ sum of sizes of all members (plus padding).

#In a union, all members share the same storage; total size = size of the largest member (plus possible padding).




--------Member values and access-----------
#Structure:
    >All members can be used independently at the same time.
    >Changing one member does not affect the others.




#Union:
    >Logically, only one member should be used at a time; writing to one member overwrites the representation of others.
    >Changing one member affects the stored bits seen by all other members.




------------Initialization------------
#Structure: Multiple members can be initialized at once using initializer lists.

#Union: Only the first member can be directly initialized in a standard initializer; others must be assigned later.






------------Typical use cases--------------
#Structure: Used when you need to store a record with several related fields that are all meaningful at the same time (e.g., name, age, marks).

#Union: Used when different representations share the same memory and only one is used at a time, often for memory saving or type‑punning (e.g., a value that can be int or float, but not both simultaneously).





 
*/