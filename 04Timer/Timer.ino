#include <avr/interrupt.h>
// #include <avr>

void setup()
{
	Serial.begin(115200);
    Serial.println("04_Timer");
    cli();
    TCCR1A=0;
    TCCR1B=0;
    TIMSK1=0;

    TCCR1B |= (1<<CS12)|(1<<CS10);
    TCNT1 =34286;
    TIMSK1=(1<<TOIE1);
    sei();

}
int count =0;
void loop()
{
	Serial.println(count);
    count++;
    delay(300);
}

ISR(TIMER1_OVF_vect){
    TCNT1 =34286;
    Serial.println("test");
}
