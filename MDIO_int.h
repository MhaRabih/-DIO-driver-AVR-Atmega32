/*
 * MCDIO.h
 *
 *  Created on: Aug 23, 2019
 *      Author: maha_
 */

#ifndef MDIO_INT_H_
#define MDIO_INT_H_
#include "stdtypes.h"
#define CONC(Reg,ID)  conchelper(Reg,ID)
#define conchelper(Reg,ID) Reg##ID
#define MDIO_OUTPUT  1
#define MDIO_INPUT   0
#define MDIO_HIGH    1
#define MDIO_LOW     0
u8 MDIO_u8Init(void);
u8 MDIO_u8SetPinDirection (u8,u8,u8);
u8 MDIO_u8SetPortDirection (u8,u8);
u8 MDIO_u8SetPinValue (u8,u8,u8);
u8 MDIO_u8SetPortValue (u8,u8);
u8 MDIO_u8GetPinValue(u8,u8,u8*);
u8 MDIO_u8GetPortValue(u8,u8*);
#endif /* MDIO_INT_H_ */
