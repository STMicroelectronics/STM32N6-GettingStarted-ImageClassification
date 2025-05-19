 /**
 ******************************************************************************
 * @file    app_config.h
 * @author  GPM Application Team
 *
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#ifndef APP_CONFIG
#define APP_CONFIG

#define USE_DCACHE

/*Defines: CMW_MIRRORFLIP_NONE; CMW_MIRRORFLIP_FLIP; CMW_MIRRORFLIP_MIRROR; CMW_MIRRORFLIP_FLIP_MIRROR;*/
#define CAMERA_FLIP CMW_MIRRORFLIP_NONE

#define ASPECT_RATIO_CROP       (1) /* Crop both pipes to nn input aspect ratio; Original aspect ratio kept */
#define ASPECT_RATIO_FIT        (2) /* Resize both pipe to NN input aspect ratio; Original aspect ratio not kept */
#define ASPECT_RATIO_FULLSCREEN (3) /* Resize camera image to NN input size and display a maximized image. See Doc/Build-Options.md#aspect-ratio-mode */
#define ASPECT_RATIO_MODE ASPECT_RATIO_FULLSCREEN

#define NN_WIDTH 96
#define NN_HEIGHT 96
#define NN_BPP 3

#define COLOR_BGR (0)
#define COLOR_RGB (1)
#define COLOR_MODE COLOR_RGB

#define NB_CLASSES 5
#define CLASSES_TABLE const char* classes_table[NB_CLASSES] = {\
    "daisy",\
    "dandelion",\
    "rose",\
    "sunflower",\
    "tulip"}

/* Display */
#define WELCOME_MSG_1         "mobilenet_v1_0.25_96_tfs_int8.tflite"
#define WELCOME_MSG_2         ((char *[2]) {"Model Running in STM32 MCU", "internal memory"})

#endif
