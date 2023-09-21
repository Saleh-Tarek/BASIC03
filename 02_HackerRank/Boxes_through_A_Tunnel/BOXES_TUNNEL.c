#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
};

typedef struct box Mybox;

int get_volume(Mybox b) {
    return b.length * b.width * b.height;
}

int is_lower_than_max_height(Mybox b) {
    return (b.height < MAX_HEIGHT) ? 1 : 0;
}

int main()
{
    int n;
    printf("Hello\nPlease enter the total number of boxes.\n");
    scanf("%d", &n);
    Mybox *boxes = (Mybox *) malloc(n * sizeof(Mybox));
    printf("Please enter the length, width, and height of each box.\n");
    for (int i = 0; i < n; i++) {
    	printf("%d=\t",i);
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    for (int i = 0; i < n; i++) {
        if (is_lower_than_max_height(boxes[i])) {
            printf("Box number %d's volume is: %d\n",i, get_volume(boxes[i]));
        }
    }
    return 0;
}
