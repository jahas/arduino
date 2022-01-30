// int led = LED_BUILTIN;
int led = 2;
int switchPin = 7;
int ratio = 50;

int last_state = HIGH;
int ledState = LOW;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(switchPin, INPUT_PULLUP);
}

void loop()
{
    int current = digitalRead(switchPin);
    if (current != last_state && current == LOW){
        ledState = 1 - ledState;
        ledOnOff(led, ledState);
    }
    last_state = current;
}

void flash(int ratio)
{

    digitalWrite(led, HIGH);
    delay(ratio);
    digitalWrite(led, LOW);
    delay(ratio);
}

void ledOnOff(int led, int thestate)
{
    digitalWrite(led, thestate);
}