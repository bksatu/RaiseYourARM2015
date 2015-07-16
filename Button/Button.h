/*
 * Button.h
 *
 *  Created on: Jul 6, 2015
 *      Author: NHH
 */

#ifndef BUTTON_BUTTON_H_
#define BUTTON_BUTTON_H_

#define BUTTON_DEBOUNCE_MS		10

typedef enum
{
	BUTTON_NONE = 0,
	BUTTON_LEFT,
	BUTTON_RIGHT
} BUTTON_TYPE;


extern void Button_init(void);
extern bool ButtonRegisterCallback(BUTTON_TYPE ButtonSelect, void (*ButtonCallback)());

#endif /* BUTTON_BUTTON_H_ */