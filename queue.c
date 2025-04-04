#include "queue.h"
#include "tile_game.h"

void enqueue(struct queue *q, struct game_state state) {
  uint64_t serialized = serialize(state);
  insert_at_tail(&q->data, (size_t) serialized);
}

struct game_state dequeue(struct queue *q) { return (struct game_state){0}; }

int number_of_moves(struct game_state start) { return 0; }
