/* drivers/misc/apanic_mmc.h
 *
 * Copyright (C) 2010 Motorola, Inc.
 *               2012 AOSP
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 */
#ifndef __APANIC_MMC_H_
#define __APANIC_MMC_H_

extern int log_buf_copy(char *dest, int idx, int len);
extern void log_buf_clear(void);

/* linux 3 compat */
#define memdump_wdt_disable() do {} while (0);
#define blkdev_get_by_dev(id, mode, sup) open_by_devnum(id, mode)

extern void show_cpu_current_stack_mem(void);

#endif
