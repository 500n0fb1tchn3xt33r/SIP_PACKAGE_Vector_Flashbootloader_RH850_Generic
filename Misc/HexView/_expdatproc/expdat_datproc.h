/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2014-2018 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  expdat_datproc.h
 *        \brief  Implementation of the dataprocessing functions.
 *
 *      \details  This file contains the interface functions for the dataprocessing routines.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Armin Happel                  vishp         Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2014-12-18  vishp                 Creation
 *  01.01.00  2016-10-13  vishp                 Support for ED25519 signature
 *                                              Add support for CMAC.
 *  01.02.00  2018-01-05  vishp                 Adding streaming support for Hash and AES data processing operations.
*********************************************************************************************************************/

#if !defined (__EXPDAT_DATPROC_H__)
#define __EXPDAT_DATPROC_H__


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *********************************************************************************************************************/

typedef enum 
{
    kDatProcNoAction                     //0
   ,kDatProcXoring                       //1

   ,kDatProcItems                        //52   /* Total number of items in Csum */
} EDatProcMethodNames;


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define ChkStartOperation(inf)      (DODATA_START & (inf)->doDataOperation)
#define ClrStartOperation(inf)      ((inf)->doDataOperation ^= DODATA_START)



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/



#ifdef __cplusplus
extern "C" {
#endif


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#ifdef __cplusplus
}
#endif

#endif  /* __EXPDAT_DATPROC_H__ */

/**********************************************************************************************************************
 *  END OF FILE: expdat_datproc.h
 *********************************************************************************************************************/