#include "queue.h"
#include "tile_game.h"

void enqueue(struct queue *q, struct game_state state) {
  uint64_t serialized = serialize(state);
  insert_at_tail(&q->data, (size_t) serialized);
}

struct game_state dequeue(struct queue *q) { 
  size_t serialized = remove_from_head(&q->data); 
  return deserialize(serialized);}

int number_of_moves(struct game_state start) {
  struct queue go;
  go.data.head = NULL;
  enqueue(&go, start);
  size_t cap = 100;
  size_t count = 0;
  uint64_t *

}
