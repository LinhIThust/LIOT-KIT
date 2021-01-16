#include <Arduino.h>
#line 1 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\03RFID\\RDIF_write.ino"
// // /*
// //  * Initial Author: ryand1011 (https://github.com/ryand1011)
// //  *
// //  * Reads data written by a program such as "rfid_write_personal_data.ino"
// //  *
// //  * See: https://github.com/miguelbalboa/rfid/tree/master/examples/rfid_write_personal_data
// //  *
// //  * Uses MIFARE RFID card using RFID-RC522 reader
// //  * Uses MFRC522 - Library
// //  * -----------------------------------------------------------------------------------------
// //  *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
// //  *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
// //  * Signal      Pin          Pin           Pin       Pin        Pin              Pin
// //  * -----------------------------------------------------------------------------------------
// //  * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
// //  * SPI SS      SDA(SS)      10            53        D10        10               10
// //  * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
// //  * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
// //  * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
// // */

// // #include <SPI.h>
// // #include <MFRC522.h>

// // #define RST_PIN         9           // Configurable, see typical pin layout above
// // #define SS_PIN          10          // Configurable, see typical pin layout above

// // MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance
// // #define NEW_UID {0x3c, 0x87, 0xf4, 0xa2}
// // MFRC522::MIFARE_Key key;
// // //*****************************************************************************************//
// // void setup() {
// //   Serial.begin(115200);                                           // Initialize serial communications with the PC
// //   while (!Serial);     // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
// //   SPI.begin();         // Init SPI bus
// //   mfrc522.PCD_Init();  // Init MFRC522 card
// //   // Prepare key - all keys are set to FFFFFFFFFFFFh at chip delivery from the factory.
// //   for (byte i = 0; i < 6; i++) {
// //     key.keyByte[i] = 0xFF;
// //   }                                              // Init MFRC522 card
// //   Serial.println(F("Write_UUID_Card"));    //shows in serial that it is ready to read
// // }

// // //*****************************************************************************************//
// // void loop() {

// // // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle. And if present, select one.
// //   if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
// //     delay(50);
// //     return;
// //   }
  
// //   // Now a card is selected. The UID and SAK is in mfrc522.uid.
  
// //   // Dump UID
// //   Serial.print(F("Card UID:"));
// //   for (byte i = 0; i < mfrc522.uid.size; i++) {
// //     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
// //     Serial.print(mfrc522.uid.uidByte[i], HEX);
// //   } 
// //   Serial.println();
// //   // Set new UID
// //   byte newUid[] = NEW_UID;
// //   if ( mfrc522.MIFARE_SetUid(newUid, (byte)4, true) ) {
// //     Serial.println(F("Wrote new UID to card."));
// //   }
  
// //   // Halt PICC and re-select it so DumpToSerial doesn't get confused
// //   mfrc522.PICC_HaltA();
// //   if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
// //     return;
// //   }
  
// //   // Dump the new memory contents
// //   Serial.println(F("New UID and contents:"));
// //   mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
// //   delay(2000);
// // }
// // //*****************************************************************************************//
// /*
//  * Initial Author: ryand1011 (https://github.com/ryand1011)
//  *
//  * Reads data written by a program such as "rfid_write_personal_data.ino"
//  *
//  * See: https://github.com/miguelbalboa/rfid/tree/master/examples/rfid_write_personal_data
//  *
//  * Uses MIFARE RFID card using RFID-RC522 reader
//  * Uses MFRC522 - Library
//  * -----------------------------------------------------------------------------------------
//  *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
//  *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
//  * Signal      Pin          Pin           Pin       Pin        Pin              Pin
//  * -----------------------------------------------------------------------------------------
//  * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
//  * SPI SS      SDA(SS)      10            53        D10        10               10
//  * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
//  * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
//  * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
// */

// #include <SPI.h>
// #include <MFRC522.h>

// #define RST_PIN         9           // Configurable, see typical pin layout above
// #define SS_PIN          10          // Configurable, see typical pin layout above

// MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance

// //*****************************************************************************************//
// void setup() {
//   Serial.begin(115200);                                           // Initialize serial communications with the PC
//   SPI.begin();                                                  // Init SPI bus
//   mfrc522.PCD_Init();                                              // Init MFRC522 card
//   Serial.println(F("Read_Card"));    //shows in serial that it is ready to read
// }

// //*****************************************************************************************//
// void loop() {

//   // Prepare key - all keys are set to FFFFFFFFFFFFh at chip delivery from the factory.
//   MFRC522::MIFARE_Key key;
//   for (byte i = 0; i < 6; i++) key.keyByte[i] = 0xFF;

//   //some variables we need
//   byte block;
//   byte len;
//   MFRC522::StatusCode status;

//   //-------------------------------------------

//   // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
//   if ( ! mfrc522.PICC_IsNewCardPresent()) {
//     return;
//   }

//   // Select one of the cards
//   if ( ! mfrc522.PICC_ReadCardSerial()) {
//     return;
//   }
//   String uidCard;
//   Serial.print(F("----Card Detected----"));
//   for(byte i =0;i<mfrc522.uid.size;i++)
//     uidCard += String(mfrc522.uid.uidByte[i],HEX);
//   Serial.println(uidCard);
//   mfrc522.PICC_HaltA();
//   mfrc522.PCD_StopCrypto1();
// }
// //*****************************************************************************************//
/*
 * Initial Author: ryand1011 (https://github.com/ryand1011)
 *
 * Reads data written by a program such as "rfid_write_personal_data.ino"
 *
 * See: https://github.com/miguelbalboa/rfid/tree/master/examples/rfid_write_personal_data
 *
 * Uses MIFARE RFID card using RFID-RC522 reader
 * Uses MFRC522 - Library
 * -----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
*/

#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9           // Configurable, see typical pin layout above
#define SS_PIN          10          // Configurable, see typical pin layout above

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance

//*****************************************************************************************//
void setup() {
  Serial.begin(115200);                                           // Initialize serial communications with the PC
  SPI.begin();                                                  // Init SPI bus
  mfrc522.PCD_Init();                                              // Init MFRC522 card
  Serial.println(F("Read_Card"));    //shows in serial that it is ready to read
}

//*****************************************************************************************//
void loop() {

  // Prepare key - all keys are set to FFFFFFFFFFFFh at chip delivery from the factory.
  MFRC522::MIFARE_Key key;
  for (byte i = 0; i < 6; i++) key.keyByte[i] = 0xFF;

  //some variables we need
  byte block;
  byte len;
  MFRC522::StatusCode status;

  //-------------------------------------------

  // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  String uidCard;
  Serial.print(F("----Card Detected----"));
  for(byte i =0;i<mfrc522.uid.size;i++)
    uidCard += String(mfrc522.uid.uidByte[i],HEX);
  Serial.println(uidCard);
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();
}
//*****************************************************************************************//

