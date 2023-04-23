typedef struct {
  int length;
  char * type;
} ArrayList;

void add(ArrayList& x, void * elem);
ArrayList* arrlistcotr();

#define ArrayList.add(x, y) add(x, y)
#define ArrayList(char * typing)
