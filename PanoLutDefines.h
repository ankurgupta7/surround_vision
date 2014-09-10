#define NUM_CAMERAS 2
#define NEIGHBOUR_PX 4
struct lut_node
{
	unsigned char px_data  [NUM_CAMERAS][NEIGHBOUR_PX];
	unsigned char px_weight[NUM_CAMERAS][NEIGHBOUR_PX];
};


typedef lut_node *lut;