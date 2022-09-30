
#include "lib/include.h"
#include "lib/clock.h"
#include "lib/Basic_Config.h"

unsigned long Led;

void Delay(void){unsigned long volatile time;
  time = 800000;
  while(time){
        time--;
  }
}

int main() {
/// Configuración Inicial 
    Config(); 
/// Configuración del reloj
    SetSystemClock_120MHz(); 

  while (1U)
  {
        //
        // Turn on the LED.
        //
         GPION->DATA |= 0x01;
        //GPIO_PORTN_DATA_R |= 0x01;

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 2000000; ui32Loop++)
        {
        }
         GPION->DATA |= 0x02;
        //GPIO_PORTN_DATA_R |= 0x01;

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 2000000; ui32Loop++)
        {
        }
        //
        // Turn off the LED.
        //
        GPION->DATA &= ~(0x01);
        //GPIO_PORTN_DATA_R &= ~(0x01);

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        {
        }
                GPION->DATA &= ~(0x02);
        //GPIO_PORTN_DATA_R &= ~(0x01);

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        {
        }
  }
}