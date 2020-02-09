/*
 * MCDIO.C
 *
 *  Created on: Aug 22, 2019
 *      Author: maha_
 */

#include "MDIO_int.h"
#include "stdtypes.h"
#include  "MDIO_cfg.h"
#include "utlis.h"
#include  "MDIO_priv.h"

u8 MDIO_u8SetPinDirection (u8  u8PortIdCopy, u8 u8PinIdCopy, u8 u8PinDirCopy)
{
switch ( u8PortIdCopy)
	{
    case 'A' :

	if(u8PinDirCopy==MDIO_OUTPUT)
	{
		Set_Bit(MDIO_DDRA ,u8PinIdCopy);
	}
	else if(u8PinDirCopy==MDIO_INPUT)
	{
		Clr_Bit(MDIO_DDRA ,u8PinIdCopy);
	}
	else
	{
		return 1 ;
	}
	break;
	case 'B' :

		if(u8PinDirCopy==MDIO_OUTPUT)
		{

			Set_Bit(MDIO_DDRB ,u8PinIdCopy);
		}
		else if(u8PinDirCopy==MDIO_INPUT)
		{
			Clr_Bit(MDIO_DDRB ,u8PinIdCopy);
		}
		else
		{
			return 1 ;
		}
		break;
	case 'C' :

			if(u8PinDirCopy==MDIO_OUTPUT)
			{

				Set_Bit(MDIO_DDRC ,u8PinIdCopy);
			}
			else if(u8PinDirCopy==MDIO_INPUT)
			{
				Clr_Bit(MDIO_DDRC ,u8PinIdCopy);
			}
			else
			{
				return 1 ;
			}
			break;
	case 'D' :

			if(u8PinDirCopy==MDIO_OUTPUT)
			{

				Set_Bit(MDIO_DDRD ,u8PinIdCopy);
			}
			else if(u8PinDirCopy==MDIO_INPUT)
			{
				Clr_Bit(MDIO_DDRD ,u8PinIdCopy);
			}
			else
			{
				return 1 ;
			}
			break;
	}

return 0 ;
}

u8 MDIO_u8SetPortDirection (u8 u8PortIdCopy, u8 u8PinDirCopy)
{
	switch ( u8PortIdCopy)
	{
	    case 'A' :
    	 MDIO_DDRA=u8PinDirCopy;
    	 break;
    	case 'B' :
    		 MDIO_DDRB=u8PinDirCopy;
    		 break;
    	case 'C' :
    		 MDIO_DDRC=u8PinDirCopy;
    		 break;
    	case 'D' :
    		 MDIO_DDRD=u8PinDirCopy;
    		 break;
	}
    return 0 ;

}

u8 MDIO_u8SetPinValue(u8 u8PortIdCopy , u8 u8PinIdCopy, u8 u8PinValCopy)
{
	switch ( u8PortIdCopy)
	{
    	case 'A' :

    	if (u8PinValCopy==MDIO_HIGH)
    	{
    		Set_Bit(MDIO_PORTA,u8PinIdCopy);
    	}
    	else if (u8PinValCopy==MDIO_LOW)
    	{
    		 Clr_Bit(MDIO_PORTA,u8PinIdCopy);
    	}
    	else
    	{
    		return 1 ;
    	}
    	break;
    	case 'B' :
    	if (u8PinValCopy==MDIO_HIGH)
    	{
    		Set_Bit(MDIO_PORTB,u8PinIdCopy);
    	}
    	else if (u8PinValCopy==MDIO_LOW)
    	{
    		 Clr_Bit(MDIO_PORTB,u8PinIdCopy);
    	}
    	else
    	{
    		return 1 ;
    	}
    	break;
    	case 'C' :
    	if (u8PinValCopy==MDIO_HIGH)
    	{
    		Set_Bit(MDIO_PORTC,u8PinIdCopy);
    	}
    	else if (u8PinValCopy==MDIO_LOW)
    	{
    		 Clr_Bit(MDIO_PORTC,u8PinIdCopy);
    	}
    	else
    	{
    		return 1 ;
    	}
    	break;
    	case 'D' :
    	if (u8PinValCopy==MDIO_HIGH)
    	{
    		Set_Bit(MDIO_PORTD,u8PinIdCopy);
    	}
    	else if (u8PinValCopy==MDIO_LOW)
    	{
    		 Clr_Bit(MDIO_PORTD,u8PinIdCopy);
    	}
    	else
    	{
    		return 1 ;
    	}
    	break;
   }
	return 0 ;
}

u8 MDIO_u8SetPortValue(u8 u8PortIdCopy , u8 u8PinValCopy)
{
		switch ( u8PortIdCopy)
		{
	        case 'A' :
	           MDIO_PORTA=u8PinValCopy;
	           break;
	        case 'B' :
	        	   MDIO_PORTB=u8PinValCopy;
	        	   break;
	        case 'C' :
	        	   MDIO_PORTC=u8PinValCopy;
	        	   break;
	        case 'D' :
	        	   MDIO_PORTD=u8PinValCopy;
	        	   break;
		}
	return 0 ;
}
u8 MDIO_u8GetPinValue(u8 u8PortIdCopy, u8 u8PinIdCopy,u8* u8ReturnPinVal)
{
		switch ( u8PortIdCopy)
		{
	       case 'A' :
	       *u8ReturnPinVal=Get_Bit(MDIO_PINA,u8PinIdCopy);
	       break;
	       case 'B' :
	       *u8ReturnPinVal=Get_Bit(MDIO_PINB,u8PinIdCopy);
	       break;
	       case 'C' :
	       *u8ReturnPinVal=Get_Bit(MDIO_PINC,u8PinIdCopy);
	       break;
	       case 'D' :
	       *u8ReturnPinVal=Get_Bit(MDIO_PIND,u8PinIdCopy);
	       break;
		}
	return 0 ;
}

u8 MDIO_u8GetPortValue(u8 u8PortIdCopy,u8* u8ReturPinVal)
{
		switch ( u8PortIdCopy)
		{
        	case 'A' :
        	*u8ReturPinVal=MDIO_PINA;
        	break;
        	case 'B' :
        		*u8ReturPinVal=MDIO_PINB;
        		break;
        	case 'C' :
        		*u8ReturPinVal=MDIO_PINC;
        		break;
        	case 'D' :
        		*u8ReturPinVal=MDIO_PIND;
        		break;
		}
	return 0 ;
}
u8 MDIO_u8Init(void)
{

	MDIO_u8SetPortDirection('A',conc(MDIO_PORTA7_DIR,MDIO_PORTA6_DIR,MDIO_PORTA5_DIR,MDIO_PORTA4_DIR,MDIO_PORTA3_DIR,MDIO_PORTA2_DIR,MDIO_PORTA1_DIR,MDIO_PORTA0_DIR ));
	MDIO_u8SetPortDirection('B',conc(MDIO_PORTB7_DIR,MDIO_PORTB6_DIR,MDIO_PORTB5_DIR,MDIO_PORTB4_DIR,MDIO_PORTB3_DIR,MDIO_PORTB2_DIR,MDIO_PORTB1_DIR,MDIO_PORTB0_DIR ));
	MDIO_u8SetPortDirection('C',conc(MDIO_PORTC7_DIR,MDIO_PORTC6_DIR,MDIO_PORTC5_DIR,MDIO_PORTC4_DIR,MDIO_PORTC3_DIR,MDIO_PORTC2_DIR,MDIO_PORTC1_DIR,MDIO_PORTC0_DIR ));
	MDIO_u8SetPortDirection('D',conc(MDIO_PORTD7_DIR,MDIO_PORTD6_DIR,MDIO_PORTD5_DIR,MDIO_PORTD4_DIR,MDIO_PORTD3_DIR,MDIO_PORTD2_DIR,MDIO_PORTD1_DIR,MDIO_PORTD0_DIR ));
	MDIO_u8SetPortDirection('C',conc(MDIO_PORTC7_DIR,MDIO_PORTC6_DIR,MDIO_PORTC5_DIR,MDIO_PORTC4_DIR,MDIO_PORTC3_DIR,MDIO_PORTC2_DIR,MDIO_PORTC1_DIR,MDIO_PORTC0_DIR ));

	return 0 ;
}
