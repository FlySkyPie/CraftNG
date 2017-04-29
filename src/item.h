#ifndef _item_h_
#define _item_h_

typedef enum {
    Item_EMPTY,
    Item_GRASS,
    Item_SAND,
    Item_STONE,
    Item_BRICK,
    Item_WOOD,
    Item_CEMENT,
    Item_DIRT,
    Item_PLANK,
    Item_SNOW,
    Item_GLASS,
    Item_COBBLE,
    Item_LIGHT_STONE,
    Item_DARK_STONE,
    Item_CHEST,
    Item_LEAVES,
    Item_CLOUD,
    Item_TALL_GRASS,
    Item_YELLOW_FLOWER,
    Item_RED_FLOWER,
    Item_PURPLE_FLOWER,
    Item_SUN_FLOWER,
    Item_WHITE_FLOWER,
    Item_BLUE_FLOWER,
    Item_COLOR_00,
    Item_COLOR_01,
    Item_COLOR_02,
    Item_COLOR_03,
    Item_COLOR_04,
    Item_COLOR_05,
    Item_COLOR_06,
    Item_COLOR_07,
    Item_COLOR_08,
    Item_COLOR_09,
    Item_COLOR_10,
    Item_COLOR_11,
    Item_COLOR_12,
    Item_COLOR_13,
    Item_COLOR_14,
    Item_COLOR_15,
    Item_COLOR_16,
    Item_COLOR_17,
    Item_COLOR_18,
    Item_COLOR_19,
    Item_COLOR_20,
    Item_COLOR_21,
    Item_COLOR_22,
    Item_COLOR_23,
    Item_COLOR_24,
    Item_COLOR_25,
    Item_COLOR_26,
    Item_COLOR_27,
    Item_COLOR_28,
    Item_COLOR_29,
    Item_COLOR_30,
    Item_COLOR_31
} Item;

extern const int items[];
extern const int item_count;
extern const int blocks[256][6];
extern const int plants[256];

int is_plant(Item w);
int is_obstacle(Item w);
int is_transparent(Item w);
int is_destructable(Item w);

#endif
