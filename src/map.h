#ifndef _map_h_
#define _map_h_

#include <stdint.h>
#include "config.h"

/*
#define EMPTY_ENTRY(entry) ((entry)->value == 0)

#define MAP_FOR_EACH(map, ex, ey, ez, ew) \
    for (unsigned int i = 0; i <= map->mask; i++) { \
        MapEntry *entry = map->data + i; \
        if (EMPTY_ENTRY(entry)) { \
            continue; \
        } \
        int ex = entry->e.x + map->dx; \
        int ey = entry->e.y + map->dy; \
        int ez = entry->e.z + map->dz; \
        int ew = entry->e.w;

#define END_MAP_FOR_EACH }
*/

typedef int8_t map_blocks_t;
#define MAP_BLOCKS_LEN ((CHUNK_SIZE) * (CHUNK_SIZE) * (CHUNK_SIZE))

#define MAP_FOR_EACH(map, ex, ey, ez, ew) \
    for (int x = 0; x < MAP_BLOCKS_LEN; x++) { \
        for (int y = 0; y < MAP_BLOCKS_LEN; y++) { \
            for (int z = 0; z < MAP_BLOCKS_LEN; z++) { \
                int ex = x + map->dx; \
                int ey = y + map->dy; \
                int ez = z + map->dz; \
                int ew = map->blocks[x + y * CHUNK_SIZE + z * CHUNK_SIZE_SQ]; \

#define END_MAP_FOR_EACH } } }

typedef struct {
    int dx;
    int dy;
    int dz;
    int8_t blocks[MAP_BLOCKS_LEN];
} Map;

/*
typedef union {
    uint32_t value;
    struct {
        uint8_t x;
        uint8_t y;
        uint8_t z;
        int8_t w;
    } e;
} MapEntry;

typedef struct {
    int dx;
    int dy;
    int dz;
    unsigned int mask;
    unsigned int size;
    MapEntry *data;
} Map;
*/

//void map_alloc(Map *map, int dx, int dy, int dz, int mask);
//void map_free(Map *map);
void map_copy(Map *dst, Map *src);
//void map_grow(Map *map);
int map_set(Map *map, int x, int y, int z, int w);
int map_get(Map *map, int x, int y, int z);

#endif
