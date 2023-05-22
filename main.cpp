#include <cstdio>
#include <curses.h>

static
WINDOW *create_newwin(int height, int width, int starty, int startx) {
    WINDOW *local_win = newwin(height, width, starty, startx);
    box(local_win, 0, 0);
    keypad(local_win, TRUE);

    return (local_win);
}

int main(int argc, char **argv) {
    WINDOW *my_win;
    int ch;
    int x = 2;
    int y = 2;

    initscr();
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);
    cbreak();
    keypad(stdscr, TRUE);
    noecho();

    printw("Press q to exit");
    refresh();
    my_win = create_newwin(10, 20, y, x);
    wmove(my_win, y, x);

    while ((ch = wgetch(my_win)) != 'q') {
        switch (ch) {
            case KEY_LEFT:
                x--;
                break;
            case KEY_RIGHT:
                x++;
                break;
            case KEY_UP:
                y--;
                break;
            case KEY_DOWN:
                y++;
                break;
            case 'b': {

                int animation = 0;
                while (animation < 5) {
                    move(y + 2, x + animation * 10);
                    attron(COLOR_PAIR(1));
                    printw("--->>>");
                    refresh();
                    napms(50);
                    animation++;
                    clear();
                }
            }
                break;
            default:
                beep();
                break;
        }

        wmove(my_win, y, x);
    }

    endwin();
    return 0;
}