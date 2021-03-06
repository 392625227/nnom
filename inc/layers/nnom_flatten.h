/*
 * Copyright (c) 2018-2020
 * Jianjia Ma, Wearable Bio-Robotics Group (WBR)
 * majianjia@live.com
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-05-03     Jianjia Ma   The first version
 */

#ifndef __NNOM_FLATTEN_H__
#define __NNOM_FLATTEN_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include "nnom.h"
#include "nnom_layers.h"
#include "nnom_local.h"
#include "nnom_tensor.h"

// no special parameters but we need it. 
typedef struct _nnom_flatten_config_t{
    nnom_layer_config_t super;
} nnom_flatten_config_t;

nnom_layer_t *Flatten(void);
nnom_layer_t *flatten_s(nnom_flatten_config_t * config);

#ifdef __cplusplus
}
#endif

#endif /* __NNOM_FLATTEN_H__ */
