#ifndef SYSTEM_H_
#define SYSTEM_H_

typedef struct __asl_object_s *asl_object_t;

typedef int clockid_t;

typedef struct _malloc_zone_t {
    void *reserved1;
    void *reserved2;
    size_t (*size)(struct _malloc_zone_t *zone, const void *ptr);
    void *(*malloc)(struct _malloc_zone_t *zone, size_t size);
    void *(*calloc)(struct _malloc_zone_t *zone, size_t num_items, size_t size);
    void *(*valloc)(struct _malloc_zone_t *zone, size_t size);
    void (*free)(struct _malloc_zone_t *zone, void *ptr);
    void *(*realloc)(struct _malloc_zone_t *zone, void *ptr, size_t size);
    void (*destroy)(struct _malloc_zone_t *zone);
    const char *zone_name;
    unsigned (*batch_malloc)(struct _malloc_zone_t *zone, size_t size, void **results, unsigned num_requested);
    void (*batch_free)(struct _malloc_zone_t *zone, void **to_be_freed, unsigned num_to_be_freed);
    struct malloc_introspection_t *introspect;
    unsigned version;
} malloc_zone_t;

#endif