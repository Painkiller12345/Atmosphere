/*
 * Copyright (c) 2019 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define MEMORY_MAP_PA_GICD              0x08000000ull
#define MEMORY_MAP_PA_GICC              0x08010000ull
#define MEMORY_MAP_PA_GICH              0x08030000ull
#define MEMORY_MAP_PA_GICV              0x08040000ull

#define GIC_IRQID_PMU                   23
#define GIC_IRQID_MAINTENANCE           25
#define GIC_IRQID_NS_PHYS_HYP_TIMER     26
#define GIC_IRQID_NS_VIRT_TIMER         27
#define GIC_IRQID_SEC_PHYS_TIMER        29
#define GIC_IRQID_NS_PHYS_TIMER         30


#define GIC_IRQID_NS_VIRT_HYP_TIMER     1023 // SBSA: 28. Unimplemented
#define GIC_IRQID_SEC_PHYS_HYP_TIMER    1023 // SBSA: 20. Unimplemented
#define GIC_IRQID_SEC_VIRT_HYP_TIMER    1023 // SBSA: 19. Unimplemented

#define GIC_IRQID_UART                  (32 + 1)
