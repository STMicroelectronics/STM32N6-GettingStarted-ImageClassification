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
#define ASPECT_RATIO_MODE ASPECT_RATIO_CROP

#define NN_WIDTH      (240)
#define NN_HEIGHT     (240)
#define NN_BPP 3

#define COLOR_BGR (0)
#define COLOR_RGB (1)
#define COLOR_MODE    COLOR_RGB

/* Classes */
#define NB_CLASSES   (101)
#define CLASSES_TABLE const char* classes_table[NB_CLASSES] = {\
    "apple_pie",\
    "baby_back_ribs",\
    "baklava",\
    "beef_carpaccio",\
    "beef_tartare",\
    "beet_salad",\
    "beignets",\
    "bibimbap",\
    "bread_pudding",\
    "breakfast_burrito",\
    "bruschetta",\
    "caesar_salad",\
    "cannoli",\
    "caprese_salad",\
    "carrot_cake",\
    "ceviche",\
    "cheesecake",\
    "cheese_plate",\
    "chicken_curry",\
    "chicken_quesadilla",\
    "chicken_wings",\
    "chocolate_cake",\
    "chocolate_mousse",\
    "churros",\
    "clam_chowder",\
    "club_sandwich",\
    "crab_cakes",\
    "creme_brulee",\
    "croque_madame",\
    "cup_cakes",\
    "deviled_eggs",\
    "donuts",\
    "dumplings",\
    "edamame",\
    "eggs_benedict",\
    "escargots",\
    "falafel",\
    "filet_mignon",\
    "fish_and_chips",\
    "foie_gras",\
    "french_fries",\
    "french_onion_soup",\
    "french_toast",\
    "fried_calamari",\
    "fried_rice",\
    "frozen_yogurt",\
    "garlic_bread",\
    "gnocchi",\
    "greek_salad",\
    "grilled_cheese_sandwich",\
    "grilled_salmon",\
    "guacamole",\
    "gyoza",\
    "hamburger",\
    "hot_and_sour_soup",\
    "hot_dog",\
    "huevos_rancheros",\
    "hummus",\
    "ice_cream",\
    "lasagna",\
    "lobster_bisque",\
    "lobster_roll_sandwich",\
    "macaroni_and_cheese",\
    "macarons",\
    "miso_soup",\
    "mussels",\
    "nachos",\
    "omelette",\
    "onion_rings",\
    "oysters",\
    "pad_thai",\
    "paella",\
    "pancakes",\
    "panna_cotta",\
    "peking_duck",\
    "pho",\
    "pizza",\
    "pork_chop",\
    "poutine",\
    "prime_rib",\
    "pulled_pork_sandwich",\
    "ramen",\
    "ravioli",\
    "red_velvet_cake",\
    "risotto",\
    "samosa",\
    "sashimi",\
    "scallops",\
    "seaweed_salad",\
    "shrimp_and_grits",\
    "spaghetti_bolognese",\
    "spaghetti_carbonara",\
    "spring_rolls",\
    "steak",\
    "strawberry_shortcake",\
    "sushi",\
    "tacos",\
    "takoyaki",\
    "tiramisu",\
    "tuna_tartare",\
    "waffles"}

/* Display */
#define WELCOME_MSG_1         "efficientnet_v2B1_240_fft_qdq_int8.onnx"
#define WELCOME_MSG_2         "Model Running in STM32 MCU internal memory"

#endif
