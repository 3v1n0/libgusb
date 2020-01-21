/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2015 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#ifndef __GUSB_INTERFACE_PRIVATE_H__
#define __GUSB_INTERFACE_PRIVATE_H__

#include <libusb.h>

#include <gusb/gusb-interface.h>

G_BEGIN_DECLS

GUsbInterface	*_g_usb_interface_new		(const struct libusb_interface_descriptor	*iface);

G_END_DECLS

#endif /* __GUSB_INTERFACE_PRIVATE_H__ */
