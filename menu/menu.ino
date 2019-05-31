#define ARRAYSIZE 3
#define PIN_INT1 25
#define OPCIONES_MENU 2

String results[ARRAYSIZE] = {
    "Configurar Wifi",
    "Configurar grados",
    "configurar endpoint"
};
bool inMenu = false;
int menuActivo = 0;

void setup() {
    Serial.begin(115200);
    pinMode(PIN_INT1, PULLDOWN);
}

void loop() {
    // put your main code here, to run repeatedly:
    if (isConfigurationButtonPushed() && !inMenu) {
        inMenu = true;
        printMenu();
    }
}

void printMenu() {
    for(int i = menuActivo; i < menuActivo+OPCIONES_MENU; i++) {
        if ()
        Serial.print(i);
        Serial.print(": ");
        Serial.println(results[i]);
    }
}
bool isConfigurationButtonPushed() {
    return digitalRead(PIN_INT1);
}