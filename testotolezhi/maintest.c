#include "libmap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int file;
    t_map *map;
    
    map = malloc(sizeof(t_map));
    i = 1;
    while (i < argc)
    {
        file = open(argv[i], O_RDONLY);
        printf("gmhe: %d\n", get_map_height_eof(file, map));
        printf("Map H: %zu\n", map->height);
        printf("gml: %d\n", get_map_length(&file, map, argv[i]));
        printf("Map L: %zu\n", map->length);
        close(file);
        i++;
    }
    return (0);
}
