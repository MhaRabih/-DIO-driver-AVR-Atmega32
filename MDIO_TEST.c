/*
 * MDIO_TEST.C
 *
 *  Created on: Feb 9, 2020
 *      Author: maha_
 */
#include "avr/io.h"
#include "MDIO_int.h"
#include "stdtypes.h"
#include  "MDIO_cfg.h"
#include "utlis.h"
#include  "MDIO_priv.h"
#include <util/delay.h>
int main(void)
{
	//DDRD=0xff;
	//PORTD=0xff;
	//MDIO_u8Init();
	//MDIO_u8SetPinDirection ('A',0,MDIO_OUTPUT);
	///MDIO_u8SetPinValue('A',0, MDIO_HIGH);


	u8 *sw ;
	 MDIO_u8Init();
	 MDIO_u8SetPinDirection ('A' , 7, MDIO_OUTPUT);
	 MDIO_u8SetPinDirection ('C', 0, MDIO_INPUT);
	 MDIO_u8SetPinValue('C',0,MDIO_HIGH);
	while(1)
	{
		MDIO_u8GetPinValue('C', 0,sw);
		if(*sw==MDIO_HIGH)
		{
	       MDIO_u8SetPinValue('A' ,7,MDIO_HIGH);
	       _delay_ms(1000);
	       MDIO_u8SetPinValue('A' ,7,MDIO_LOW);
	       _delay_ms(1000);
	      }
		else
		{
			 MDIO_u8SetPinValue('B' ,7,MDIO_LOW);
		}
	}


}
