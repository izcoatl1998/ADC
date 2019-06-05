#include <main.h>
#use delay(clock=16M)
void main()
{
 int8 lectura;
   while(TRUE)
   {
   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   set_adc_channel(0);
   delay_us(20);
   lectura=read_adc();
   output_B(lectura);
   }
}
