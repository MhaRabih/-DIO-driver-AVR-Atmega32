/*
 * MDIO_priv.h
 *
 *  Created on: Aug 29, 2019
 *      Author: maha_
 */

#ifndef MDIO_PRIV_H_
#define MDIO_PRIV_H_
#define MDIO_PORTA *((volatile u8*) 0x3B)
#define MDIO_DDRA  *((volatile u8*)0x3A )
#define MDIO_PORTB *((volatile u8*) 0x38)
#define MDIO_DDRB  *((volatile u8*)0x37 )
#define MDIO_PORTC *((volatile u8*) 0x35)
#define MDIO_DDRC  *((volatile u8*)0x34 )
#define MDIO_PORTD *((volatile u8*) 0x3B)
#define MDIO_DDRD  *((volatile u8*)0x3A )
#define MDIO_PINA  *((volatile u8*)0x39)
#define MDIO_PINB  *((volatile u8*)0x36)
#define MDIO_PINC  *((volatile u8*)0x33)
#define MDIO_PIND  *((volatile u8*)0x30)

#endif /* MDIO_PRIV_H_ */
