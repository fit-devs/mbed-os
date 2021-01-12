/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "PeripheralPins.h"

/************RTC***************/
const PinMap PinMap_RTC[] = {
    {NC, OSC32KCLK, 0},
};

/************ADC***************/
const PinMap PinMap_ADC[] = {
    {P0_15,  ADC0_SE3,   0},
    {P0_16,  ADC0_SE4,   0},
    {P0_31,  ADC0_SE5,   0},
    {P1_0,   ADC0_SE6,   0},
    {NC,     NC      ,   0}
};

/************CAN***************/
const PinMap PinMap_CAN_TD[] = {
    {P0_1,  CAN_1,  1},
    {P0_5,  CAN_0,  1},
    {NC,    NC   ,  0}
};

const PinMap PinMap_CAN_RD[] = {
    {P0_0, CAN_1,  1},
    {P0_4, CAN_0,  1},
    {NC  , NC   ,  0}
};


/************DAC***************/
const PinMap PinMap_DAC[] = {
    {NC  , NC   , 0}
};

/************I2C***************/
const PinMap PinMap_I2C_SDA[] = {
    {P1_24, I2C_2, 1},
    {P0_3 , I2C_3, 1},
    {P1_21, I2C_4, 5},
    {P0_8 , I2C_5, 3},
    {P1_29, I2C_7, 1},
    {NC   , NC   , 0}
};

const PinMap PinMap_I2C_SCL[] = {
    {P1_25, I2C_2, 1},
    {P0_2 , I2C_3, 1},
    {P1_20, I2C_4, 5},
    {P0_9 , I2C_5, 3},
    {P1_30, I2C_7, 1},
    {NC   , NC   , 0}
};

/************UART***************/
const PinMap PinMap_UART_TX[] = {
    {P0_30, UART_0, 1},
    {P1_25, UART_2, 1},
    {P0_2 , UART_3, 1},
    {P1_20, UART_4, 5},
    {P0_9 , UART_5, 3},
    {P1_30, UART_7, 1},
    {NC   ,  NC   , 0}
};

const PinMap PinMap_UART_RX[] = {
    {P0_29, UART_0, 1},
    {P1_24, UART_2, 1},
    {P0_3 , UART_3, 1},
    {P1_21, UART_4, 5},
    {P0_8 , UART_5, 3},
    {P1_29, UART_7, 1},
    {NC   ,  NC   , 0}
};

const PinMap PinMap_UART_CTS[] = {
    {P0_20, UART_3, 1},
    {NC   , NC    , 0}
};

const PinMap PinMap_UART_RTS[] = {
    {P0_21, UART_3, 1},
    {NC   , NC    , 0}
};

/************SPI***************/
const PinMap PinMap_SPI_SCLK[] = {
    {P1_23, SPI_2, 1},
    {P0_6 , SPI_3, 1},
    {P1_19, SPI_4, 5},
    {P0_7 , SPI_5, 3},
    {P1_28, SPI_7, 1},
    {NC   , NC   , 0}
};

const PinMap PinMap_SPI_MOSI[] = {
    {P1_24, SPI_2, 1},
    {P0_3 , SPI_3, 1},
    {P1_21, SPI_4, 5},
    {P0_8 , SPI_5, 3},
    {P1_29, SPI_7, 1},
    {NC   , NC   , 0}
};

const PinMap PinMap_SPI_MISO[] = {
    {P1_25, SPI_2, 1},
    {P0_2 , SPI_3, 1},
    {P1_20, SPI_4, 5},
    {P0_9 , SPI_5, 3},
    {P1_30, SPI_7, 1},
    {NC   , NC   , 0}
};

const PinMap PinMap_SPI_SSEL[] = {
    {P0_20, SPI_3, 1},
    {P0_21, SPI_3, ((1 << SSELNUM_SHIFT) | 1)},
    {NC  ,  NC   , 0}
};

/************PWM***************/
const PinMap PinMap_PWM[] = {
    {P0_19   , PWM_3,  4}, //P23
    {P1_26   , PWM_4,  2}, //LED4
    {P1_3    , PWM_5,  4}, //LED3
    {P1_19   , PWM_8,  2}, //P26 
    {NC      , NC,     0}
};


/************QSPI***************/

const PinMap PinMap_QSPI_DATA0[] = {
    {P0_24, QSPI_0, 6},
    {NC, NC, 0}
};

const PinMap PinMap_QSPI_DATA1[] = {
    {P0_25, QSPI_0, 6},
    {NC, NC, 0}
};

const PinMap PinMap_QSPI_DATA2[] = {
    {P0_28, QSPI_0, 6},
    {NC, NC, 0}
};

const PinMap PinMap_QSPI_DATA3[] = {
    {P0_27, QSPI_0, 6},
    {NC, NC, 0}
};
 const PinMap PinMap_QSPI_SCLK[] = {
    {P0_26, QSPI_0, 6},
    {NC   , NC    , 0}
};
 const PinMap PinMap_QSPI_SSEL[] = {
    {P0_23, QSPI_0, 6},
    {NC   , NC    , 0}
};
