const int buttonPin = A0;

float readAnalogPin(int outPin)
{
    return (analogRead(A0) / 1023.0) * 5.0;
}

int logPin(int pin)
{
    float voltage = readAnalogPin(pin);
    Serial.println("A0: " + String(voltage) + "V");
}

void setup()
{
    Serial.begin(115200);
    pinMode(buttonPin, INPUT);
}

void loop()
{
    logPin(buttonPin);
    delay(100);
}
