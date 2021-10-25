const int ledPin = 13;

void setup()
{
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    pinMode(A0, INPUT);
}

void loop()
{
    digitalWrite(ledPin, LOW);
    const float inputVoltage = (analogRead(A0) / 1023.0) * 5.0;
    if (inputVoltage >= 5.0)
    {
        Serial.println("DANGER: MAX VOLTAGE REACHED - ARDUINO MIGHT GO BOOM.");
    }
    if (inputVoltage > 0.25)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    Serial.println(String(inputVoltage) + "V");
    Serial.flush();
    delay(100);
}
