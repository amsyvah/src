/*	$OpenBSD: zaurus_scoopreg.h,v 1.3 2005/01/20 23:34:36 uwe Exp $	*/

/*
 * Copyright (c) 2005 Uwe Stuehler <uwe@bsdx.de>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#define SCOOP0_BASE	0x10800000
#define SCOOP1_BASE	0x14800000
#define SCOOP_SIZE	0x2c

#define SCOOP_MCR	0x00
#define SCOOP_CDR	0x04
#define SCOOP_CSR	0x08
#define SCOOP_CPR	0x0c
#define SCOOP_CCR	0x10
#define SCOOP_IRR	0x14
#define SCOOP_IRM	0x14
#define SCOOP_IMR	0x18
#define SCOOP_ISR	0x1c
#define SCOOP_GPCR	0x20
#define SCOOP_GPWR	0x24
#define SCOOP_GPRR	0x28

/* GPIO bit assignments for the Zaurus C3000. */
#define C3000_SCOOP0_LED_GREEN		1
#define C3000_SCOOP0_LED_ORANGE		7
#define C3000_SCOOP1_BACKLIGHT_ON	8
