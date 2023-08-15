// ½Ó¿Ú

#define N 10

typedef char* K;
typedef int V;

typedef struct entry_s {
	K key;
	V val;
	struct entry_s* next;
} Entry;

typedef struct {
	Entry* table[N];
} HashMap;

HashMap* HashMap_create();
void HashMap_destroy(HashMap* map);
V HashMap_get(HashMap* map, K key);
V HashMap_put(HashMap* map, K key, V val);
V HashMap_remove(HashMap* map, K key);
