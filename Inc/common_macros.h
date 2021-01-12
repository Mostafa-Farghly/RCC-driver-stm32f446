/********************************************************
 * common_macros.h
 *
 *  Description: Commonly used Macro
 *      Author: Mostafa Alaa
 ********************************************************/

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_

/* Set a certain bit in any register */
#define SET_BIT(REG, BIT) (REG |= (1 << BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG, BIT) (REG &= (~ (1 << BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG, BIT) (REG ^= (1 << BIT))

/* Rotate right the register value with specific number of rotates */
/* For 8-bit registers */
#define ROR(REG, NUM) (REG = (REG >> NUM) | (REG << (8 - NUM)))

/* Rotate left the register value with specific number of rotates */
/* For 8-bit registers */
#define ROL(REG, NUM) (REG = (REG << NUM) | (REG >> (8 - NUM)))

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG, BIT) (REG & (1 << BIT))

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG, BIT) (!(REG & (1 << BIT)))

#endif /* COMMON_MACROS_H_ */
