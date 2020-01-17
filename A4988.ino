/* Ejemplo control motor a pasos con A4988 
 * Rafael Lozano Rolon
 * soporte@taloselectronics.com
 */
#define PPR 200 //Pulsos por revolucion
#define STEP_DELAY 200
const byte stepPin=2;
const byte directionPin=3;

void setup()
{
    pinMode(stepPin, OUTPUT);
    pinMode(directionPin, OUTPUT);
}
void loop()
{
    digitalWrite(directionPin,HIGH);
    for (int i = 0; i < PPR; i++)
    {
        digitalWrite(stepPin,LOW);
        delayMicroseconds(STEP_DELAY);
        digitalWrite(stepPin,HIGH);
        delayMicroseconds(STEP_DELAY);
    }
    delay(1000);

    digitalWrite(directionPin, LOW);
    for (int i = 0; i < PPR; i++)
    {
        digitalWrite(stepPin, LOW);
        delayMicroseconds(STEP_DELAY);
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(STEP_DELAY);
    }
    delay(1000);
}