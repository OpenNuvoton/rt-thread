/**************************************************************************//**
*
* @copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date            Author       Notes
* 2020-12-12      Wayne        First version
*
******************************************************************************/

#include "board.h"
#include <rtdevice.h>


static void nu_pin_uart_init(void)
{
    /* UART0: PE[0, 1] */
    outpw(REG_SYS_GPE_MFPL, (inpw(REG_SYS_GPE_MFPL) & 0xffffff00) | 0x00000099);
}

static void nu_pin_emac_init(void)
{
}

static void nu_pin_sdh_init(void)
{
    /* EMMC: PC[0, 5] */
    outpw(REG_SYS_GPC_MFPL, (inpw(REG_SYS_GPC_MFPL) & 0xff000000) | 0x00666666);

    /* SDH_P0: PD[0, 7] */
    outpw(REG_SYS_GPD_MFPL, 0x66666666);
	
    /* SDH_P1: PH[6, 12] */
    outpw(REG_SYS_GPH_MFPL, 0x66000000);
    outpw(REG_SYS_GPH_MFPH, 0x00066666);

}

static void nu_pin_spi_init(void)
{
}

static void nu_pin_i2c_init(void)
{
}

static void nu_pin_pwm_init(void)
{
}

static void nu_pin_i2s_init(void)
{
}

static void nu_pin_can_init(void)
{
}

static void nu_pin_usbd_init(void)
{
}

static void nu_pin_vpost_init(void)
{
}

static void nu_pin_fmi_init(void)
{
}

static void nu_pin_usbh_init(void)
{

}

void nu_pin_init(void)
{
    nu_pin_uart_init();
    nu_pin_emac_init();
    nu_pin_sdh_init();
    nu_pin_spi_init();
    nu_pin_i2c_init();
    nu_pin_pwm_init();
    nu_pin_i2s_init();
    nu_pin_can_init();
    nu_pin_vpost_init();
    nu_pin_fmi_init();
    nu_pin_usbd_init();
    nu_pin_usbh_init();
}

void nu_pin_deinit(void)
{

}
