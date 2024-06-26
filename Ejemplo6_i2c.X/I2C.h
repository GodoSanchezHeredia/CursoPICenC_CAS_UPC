/* 
 * File:   I2C.h
 * Author: DELL
 *
 * Created on June 25, 2024, 4:34 PM
 */

#ifndef I2C_H
#define	I2C_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <xc.h> // include processor files - each processor file is guarded.  
#include "mcc_generated_files/system/system.h"


uint8_t I2C_Read1Byte(uint8_t deviceAddress, uint8_t registerAddress, uint8_t *readData);
uint8_t I2C_ReadNByte(uint8_t deviceAddress, uint8_t registerAddress, uint8_t *readData, size_t readLength);
uint8_t I2C_Read(uint16_t deviceAddress, uint8_t *data, size_t dataLength);
uint8_t I2C_Write(uint8_t deviceAddress, uint8_t *data, size_t writeLength);
uint8_t I2C_Write1Byte(uint8_t deviceAddress, uint8_t data);
bool I2C_AckPoll(uint8_t deviceAddress);


#ifdef	__cplusplus
}
#endif

#endif	/* I2C_H */

