# 1 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
# 2 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 2

# 2 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
// #include <avr>

void setup()
{
 Serial.begin(115200);
    Serial.println("04_Timer");
    
# 8 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   __asm__ __volatile__ ("cli" ::: "memory")
# 8 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
        ;
    
# 9 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint8_t *)(0x80))
# 9 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
         =0;
    
# 10 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint8_t *)(0x81))
# 10 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
         =0;
    
# 11 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint8_t *)(0x6F))
# 11 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
         =0;

    
# 13 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint8_t *)(0x81)) 
# 13 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
          |= (1<<
# 13 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
                 2
# 13 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
                     )|(1<<
# 13 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
                           0
# 13 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
                               );
    
# 14 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint16_t *)(0x84)) 
# 14 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
         =34286;
    
# 15 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint8_t *)(0x6F))
# 15 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
         =(1<<
# 15 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
              0
# 15 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
                   );
    
# 16 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   __asm__ __volatile__ ("sei" ::: "memory")
# 16 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
        ;

}
int count =0;
void loop()
{
 Serial.println(count);
    count++;
    delay(300);
}


# 27 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
extern "C" void __vector_13 /* Timer/Counter1 Overflow */ (void) __attribute__ ((signal,used, externally_visible)) ; void __vector_13 /* Timer/Counter1 Overflow */ (void)
# 27 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
                   {
    
# 28 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino" 3
   (*(volatile uint16_t *)(0x84)) 
# 28 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\04Timer\\Timer.ino"
         =34286;
    Serial.println("test");
}
