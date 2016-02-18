/*
 * Author: Franco Grassano - YAELTEX
 * Date: 18/02/2016
 * ---
 * LICENSE INFO
 * Kilo Mux Shield by Yaeltex is released by
 * Creative Commons Atribución-CompartirIgual 4.0 Internacional - http://creativecommons.org/licenses/by-sa/4.0/
 * ----
 * Description: Reads button setting internal PullUp resistor, and sends its state over serial.
 *              This example is for use with the KiloMux Shield.
 * 
 * KiloMux Library is available at https://github.com/Yaeltex/KiloMux-Shield/blob/master/Arduino%20Code/KiloMuxShield%20Library/KiloMuxShield.zip
 */
 
#include <KiloMux.h>              // Import class declaration
#include <KiloMuxDefs.h>          // Import KiloMux defines

KiloMux KMShield;                 // KiloMux Shield  

unsigned int buttonInput = 9;     // Shield input where we connected a button or a sensor (1-16)
                                  // No need for 10K pull-up resistor in this example

void setup() {
  Serial.begin(115200);           // Initialize serial at 115200bps
}

void loop() {
  int buttonState = 0;                                         // Variable to store digital values
  buttonState = KMShield.digitalReadKM(MUX_B, buttonInput, PULLUP);     // Read digital value from MUX_A and channel 'buttonInput' (1-16), and set internal pullup  
  
  Serial.print("Button state: "); Serial.println(buttonState);          // print value at the serial monitor
}
