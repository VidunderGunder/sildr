# Sildr

Everything Sildr and technical.

1.0 and 2.0 are legacy, and some relevant documentation can be found in `/legacy`. Keep in mind it's mostly in Norwegian.

## Order History

**Components:**  
https://no.mouser.com/OrderHistory/OrdersView.aspx  
Email: kristiankramas@outlook.com  
Username: `vidundergunder`  
Password: `******`

**PCB:**  
https://jlcpcb.com/order#EL  
Email: kristiankramas@outlook.com  
Username: `vidundergunder`  
Password: `******`

## Electrical System v3.0

The system is split in two parts:

1. Base system
2. Optional data logging system (requires the base system)

### Base System

#### Simplified circuit diagram (click on image to run simulation):

[![circuit](./circuit.png)](https://everycircuit.com/circuit/6050376572469248/sildr-v3.0-base)

> _Image may be outdated_
> 
> - Behavior can be controlled with an MCU, and has an analog fallback
> - Relay represents the solenoid valve
> - Voltmeter is a digital in pin, registering 0V as button presses
> - Logic sources are digital out pins
> - Resistor connected to pin 7 and 6 on the 555-timer can be changed out for a potentiometer to manually set timer on-site

#### Simulated Prototype Circuit (click on image to run simulation):

[![prototype](./prototype.png)](https://www.tinkercad.com/things/aFhGxdh2pm7-epic-kieran-snaget/editel?sharecode=H4w5i4wpWhwLbEqHADM-LBKgBsFjJOnHqNgQgjkQ6uU)

> _Image may be outdated_  
> 
> - Simulation requires an Autodesk account (you can use your google account)
> - Lightbulb represents the solenoid valve

#### Prototype Components

- 1x 555-timer
- 3x nMOS Transistor (MOSFET)  
(FQP30N06L 60V LOGIC N-Channel MOSFET)
- 3x 1k resistor
- 1x 4k7 resistor
- 1x 330 resistor
- 1x 1mF capacitor
- 1x Pushbutton
- 1x diode
- 12V DC power supply
- 5V DC power supply

#### Production Components

| Component      | Description                   | Image                                                    |
| -------------- | ----------------------------- | -------------------------------------------------------- |
| Button         | [Schurter Touchless Switch TTS](https://www.schurter.com/en/datasheet/TTS) | ![](./components/buttons/Schurter-TTS/images/button.png) |
| Solenoid Coil (Valve) | [Danfoss BE012DS Coil](https://store.danfoss.com/no/no/Climate-Solutions-for-cooling/Ventiler/Ventilspoler/Spoler-for-Magnetventiler/Magnetventilspole%2C-BE012DS%2C-Koblingsboks%2C-Multipakk/p/018F6756#/) | ![](./components/valve/solenoid.jpg) |
| Transformer | [230VAC to 12VDC 2.0A (NB: Pick correct option)](https://www.biltema.no/en-no/construction/electrical-installations/lamp-sockets/led-transformer-12-v-dc-2000038013) | ![](./components/transformer/transformer.jpg) |


### Data Logging System (optional)

_TODO_

| Component      | Description                   | Image                                                    |
| -------------- | ----------------------------- | -------------------------------------------------------- |
| Flowmeter | [Sensus HRI Pulsgiver](https://www.ahlsell.no/products/vvs-teknisk-produkter/ventiler---filter-og-instrumenter/vannmalere-med-tilbehor/4021402/) (1pulse/liter) | ![](./components/flowmeter/sunsus-hri-pulsgiver.jpg) |