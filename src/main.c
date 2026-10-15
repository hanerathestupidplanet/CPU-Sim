#include <stdio.h>
#include <stdint.h>
#include <errno.h>

uint8_t regs[8] = {
    0,0,0,0,0,0,0,0 //R1, R2, R3, R4, R5, CF, ZF
};


int cpuExec(int opcode){

    return 0;

}





int main(){

    printf("Loading main.bin..\n");
    uint8_t a = 200;
    uint8_t b = 200;
    uint8_t c = a + b;
    printf("%d\n", c);
    FILE *file = fopen( "./main.bin", "r");
	if (file == NULL){
        
        printf("Error: No main.bin file!");
		return 1;

	}

    return 0;

}