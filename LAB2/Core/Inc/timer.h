/*
 * timer.h
 *
 *  Created on: Nov 29, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
void setTimer1(int duration);
void timerRun();

extern int timer2_flag;
void setTimer2(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
