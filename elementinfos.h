#ifndef ELEMENTINFOS_H
#define ELEMENTINFOS_H

/* This global struct stores the color info for all keys. For all other buttons, use another global struct.
Inside are struct for each button. They're global so any function can change
the color info of a button. */
struct AllKeyInfo {
    struct Key_Q {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_q;
    struct Key_W {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_w;
    struct Key_E {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_e;
    struct Key_R {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_r;
    struct Key_T {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_t;
    struct Key_Y {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y;
        int width, height;
    } key_y;
    struct Key_U {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_u;
    struct Key_I {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_i;
    struct Key_O {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_o;
    struct Key_P {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_p;
    struct Key_A {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_a;
    struct Key_S {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_s;
    struct Key_D {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_d;
    struct Key_F {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_f;
    struct Key_G {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_g;
    struct Key_H {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_h;
    struct Key_J {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_j;
    struct Key_K {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_k;
    struct Key_L {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_l;
    struct Key_Z {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_z;
    struct Key_X {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_x;
    struct Key_C {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_c;
    struct Key_V {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_v;
    struct Key_B {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_b;
    struct Key_N {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_n;
    struct Key_M {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_m;
    struct Key_BKSP {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_bksp;
    struct Key_ENTER {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } key_enter;
};
extern struct AllKeyInfo allkeyinfo; //Declare variable to access this struct

/* This global array stores the nickname of each key based on their index, used in YDrawKeyboard()
bksp and enter are drawn separately outside the for loop */
extern char *link_index_to_nickname[28] = {
    "key_q", "key_w", "key_e", "key_r", "key_t", "key_y", "key_u", "key_i", "key_o", "key_p",
    "key_a", "key_s", "key_d", "key_f", "key_g", "key_h", "key_j", "key_k", "key_l",
    "key_z", "key_x", "key_c", "key_v", "key_b", "key_n", "key_m", "key_bksp", "key_enter"
};
/* 0 = default, 1 = green, 2 = yellow, 3 = grey
This global array stores the state of each key based on their index, used in YDrawKeyboard()
Since it contains int, the int is converted to strings in YDrawKeyboard. This array is intended to be
regularly updated, specifically by WStateUpdate, so storing the states as int is much more convenient to store and update. */
extern int link_index_to_state[26] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};
//This global array stores the label of each key based on their index, used in YDrawKeyboard()
extern char *link_index_to_label[28] = {
    "  Q", "  W", "  E", "  R", "  T", "  Y", "  U", "  I", "  O", "  P",
    "  A", "  S", "  D", "  F", "  G", "  H", "  J", "  K", "  L",
    "  Z", "  X", "  C", "  V", "  B", "  N", "  M", " bksp", "  enter"
};
extern char *indexed_letters[27] = {
    "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P",
    "A", "S", "D", "F", "G", "H", "J", "K", "L",
    "Z", "X", "C", "V", "B", "N", "M", ""
};

extern char *guess[5] = {"", "", "", "", ""};
extern char *randomized[5] = {"", "", "", "", ""};
//extern char *answer[5] = {"", "", "", "", ""};

struct Navigate {
    struct OK_button {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } ok_button;
    struct Replay_button {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } replay_button;
    struct Back_To_Menu_button {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } back_to_menu_button;
    struct Quit_button {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } quit_button;
};
extern struct Navigate navigate;
extern int *navigateptr[64] = {
//Pointer block for button info of ok_button index = 0 to index = 15
    &navigate.ok_button.rest_button_r, &navigate.ok_button.rest_button_g, &navigate.ok_button.rest_button_b, &navigate.ok_button.push_button_r,
    &navigate.ok_button.push_button_g, &navigate.ok_button.push_button_b, &navigate.ok_button.rest_blabel_r, &navigate.ok_button.rest_blabel_g,
    &navigate.ok_button.rest_blabel_b, &navigate.ok_button.push_blabel_r, &navigate.ok_button.push_blabel_g, &navigate.ok_button.push_blabel_b,
    &navigate.ok_button.x,             &navigate.ok_button.y,             &navigate.ok_button.width,         &navigate.ok_button.height,

//Pointer block for button info of replay_button index = 16 to index = 31
    &navigate.replay_button.rest_button_r, &navigate.replay_button.rest_button_g, &navigate.replay_button.rest_button_b, &navigate.replay_button.push_button_r,
    &navigate.replay_button.push_button_g, &navigate.replay_button.push_button_b, &navigate.replay_button.rest_blabel_r, &navigate.replay_button.rest_blabel_g,
    &navigate.replay_button.rest_blabel_b, &navigate.replay_button.push_blabel_r, &navigate.replay_button.push_blabel_g, &navigate.replay_button.push_blabel_b,
    &navigate.replay_button.x,             &navigate.replay_button.y,             &navigate.replay_button.width,         &navigate.replay_button.height,

//Pointer block for button info of back_to_menu_button index = 32 to index = 47
    &navigate.back_to_menu_button.rest_button_r, &navigate.back_to_menu_button.rest_button_g, &navigate.back_to_menu_button.rest_button_b, &navigate.back_to_menu_button.push_button_r,
    &navigate.back_to_menu_button.push_button_g, &navigate.back_to_menu_button.push_button_b, &navigate.back_to_menu_button.rest_blabel_r, &navigate.back_to_menu_button.rest_blabel_g,
    &navigate.back_to_menu_button.rest_blabel_b, &navigate.back_to_menu_button.push_blabel_r, &navigate.back_to_menu_button.push_blabel_g, &navigate.back_to_menu_button.push_blabel_b,
    &navigate.back_to_menu_button.x,             &navigate.back_to_menu_button.y,             &navigate.back_to_menu_button.width,         &navigate.back_to_menu_button.height,

//Pointer block for button info of quit_button index = 48 to index = 63
    &navigate.quit_button.rest_button_r, &navigate.quit_button.rest_button_g, &navigate.quit_button.rest_button_b, &navigate.quit_button.push_button_r,
    &navigate.quit_button.push_button_g, &navigate.quit_button.push_button_b, &navigate.quit_button.rest_blabel_r, &navigate.quit_button.rest_blabel_g,
    &navigate.quit_button.rest_blabel_b, &navigate.quit_button.push_blabel_r, &navigate.quit_button.push_blabel_g, &navigate.quit_button.push_blabel_b,
    &navigate.quit_button.x,             &navigate.quit_button.y,             &navigate.quit_button.width,         &navigate.quit_button.height,
};
extern char *navigatelink_index_to_nickname[4] = {"ok_button", "replay_button", "back_to_menu_button", "quit_button"};
extern char *navigatelink_index_to_label[4] = {"            ok", "    replay", "  main menu", "      quit"};

extern int *key_allptr[448] = {
//Pointer block for button info of button key_q index = 0 to index = 15
    &allkeyinfo.key_q.rest_button_r, &allkeyinfo.key_q.rest_button_g, &allkeyinfo.key_q.rest_button_b, &allkeyinfo.key_q.push_button_r,
    &allkeyinfo.key_q.push_button_g, &allkeyinfo.key_q.push_button_b, &allkeyinfo.key_q.rest_blabel_r, &allkeyinfo.key_q.rest_blabel_g,
    &allkeyinfo.key_q.rest_blabel_b, &allkeyinfo.key_q.push_blabel_r, &allkeyinfo.key_q.push_blabel_g, &allkeyinfo.key_q.push_blabel_b,
    &allkeyinfo.key_q.x, &allkeyinfo.key_q.y, &allkeyinfo.key_q.width, &allkeyinfo.key_q.height,

//Pointer block for button info of button key_w index = 16 to index = 31
    &allkeyinfo.key_w.rest_button_r, &allkeyinfo.key_w.rest_button_g, &allkeyinfo.key_w.rest_button_b, &allkeyinfo.key_w.push_button_r,
    &allkeyinfo.key_w.push_button_g, &allkeyinfo.key_w.push_button_b, &allkeyinfo.key_w.rest_blabel_r, &allkeyinfo.key_w.rest_blabel_g,
    &allkeyinfo.key_w.rest_blabel_b, &allkeyinfo.key_w.push_blabel_r, &allkeyinfo.key_w.push_blabel_g, &allkeyinfo.key_w.push_blabel_b,
    &allkeyinfo.key_w.x, &allkeyinfo.key_w.y, &allkeyinfo.key_w.width, &allkeyinfo.key_w.height,

//Pointer block for button info of button key_e index = 32 to index = 47
    &allkeyinfo.key_e.rest_button_r, &allkeyinfo.key_e.rest_button_g, &allkeyinfo.key_e.rest_button_b, &allkeyinfo.key_e.push_button_r,
    &allkeyinfo.key_e.push_button_g, &allkeyinfo.key_e.push_button_b, &allkeyinfo.key_e.rest_blabel_r, &allkeyinfo.key_e.rest_blabel_g,
    &allkeyinfo.key_e.rest_blabel_b, &allkeyinfo.key_e.push_blabel_r, &allkeyinfo.key_e.push_blabel_g, &allkeyinfo.key_e.push_blabel_b,
    &allkeyinfo.key_e.x, &allkeyinfo.key_e.y, &allkeyinfo.key_e.width, &allkeyinfo.key_e.height,

//Pointer block for button info of button key_r index = 48 to index = 63
    &allkeyinfo.key_r.rest_button_r, &allkeyinfo.key_r.rest_button_g, &allkeyinfo.key_r.rest_button_b, &allkeyinfo.key_r.push_button_r,
    &allkeyinfo.key_r.push_button_g, &allkeyinfo.key_r.push_button_b, &allkeyinfo.key_r.rest_blabel_r, &allkeyinfo.key_r.rest_blabel_g,
    &allkeyinfo.key_r.rest_blabel_b, &allkeyinfo.key_r.push_blabel_r, &allkeyinfo.key_r.push_blabel_g, &allkeyinfo.key_r.push_blabel_b,
    &allkeyinfo.key_r.x, &allkeyinfo.key_r.y, &allkeyinfo.key_r.width, &allkeyinfo.key_r.height,

//Pointer block for button info of button key_t index = 64 to index = 79
    &allkeyinfo.key_t.rest_button_r, &allkeyinfo.key_t.rest_button_g, &allkeyinfo.key_t.rest_button_b, &allkeyinfo.key_t.push_button_r,
    &allkeyinfo.key_t.push_button_g, &allkeyinfo.key_t.push_button_b, &allkeyinfo.key_t.rest_blabel_r, &allkeyinfo.key_t.rest_blabel_g,
    &allkeyinfo.key_t.rest_blabel_b, &allkeyinfo.key_t.push_blabel_r, &allkeyinfo.key_t.push_blabel_g, &allkeyinfo.key_t.push_blabel_b,
    &allkeyinfo.key_t.x, &allkeyinfo.key_t.y, &allkeyinfo.key_t.width, &allkeyinfo.key_t.height,

//Pointer block for button info of button key_y index = 80 to index = 95
    &allkeyinfo.key_y.rest_button_r, &allkeyinfo.key_y.rest_button_g, &allkeyinfo.key_y.rest_button_b, &allkeyinfo.key_y.push_button_r,
    &allkeyinfo.key_y.push_button_g, &allkeyinfo.key_y.push_button_b, &allkeyinfo.key_y.rest_blabel_r, &allkeyinfo.key_y.rest_blabel_g,
    &allkeyinfo.key_y.rest_blabel_b, &allkeyinfo.key_y.push_blabel_r, &allkeyinfo.key_y.push_blabel_g, &allkeyinfo.key_y.push_blabel_b,
    &allkeyinfo.key_y.x, &allkeyinfo.key_y.y, &allkeyinfo.key_y.width, &allkeyinfo.key_y.height,

//Pointer block for button info of button key_u index = 96 to index = 111
    &allkeyinfo.key_u.rest_button_r, &allkeyinfo.key_u.rest_button_g, &allkeyinfo.key_u.rest_button_b, &allkeyinfo.key_u.push_button_r,
    &allkeyinfo.key_u.push_button_g, &allkeyinfo.key_u.push_button_b, &allkeyinfo.key_u.rest_blabel_r, &allkeyinfo.key_u.rest_blabel_g,
    &allkeyinfo.key_u.rest_blabel_b, &allkeyinfo.key_u.push_blabel_r, &allkeyinfo.key_u.push_blabel_g, &allkeyinfo.key_u.push_blabel_b,
    &allkeyinfo.key_u.x, &allkeyinfo.key_u.y, &allkeyinfo.key_u.width, &allkeyinfo.key_u.height,

//Pointer block for button info of button key_i index = 112 to index = 127
    &allkeyinfo.key_i.rest_button_r, &allkeyinfo.key_i.rest_button_g, &allkeyinfo.key_i.rest_button_b, &allkeyinfo.key_i.push_button_r,
    &allkeyinfo.key_i.push_button_g, &allkeyinfo.key_i.push_button_b, &allkeyinfo.key_i.rest_blabel_r, &allkeyinfo.key_i.rest_blabel_g,
    &allkeyinfo.key_i.rest_blabel_b, &allkeyinfo.key_i.push_blabel_r, &allkeyinfo.key_i.push_blabel_g, &allkeyinfo.key_i.push_blabel_b,
    &allkeyinfo.key_i.x, &allkeyinfo.key_i.y, &allkeyinfo.key_i.width, &allkeyinfo.key_i.height,

//Pointer block for button info of button key_o index = 128 to index = 143
    &allkeyinfo.key_o.rest_button_r, &allkeyinfo.key_o.rest_button_g, &allkeyinfo.key_o.rest_button_b, &allkeyinfo.key_o.push_button_r,
    &allkeyinfo.key_o.push_button_g, &allkeyinfo.key_o.push_button_b, &allkeyinfo.key_o.rest_blabel_r, &allkeyinfo.key_o.rest_blabel_g,
    &allkeyinfo.key_o.rest_blabel_b, &allkeyinfo.key_o.push_blabel_r, &allkeyinfo.key_o.push_blabel_g, &allkeyinfo.key_o.push_blabel_b,
    &allkeyinfo.key_o.x, &allkeyinfo.key_o.y, &allkeyinfo.key_o.width, &allkeyinfo.key_o.height,

//Pointer block for button info of button key_p index index = 144 to index = 159
    &allkeyinfo.key_p.rest_button_r, &allkeyinfo.key_p.rest_button_g, &allkeyinfo.key_p.rest_button_b, &allkeyinfo.key_p.push_button_r,
    &allkeyinfo.key_p.push_button_g, &allkeyinfo.key_p.push_button_b, &allkeyinfo.key_p.rest_blabel_r, &allkeyinfo.key_p.rest_blabel_g,
    &allkeyinfo.key_p.rest_blabel_b, &allkeyinfo.key_p.push_blabel_r, &allkeyinfo.key_p.push_blabel_g, &allkeyinfo.key_p.push_blabel_b,
    &allkeyinfo.key_p.x, &allkeyinfo.key_p.y, &allkeyinfo.key_p.width, &allkeyinfo.key_p.height,

//Pointer block for button info of button key_a index = 160 to index = 175
    &allkeyinfo.key_a.rest_button_r, &allkeyinfo.key_a.rest_button_g, &allkeyinfo.key_a.rest_button_b, &allkeyinfo.key_a.push_button_r,
    &allkeyinfo.key_a.push_button_g, &allkeyinfo.key_a.push_button_b, &allkeyinfo.key_a.rest_blabel_r, &allkeyinfo.key_a.rest_blabel_g,
    &allkeyinfo.key_a.rest_blabel_b, &allkeyinfo.key_a.push_blabel_r, &allkeyinfo.key_a.push_blabel_g, &allkeyinfo.key_a.push_blabel_b,
    &allkeyinfo.key_a.x, &allkeyinfo.key_a.y, &allkeyinfo.key_a.width, &allkeyinfo.key_a.height,

//Pointer block for button info of button key_s index = 176 to index = 191
    &allkeyinfo.key_s.rest_button_r, &allkeyinfo.key_s.rest_button_g, &allkeyinfo.key_s.rest_button_b, &allkeyinfo.key_s.push_button_r,
    &allkeyinfo.key_s.push_button_g, &allkeyinfo.key_s.push_button_b, &allkeyinfo.key_s.rest_blabel_r, &allkeyinfo.key_s.rest_blabel_g,
    &allkeyinfo.key_s.rest_blabel_b, &allkeyinfo.key_s.push_blabel_r, &allkeyinfo.key_s.push_blabel_g, &allkeyinfo.key_s.push_blabel_b,
    &allkeyinfo.key_s.x, &allkeyinfo.key_s.y, &allkeyinfo.key_s.width, &allkeyinfo.key_s.height,

//Pointer block for button info of button key_d index = 192 to index = 207
    &allkeyinfo.key_d.rest_button_r, &allkeyinfo.key_d.rest_button_g, &allkeyinfo.key_d.rest_button_b, &allkeyinfo.key_d.push_button_r,
    &allkeyinfo.key_d.push_button_g, &allkeyinfo.key_d.push_button_b, &allkeyinfo.key_d.rest_blabel_r, &allkeyinfo.key_d.rest_blabel_g,
    &allkeyinfo.key_d.rest_blabel_b, &allkeyinfo.key_d.push_blabel_r, &allkeyinfo.key_d.push_blabel_g, &allkeyinfo.key_d.push_blabel_b,
    &allkeyinfo.key_d.x, &allkeyinfo.key_d.y, &allkeyinfo.key_d.width, &allkeyinfo.key_d.height,

//Pointer block for button info of button key_f index = 208 to index = 223
    &allkeyinfo.key_f.rest_button_r, &allkeyinfo.key_f.rest_button_g, &allkeyinfo.key_f.rest_button_b, &allkeyinfo.key_f.push_button_r,
    &allkeyinfo.key_f.push_button_g, &allkeyinfo.key_f.push_button_b, &allkeyinfo.key_f.rest_blabel_r, &allkeyinfo.key_f.rest_blabel_g,
    &allkeyinfo.key_f.rest_blabel_b, &allkeyinfo.key_f.push_blabel_r, &allkeyinfo.key_f.push_blabel_g, &allkeyinfo.key_f.push_blabel_b,
    &allkeyinfo.key_f.x, &allkeyinfo.key_f.y, &allkeyinfo.key_f.width, &allkeyinfo.key_f.height,

//Pointer block for button info of button key_g index = 224 to index = 239
    &allkeyinfo.key_g.rest_button_r, &allkeyinfo.key_g.rest_button_g, &allkeyinfo.key_g.rest_button_b, &allkeyinfo.key_g.push_button_r,
    &allkeyinfo.key_g.push_button_g, &allkeyinfo.key_g.push_button_b, &allkeyinfo.key_g.rest_blabel_r, &allkeyinfo.key_g.rest_blabel_g,
    &allkeyinfo.key_g.rest_blabel_b, &allkeyinfo.key_g.push_blabel_r, &allkeyinfo.key_g.push_blabel_g, &allkeyinfo.key_g.push_blabel_b,
    &allkeyinfo.key_g.x, &allkeyinfo.key_g.y, &allkeyinfo.key_g.width, &allkeyinfo.key_g.height,

//Pointer block for button info of button key_h index = 240 to index = 255
    &allkeyinfo.key_h.rest_button_r, &allkeyinfo.key_h.rest_button_g, &allkeyinfo.key_h.rest_button_b, &allkeyinfo.key_h.push_button_r,
    &allkeyinfo.key_h.push_button_g, &allkeyinfo.key_h.push_button_b, &allkeyinfo.key_h.rest_blabel_r, &allkeyinfo.key_h.rest_blabel_g,
    &allkeyinfo.key_h.rest_blabel_b, &allkeyinfo.key_h.push_blabel_r, &allkeyinfo.key_h.push_blabel_g, &allkeyinfo.key_h.push_blabel_b,
    &allkeyinfo.key_h.x, &allkeyinfo.key_h.y, &allkeyinfo.key_h.width, &allkeyinfo.key_h.height,

//Pointer block for button info of button key_j index = 256 to index = 271
    &allkeyinfo.key_j.rest_button_r, &allkeyinfo.key_j.rest_button_g, &allkeyinfo.key_j.rest_button_b, &allkeyinfo.key_j.push_button_r,
    &allkeyinfo.key_j.push_button_g, &allkeyinfo.key_j.push_button_b, &allkeyinfo.key_j.rest_blabel_r, &allkeyinfo.key_j.rest_blabel_g,
    &allkeyinfo.key_j.rest_blabel_b, &allkeyinfo.key_j.push_blabel_r, &allkeyinfo.key_j.push_blabel_g, &allkeyinfo.key_j.push_blabel_b,
    &allkeyinfo.key_j.x, &allkeyinfo.key_j.y, &allkeyinfo.key_j.width, &allkeyinfo.key_j.height,

//Pointer block for button info of button key_k index = 272 to index = 287
    &allkeyinfo.key_k.rest_button_r, &allkeyinfo.key_k.rest_button_g, &allkeyinfo.key_k.rest_button_b, &allkeyinfo.key_k.push_button_r,
    &allkeyinfo.key_k.push_button_g, &allkeyinfo.key_k.push_button_b, &allkeyinfo.key_k.rest_blabel_r, &allkeyinfo.key_k.rest_blabel_g,
    &allkeyinfo.key_k.rest_blabel_b, &allkeyinfo.key_k.push_blabel_r, &allkeyinfo.key_k.push_blabel_g, &allkeyinfo.key_k.push_blabel_b,
    &allkeyinfo.key_k.x, &allkeyinfo.key_k.y, &allkeyinfo.key_k.width, &allkeyinfo.key_k.height,

//Pointer block for button info of button key_l index = 288 to index = 303
    &allkeyinfo.key_l.rest_button_r, &allkeyinfo.key_l.rest_button_g, &allkeyinfo.key_l.rest_button_b, &allkeyinfo.key_l.push_button_r,
    &allkeyinfo.key_l.push_button_g, &allkeyinfo.key_l.push_button_b, &allkeyinfo.key_l.rest_blabel_r, &allkeyinfo.key_l.rest_blabel_g,
    &allkeyinfo.key_l.rest_blabel_b, &allkeyinfo.key_l.push_blabel_r, &allkeyinfo.key_l.push_blabel_g, &allkeyinfo.key_l.push_blabel_b,
    &allkeyinfo.key_l.x, &allkeyinfo.key_l.y, &allkeyinfo.key_l.width, &allkeyinfo.key_l.height,

//Pointer block for button info of button key_z index = 304 to index = 319
    &allkeyinfo.key_z.rest_button_r, &allkeyinfo.key_z.rest_button_g, &allkeyinfo.key_z.rest_button_b, &allkeyinfo.key_z.push_button_r,
    &allkeyinfo.key_z.push_button_g, &allkeyinfo.key_z.push_button_b, &allkeyinfo.key_z.rest_blabel_r, &allkeyinfo.key_z.rest_blabel_g,
    &allkeyinfo.key_z.rest_blabel_b, &allkeyinfo.key_z.push_blabel_r, &allkeyinfo.key_z.push_blabel_g, &allkeyinfo.key_z.push_blabel_b,
    &allkeyinfo.key_z.x, &allkeyinfo.key_z.y, &allkeyinfo.key_z.width, &allkeyinfo.key_z.height,

//Pointer block for button info of button key_x index = 320 to index = 335
    &allkeyinfo.key_x.rest_button_r, &allkeyinfo.key_x.rest_button_g, &allkeyinfo.key_x.rest_button_b, &allkeyinfo.key_x.push_button_r,
    &allkeyinfo.key_x.push_button_g, &allkeyinfo.key_x.push_button_b, &allkeyinfo.key_x.rest_blabel_r, &allkeyinfo.key_x.rest_blabel_g,
    &allkeyinfo.key_x.rest_blabel_b, &allkeyinfo.key_x.push_blabel_r, &allkeyinfo.key_x.push_blabel_g, &allkeyinfo.key_x.push_blabel_b,
    &allkeyinfo.key_x.x, &allkeyinfo.key_x.y, &allkeyinfo.key_x.width, &allkeyinfo.key_x.height,

//Pointer block for button info of button key_c index = 336 to index = 351
    &allkeyinfo.key_c.rest_button_r, &allkeyinfo.key_c.rest_button_g, &allkeyinfo.key_c.rest_button_b, &allkeyinfo.key_c.push_button_r,
    &allkeyinfo.key_c.push_button_g, &allkeyinfo.key_c.push_button_b, &allkeyinfo.key_c.rest_blabel_r, &allkeyinfo.key_c.rest_blabel_g,
    &allkeyinfo.key_c.rest_blabel_b, &allkeyinfo.key_c.push_blabel_r, &allkeyinfo.key_c.push_blabel_g, &allkeyinfo.key_c.push_blabel_b,
    &allkeyinfo.key_c.x, &allkeyinfo.key_c.y, &allkeyinfo.key_c.width, &allkeyinfo.key_c.height,

//Pointer block for button info of button key_v index = 352 to index = 367
    &allkeyinfo.key_v.rest_button_r, &allkeyinfo.key_v.rest_button_g, &allkeyinfo.key_v.rest_button_b, &allkeyinfo.key_v.push_button_r,
    &allkeyinfo.key_v.push_button_g, &allkeyinfo.key_v.push_button_b, &allkeyinfo.key_v.rest_blabel_r, &allkeyinfo.key_v.rest_blabel_g,
    &allkeyinfo.key_v.rest_blabel_b, &allkeyinfo.key_v.push_blabel_r, &allkeyinfo.key_v.push_blabel_g, &allkeyinfo.key_v.push_blabel_b,
    &allkeyinfo.key_v.x, &allkeyinfo.key_v.y, &allkeyinfo.key_v.width, &allkeyinfo.key_v.height,

//Pointer block for button info of button key_b index = 368 to index = 383
    &allkeyinfo.key_b.rest_button_r, &allkeyinfo.key_b.rest_button_g, &allkeyinfo.key_b.rest_button_b, &allkeyinfo.key_b.push_button_r,
    &allkeyinfo.key_b.push_button_g, &allkeyinfo.key_b.push_button_b, &allkeyinfo.key_b.rest_blabel_r, &allkeyinfo.key_b.rest_blabel_g,
    &allkeyinfo.key_b.rest_blabel_b, &allkeyinfo.key_b.push_blabel_r, &allkeyinfo.key_b.push_blabel_g, &allkeyinfo.key_b.push_blabel_b,
    &allkeyinfo.key_b.x, &allkeyinfo.key_b.y, &allkeyinfo.key_b.width, &allkeyinfo.key_b.height,

//Pointer block for button info of button key_n index = 384 to index = 399
    &allkeyinfo.key_n.rest_button_r, &allkeyinfo.key_n.rest_button_g, &allkeyinfo.key_n.rest_button_b, &allkeyinfo.key_n.push_button_r,
    &allkeyinfo.key_n.push_button_g, &allkeyinfo.key_n.push_button_b, &allkeyinfo.key_n.rest_blabel_r, &allkeyinfo.key_n.rest_blabel_g,
    &allkeyinfo.key_n.rest_blabel_b, &allkeyinfo.key_n.push_blabel_r, &allkeyinfo.key_n.push_blabel_g, &allkeyinfo.key_n.push_blabel_b,
    &allkeyinfo.key_n.x, &allkeyinfo.key_n.y, &allkeyinfo.key_n.width, &allkeyinfo.key_n.height,

//Pointer block for button info of button key_m index = 400 to index = 415
    &allkeyinfo.key_m.rest_button_r, &allkeyinfo.key_m.rest_button_g, &allkeyinfo.key_m.rest_button_b, &allkeyinfo.key_m.push_button_r,
    &allkeyinfo.key_m.push_button_g, &allkeyinfo.key_m.push_button_b, &allkeyinfo.key_m.rest_blabel_r, &allkeyinfo.key_m.rest_blabel_g,
    &allkeyinfo.key_m.rest_blabel_b, &allkeyinfo.key_m.push_blabel_r, &allkeyinfo.key_m.push_blabel_g, &allkeyinfo.key_m.push_blabel_b,
    &allkeyinfo.key_m.x, &allkeyinfo.key_m.y, &allkeyinfo.key_m.width, &allkeyinfo.key_m.height,

//Pointer block for button info of button key_bksp index = 416 to index = 431
    &allkeyinfo.key_bksp.rest_button_r, &allkeyinfo.key_bksp.rest_button_g, &allkeyinfo.key_bksp.rest_button_b, &allkeyinfo.key_bksp.push_button_r,
    &allkeyinfo.key_bksp.push_button_g, &allkeyinfo.key_bksp.push_button_b, &allkeyinfo.key_bksp.rest_blabel_r, &allkeyinfo.key_bksp.rest_blabel_g,
    &allkeyinfo.key_bksp.rest_blabel_b, &allkeyinfo.key_bksp.push_blabel_r, &allkeyinfo.key_bksp.push_blabel_g, &allkeyinfo.key_bksp.push_blabel_b,
    &allkeyinfo.key_bksp.x, &allkeyinfo.key_bksp.y, &allkeyinfo.key_bksp.width, &allkeyinfo.key_bksp.height,

//Pointer block for button info of button key_enter index = 432 to index = 447
    &allkeyinfo.key_enter.rest_button_r, &allkeyinfo.key_enter.rest_button_g, &allkeyinfo.key_enter.rest_button_b, &allkeyinfo.key_enter.push_button_r,
    &allkeyinfo.key_enter.push_button_g, &allkeyinfo.key_enter.push_button_b, &allkeyinfo.key_enter.rest_blabel_r, &allkeyinfo.key_enter.rest_blabel_g,
    &allkeyinfo.key_enter.rest_blabel_b, &allkeyinfo.key_enter.push_blabel_r, &allkeyinfo.key_enter.push_blabel_g, &allkeyinfo.key_enter.push_blabel_b,
    &allkeyinfo.key_enter.x, &allkeyinfo.key_enter.y, &allkeyinfo.key_enter.width, &allkeyinfo.key_enter.height,
};


/* Global struct storing info for the main menu button cluster */
struct MainMenuButton {
    struct Option_NewGame {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } option_newgame;
    struct Option_Help
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } option_help;
    struct Option_Quit
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } option_quit;
    struct Option_About
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } option_about;
};
extern struct MainMenuButton mainmenubutton;

extern char *errordisplay_link_index_to_label[3] = {
    "Not enough letters!", "Not in dictionary!", "Guess cannot have repeating letters!"
};

/* Pointer block for button info of main menu buttons */
extern int *mainmenubuttonptr[64] = {
//Pointer block for button info of option_newgame index = 0 to index = 15
    &mainmenubutton.option_newgame.rest_button_r, &mainmenubutton.option_newgame.rest_button_g, &mainmenubutton.option_newgame.rest_button_b, &mainmenubutton.option_newgame.push_button_r,
    &mainmenubutton.option_newgame.push_button_g, &mainmenubutton.option_newgame.push_button_b, &mainmenubutton.option_newgame.rest_blabel_r, &mainmenubutton.option_newgame.rest_blabel_g,
    &mainmenubutton.option_newgame.rest_blabel_b, &mainmenubutton.option_newgame.push_blabel_r, &mainmenubutton.option_newgame.push_blabel_g, &mainmenubutton.option_newgame.push_blabel_b,
    &mainmenubutton.option_newgame.x, &mainmenubutton.option_newgame.y, &mainmenubutton.option_newgame.width, &mainmenubutton.option_newgame.height,

//Pointer block for button info of option_help index = 16 to index = 31
    &mainmenubutton.option_help.rest_button_r, &mainmenubutton.option_help.rest_button_g, &mainmenubutton.option_help.rest_button_b, &mainmenubutton.option_help.push_button_r,
    &mainmenubutton.option_help.push_button_g, &mainmenubutton.option_help.push_button_b, &mainmenubutton.option_help.rest_blabel_r, &mainmenubutton.option_help.rest_blabel_g,
    &mainmenubutton.option_help.rest_blabel_b, &mainmenubutton.option_help.push_blabel_r, &mainmenubutton.option_help.push_blabel_g, &mainmenubutton.option_help.push_blabel_b,
    &mainmenubutton.option_help.x, &mainmenubutton.option_help.y, &mainmenubutton.option_help.width, &mainmenubutton.option_help.height,

//Pointer block for button info of option_quit index = 32 to index = 47
    &mainmenubutton.option_quit.rest_button_r, &mainmenubutton.option_quit.rest_button_g, &mainmenubutton.option_quit.rest_button_b, &mainmenubutton.option_quit.push_button_r,
    &mainmenubutton.option_quit.push_button_g, &mainmenubutton.option_quit.push_button_b, &mainmenubutton.option_quit.rest_blabel_r, &mainmenubutton.option_quit.rest_blabel_g,
    &mainmenubutton.option_quit.rest_blabel_b, &mainmenubutton.option_quit.push_blabel_r, &mainmenubutton.option_quit.push_blabel_g, &mainmenubutton.option_quit.push_blabel_b,
    &mainmenubutton.option_quit.x, &mainmenubutton.option_quit.y, &mainmenubutton.option_quit.width, &mainmenubutton.option_quit.height,

//Pointer block for button info of option_abuout index = 48 to index = 63
    &mainmenubutton.option_about.rest_button_r, &mainmenubutton.option_about.rest_button_g, &mainmenubutton.option_about.rest_button_b, &mainmenubutton.option_about.push_button_r,
    &mainmenubutton.option_about.push_button_g, &mainmenubutton.option_about.push_button_b, &mainmenubutton.option_about.rest_blabel_r, &mainmenubutton.option_about.rest_blabel_g,
    &mainmenubutton.option_about.rest_blabel_b, &mainmenubutton.option_about.push_blabel_r, &mainmenubutton.option_about.push_blabel_g, &mainmenubutton.option_about.push_blabel_b,
    &mainmenubutton.option_about.x, &mainmenubutton.option_about.y, &mainmenubutton.option_about.width, &mainmenubutton.option_about.height
};
/* Stores nickname of main menu buttons based on their index */
extern char *mainmenu_link_index_to_nickname[4] = {
    "option_newgame", "option_help", "option_quit", "option_about"
};
/* Stores label of main menu buttons based on their index */
extern char *mainmenu_link_index_to_label[4] = {
    "    new game", "         help", "         quit", "        about"
};

/* Global struct storing info for the preview matrix */
struct PreviewMatrix {
    struct Box_00 {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } box_00;
    struct Box_01
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;
    } box_01;
    struct Box_02
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_02;
    struct Box_03
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_03;
    struct Box_04
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_04;
    struct Box_10
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_10;
    struct Box_11
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_11;
    struct Box_12
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_12;
    struct Box_13
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_13;
    struct Box_14
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_14;
    struct Box_20
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_20;
    struct Box_21
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_21;
    struct Box_22
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_22;
    struct Box_23
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_23;
    struct Box_24
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_24;
    struct Box_30
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_30;
    struct Box_31
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_31;
    struct Box_32
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_32;
    struct Box_33
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_33;
    struct Box_34
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_34;
    struct Box_40
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_40;
    struct Box_41
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_41;
    struct Box_42
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_42;
    struct Box_43
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_43;
    struct Box_44
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_44;
    struct Box_50
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_50;
    struct Box_51
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_51;
    struct Box_52
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_52;
    struct Box_53
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_53;
    struct Box_54
    {
        int rest_button_r, rest_button_g, rest_button_b;
        int push_button_r, push_button_g, push_button_b;
        int rest_blabel_r, rest_blabel_g, rest_blabel_b;
        int push_blabel_r, push_blabel_g, push_blabel_b;
        int x, y, width, height;        
    } box_54;
};
extern struct PreviewMatrix previewmatrix;

/* Pointer block for info of boxes in preview matrix */
extern int *previewmatrixptr[480] = {
//Pointer block for box_00, index = 0 to index = 15
    &previewmatrix.box_00.rest_button_r, &previewmatrix.box_00.rest_button_g, &previewmatrix.box_00.rest_button_b, &previewmatrix.box_00.push_button_r,
    &previewmatrix.box_00.push_button_g, &previewmatrix.box_00.push_button_b, &previewmatrix.box_00.rest_blabel_r, &previewmatrix.box_00.rest_blabel_g,
    &previewmatrix.box_00.rest_blabel_b, &previewmatrix.box_00.push_blabel_r, &previewmatrix.box_00.push_blabel_g, &previewmatrix.box_00.push_blabel_b,
    &previewmatrix.box_00.x,             &previewmatrix.box_00.y,             &previewmatrix.box_00.width,         &previewmatrix.box_00.height,
//Pointer block for box_01, index = 16 to index = 31
    &previewmatrix.box_01.rest_button_r, &previewmatrix.box_01.rest_button_g, &previewmatrix.box_01.rest_button_b, &previewmatrix.box_01.push_button_r,
    &previewmatrix.box_01.push_button_g, &previewmatrix.box_01.push_button_b, &previewmatrix.box_01.rest_blabel_r, &previewmatrix.box_01.rest_blabel_g,
    &previewmatrix.box_01.rest_blabel_b, &previewmatrix.box_01.push_blabel_r, &previewmatrix.box_01.push_blabel_g, &previewmatrix.box_01.push_blabel_b,
    &previewmatrix.box_01.x,             &previewmatrix.box_01.y,             &previewmatrix.box_01.width,         &previewmatrix.box_01.height,
//Pointer block for box_02, index = 32 to index = 47
    &previewmatrix.box_02.rest_button_r, &previewmatrix.box_02.rest_button_g, &previewmatrix.box_02.rest_button_b, &previewmatrix.box_02.push_button_r,
    &previewmatrix.box_02.push_button_g, &previewmatrix.box_02.push_button_b, &previewmatrix.box_02.rest_blabel_r, &previewmatrix.box_02.rest_blabel_g,
    &previewmatrix.box_02.rest_blabel_b, &previewmatrix.box_02.push_blabel_r, &previewmatrix.box_02.push_blabel_g, &previewmatrix.box_02.push_blabel_b,
    &previewmatrix.box_02.x,             &previewmatrix.box_02.y,             &previewmatrix.box_02.width,         &previewmatrix.box_02.height,
//Pointer block for box_03, index = 48 to index = 63
    &previewmatrix.box_03.rest_button_r, &previewmatrix.box_03.rest_button_g, &previewmatrix.box_03.rest_button_b, &previewmatrix.box_03.push_button_r,
    &previewmatrix.box_03.push_button_g, &previewmatrix.box_03.push_button_b, &previewmatrix.box_03.rest_blabel_r, &previewmatrix.box_03.rest_blabel_g,
    &previewmatrix.box_03.rest_blabel_b, &previewmatrix.box_03.push_blabel_r, &previewmatrix.box_03.push_blabel_g, &previewmatrix.box_03.push_blabel_b,
    &previewmatrix.box_03.x,             &previewmatrix.box_03.y,             &previewmatrix.box_03.width,         &previewmatrix.box_03.height,
//Pointer block for box_04, index = 64 to index = 79
    &previewmatrix.box_04.rest_button_r, &previewmatrix.box_04.rest_button_g, &previewmatrix.box_04.rest_button_b, &previewmatrix.box_04.push_button_r,
    &previewmatrix.box_04.push_button_g, &previewmatrix.box_04.push_button_b, &previewmatrix.box_04.rest_blabel_r, &previewmatrix.box_04.rest_blabel_g,
    &previewmatrix.box_04.rest_blabel_b, &previewmatrix.box_04.push_blabel_r, &previewmatrix.box_04.push_blabel_g, &previewmatrix.box_04.push_blabel_b,
    &previewmatrix.box_04.x,             &previewmatrix.box_04.y,             &previewmatrix.box_04.width,         &previewmatrix.box_04.height,
//Pointer block for box_10, index = 80 to index = 95
    &previewmatrix.box_10.rest_button_r, &previewmatrix.box_10.rest_button_g, &previewmatrix.box_10.rest_button_b, &previewmatrix.box_10.push_button_r,
    &previewmatrix.box_10.push_button_g, &previewmatrix.box_10.push_button_b, &previewmatrix.box_10.rest_blabel_r, &previewmatrix.box_10.rest_blabel_g,
    &previewmatrix.box_10.rest_blabel_b, &previewmatrix.box_10.push_blabel_r, &previewmatrix.box_10.push_blabel_g, &previewmatrix.box_10.push_blabel_b,
    &previewmatrix.box_10.x,             &previewmatrix.box_10.y,             &previewmatrix.box_10.width,         &previewmatrix.box_10.height,
//Pointer block for box_11, index = 96 to index = 111
    &previewmatrix.box_11.rest_button_r, &previewmatrix.box_11.rest_button_g, &previewmatrix.box_11.rest_button_b, &previewmatrix.box_11.push_button_r,
    &previewmatrix.box_11.push_button_g, &previewmatrix.box_11.push_button_b, &previewmatrix.box_11.rest_blabel_r, &previewmatrix.box_11.rest_blabel_g,
    &previewmatrix.box_11.rest_blabel_b, &previewmatrix.box_11.push_blabel_r, &previewmatrix.box_11.push_blabel_g, &previewmatrix.box_11.push_blabel_b,
    &previewmatrix.box_11.x,             &previewmatrix.box_11.y,             &previewmatrix.box_11.width,         &previewmatrix.box_11.height,
//Pointer block for box_12, index = 112 to index = 127
    &previewmatrix.box_12.rest_button_r, &previewmatrix.box_12.rest_button_g, &previewmatrix.box_12.rest_button_b, &previewmatrix.box_12.push_button_r,
    &previewmatrix.box_12.push_button_g, &previewmatrix.box_12.push_button_b, &previewmatrix.box_12.rest_blabel_r, &previewmatrix.box_12.rest_blabel_g,
    &previewmatrix.box_12.rest_blabel_b, &previewmatrix.box_12.push_blabel_r, &previewmatrix.box_12.push_blabel_g, &previewmatrix.box_12.push_blabel_b,
    &previewmatrix.box_12.x,             &previewmatrix.box_12.y,             &previewmatrix.box_12.width,         &previewmatrix.box_12.height,
//Pointer block for box_13, index = 128 to index = 143
    &previewmatrix.box_13.rest_button_r, &previewmatrix.box_13.rest_button_g, &previewmatrix.box_13.rest_button_b, &previewmatrix.box_13.push_button_r,
    &previewmatrix.box_13.push_button_g, &previewmatrix.box_13.push_button_b, &previewmatrix.box_13.rest_blabel_r, &previewmatrix.box_13.rest_blabel_g,
    &previewmatrix.box_13.rest_blabel_b, &previewmatrix.box_13.push_blabel_r, &previewmatrix.box_13.push_blabel_g, &previewmatrix.box_13.push_blabel_b,
    &previewmatrix.box_13.x,             &previewmatrix.box_13.y,             &previewmatrix.box_13.width,         &previewmatrix.box_13.height,
//Pointer block for box_14, index = 144 to index = 159
    &previewmatrix.box_14.rest_button_r, &previewmatrix.box_14.rest_button_g, &previewmatrix.box_14.rest_button_b, &previewmatrix.box_14.push_button_r,
    &previewmatrix.box_14.push_button_g, &previewmatrix.box_14.push_button_b, &previewmatrix.box_14.rest_blabel_r, &previewmatrix.box_14.rest_blabel_g,
    &previewmatrix.box_14.rest_blabel_b, &previewmatrix.box_14.push_blabel_r, &previewmatrix.box_14.push_blabel_g, &previewmatrix.box_14.push_blabel_b,
    &previewmatrix.box_14.x,             &previewmatrix.box_14.y,             &previewmatrix.box_14.width,         &previewmatrix.box_14.height,
//Pointer block for box_20, index = 160 to index = 175
    &previewmatrix.box_20.rest_button_r, &previewmatrix.box_20.rest_button_g, &previewmatrix.box_20.rest_button_b, &previewmatrix.box_20.push_button_r,
    &previewmatrix.box_20.push_button_g, &previewmatrix.box_20.push_button_b, &previewmatrix.box_20.rest_blabel_r, &previewmatrix.box_20.rest_blabel_g,
    &previewmatrix.box_20.rest_blabel_b, &previewmatrix.box_20.push_blabel_r, &previewmatrix.box_20.push_blabel_g, &previewmatrix.box_20.push_blabel_b,
    &previewmatrix.box_20.x,             &previewmatrix.box_20.y,             &previewmatrix.box_20.width,         &previewmatrix.box_20.height,
//Pointer block for box_21, index = 176 to index = 191
    &previewmatrix.box_21.rest_button_r, &previewmatrix.box_21.rest_button_g, &previewmatrix.box_21.rest_button_b, &previewmatrix.box_21.push_button_r,
    &previewmatrix.box_21.push_button_g, &previewmatrix.box_21.push_button_b, &previewmatrix.box_21.rest_blabel_r, &previewmatrix.box_21.rest_blabel_g,
    &previewmatrix.box_21.rest_blabel_b, &previewmatrix.box_21.push_blabel_r, &previewmatrix.box_21.push_blabel_g, &previewmatrix.box_21.push_blabel_b,
    &previewmatrix.box_21.x,             &previewmatrix.box_21.y,             &previewmatrix.box_21.width,         &previewmatrix.box_21.height,
//Pointer block for box_22, index = 192 to index = 207
    &previewmatrix.box_22.rest_button_r, &previewmatrix.box_22.rest_button_g, &previewmatrix.box_22.rest_button_b, &previewmatrix.box_22.push_button_r,
    &previewmatrix.box_22.push_button_g, &previewmatrix.box_22.push_button_b, &previewmatrix.box_22.rest_blabel_r, &previewmatrix.box_22.rest_blabel_g,
    &previewmatrix.box_22.rest_blabel_b, &previewmatrix.box_22.push_blabel_r, &previewmatrix.box_22.push_blabel_g, &previewmatrix.box_22.push_blabel_b,
    &previewmatrix.box_22.x,             &previewmatrix.box_22.y,             &previewmatrix.box_22.width,         &previewmatrix.box_22.height,
//Pointer block for box_23, index = 208 to index = 223
    &previewmatrix.box_23.rest_button_r, &previewmatrix.box_23.rest_button_g, &previewmatrix.box_23.rest_button_b, &previewmatrix.box_23.push_button_r,
    &previewmatrix.box_23.push_button_g, &previewmatrix.box_23.push_button_b, &previewmatrix.box_23.rest_blabel_r, &previewmatrix.box_23.rest_blabel_g,
    &previewmatrix.box_23.rest_blabel_b, &previewmatrix.box_23.push_blabel_r, &previewmatrix.box_23.push_blabel_g, &previewmatrix.box_23.push_blabel_b,
    &previewmatrix.box_23.x,             &previewmatrix.box_23.y,             &previewmatrix.box_23.width,         &previewmatrix.box_23.height,
//Pointer block for box_24, index = 224 to index = 239
    &previewmatrix.box_24.rest_button_r, &previewmatrix.box_24.rest_button_g, &previewmatrix.box_24.rest_button_b, &previewmatrix.box_24.push_button_r,
    &previewmatrix.box_24.push_button_g, &previewmatrix.box_24.push_button_b, &previewmatrix.box_24.rest_blabel_r, &previewmatrix.box_24.rest_blabel_g,
    &previewmatrix.box_24.rest_blabel_b, &previewmatrix.box_24.push_blabel_r, &previewmatrix.box_24.push_blabel_g, &previewmatrix.box_24.push_blabel_b,
    &previewmatrix.box_24.x,             &previewmatrix.box_24.y,             &previewmatrix.box_24.width,         &previewmatrix.box_24.height,
//Pointer block for box_30, index = 240 to index = 255
    &previewmatrix.box_30.rest_button_r, &previewmatrix.box_30.rest_button_g, &previewmatrix.box_30.rest_button_b, &previewmatrix.box_30.push_button_r,
    &previewmatrix.box_30.push_button_g, &previewmatrix.box_30.push_button_b, &previewmatrix.box_30.rest_blabel_r, &previewmatrix.box_30.rest_blabel_g,
    &previewmatrix.box_30.rest_blabel_b, &previewmatrix.box_30.push_blabel_r, &previewmatrix.box_30.push_blabel_g, &previewmatrix.box_30.push_blabel_b,
    &previewmatrix.box_30.x,             &previewmatrix.box_30.y,             &previewmatrix.box_30.width,         &previewmatrix.box_30.height,
//Pointer block for box_31, index = 256 to index = 271
    &previewmatrix.box_31.rest_button_r, &previewmatrix.box_31.rest_button_g, &previewmatrix.box_31.rest_button_b, &previewmatrix.box_31.push_button_r,
    &previewmatrix.box_31.push_button_g, &previewmatrix.box_31.push_button_b, &previewmatrix.box_31.rest_blabel_r, &previewmatrix.box_31.rest_blabel_g,
    &previewmatrix.box_31.rest_blabel_b, &previewmatrix.box_31.push_blabel_r, &previewmatrix.box_31.push_blabel_g, &previewmatrix.box_31.push_blabel_b,
    &previewmatrix.box_31.x,             &previewmatrix.box_31.y,             &previewmatrix.box_31.width,         &previewmatrix.box_31.height,
//Pointer block for box_32, index = 272 to index = 287
    &previewmatrix.box_32.rest_button_r, &previewmatrix.box_32.rest_button_g, &previewmatrix.box_32.rest_button_b, &previewmatrix.box_32.push_button_r,
    &previewmatrix.box_32.push_button_g, &previewmatrix.box_32.push_button_b, &previewmatrix.box_32.rest_blabel_r, &previewmatrix.box_32.rest_blabel_g,
    &previewmatrix.box_32.rest_blabel_b, &previewmatrix.box_32.push_blabel_r, &previewmatrix.box_32.push_blabel_g, &previewmatrix.box_32.push_blabel_b,
    &previewmatrix.box_32.x,             &previewmatrix.box_32.y,             &previewmatrix.box_32.width,         &previewmatrix.box_32.height,
//Pointer block for box_33, index = 288 to index = 303
    &previewmatrix.box_33.rest_button_r, &previewmatrix.box_33.rest_button_g, &previewmatrix.box_33.rest_button_b, &previewmatrix.box_33.push_button_r,
    &previewmatrix.box_33.push_button_g, &previewmatrix.box_33.push_button_b, &previewmatrix.box_33.rest_blabel_r, &previewmatrix.box_33.rest_blabel_g,
    &previewmatrix.box_33.rest_blabel_b, &previewmatrix.box_33.push_blabel_r, &previewmatrix.box_33.push_blabel_g, &previewmatrix.box_33.push_blabel_b,
    &previewmatrix.box_33.x,             &previewmatrix.box_33.y,             &previewmatrix.box_33.width,         &previewmatrix.box_33.height,
//Pointer block for box_34, index = 304 to index = 319
    &previewmatrix.box_34.rest_button_r, &previewmatrix.box_34.rest_button_g, &previewmatrix.box_34.rest_button_b, &previewmatrix.box_34.push_button_r,
    &previewmatrix.box_34.push_button_g, &previewmatrix.box_34.push_button_b, &previewmatrix.box_34.rest_blabel_r, &previewmatrix.box_34.rest_blabel_g,
    &previewmatrix.box_34.rest_blabel_b, &previewmatrix.box_34.push_blabel_r, &previewmatrix.box_34.push_blabel_g, &previewmatrix.box_34.push_blabel_b,
    &previewmatrix.box_34.x,             &previewmatrix.box_34.y,             &previewmatrix.box_34.width,         &previewmatrix.box_34.height,
//Pointer block for box_40, index = 320 to index = 335
    &previewmatrix.box_40.rest_button_r, &previewmatrix.box_40.rest_button_g, &previewmatrix.box_40.rest_button_b, &previewmatrix.box_40.push_button_r,
    &previewmatrix.box_40.push_button_g, &previewmatrix.box_40.push_button_b, &previewmatrix.box_40.rest_blabel_r, &previewmatrix.box_40.rest_blabel_g,
    &previewmatrix.box_40.rest_blabel_b, &previewmatrix.box_40.push_blabel_r, &previewmatrix.box_40.push_blabel_g, &previewmatrix.box_40.push_blabel_b,
    &previewmatrix.box_40.x,             &previewmatrix.box_40.y,             &previewmatrix.box_40.width,         &previewmatrix.box_40.height,
//Pointer block for box_41, index = 336 to index = 351
    &previewmatrix.box_41.rest_button_r, &previewmatrix.box_41.rest_button_g, &previewmatrix.box_41.rest_button_b, &previewmatrix.box_41.push_button_r,
    &previewmatrix.box_41.push_button_g, &previewmatrix.box_41.push_button_b, &previewmatrix.box_41.rest_blabel_r, &previewmatrix.box_41.rest_blabel_g,
    &previewmatrix.box_41.rest_blabel_b, &previewmatrix.box_41.push_blabel_r, &previewmatrix.box_41.push_blabel_g, &previewmatrix.box_41.push_blabel_b,
    &previewmatrix.box_41.x,             &previewmatrix.box_41.y,             &previewmatrix.box_41.width,         &previewmatrix.box_41.height,
//Pointer block for box_42, index = 352 to index = 367
    &previewmatrix.box_42.rest_button_r, &previewmatrix.box_42.rest_button_g, &previewmatrix.box_42.rest_button_b, &previewmatrix.box_42.push_button_r,
    &previewmatrix.box_42.push_button_g, &previewmatrix.box_42.push_button_b, &previewmatrix.box_42.rest_blabel_r, &previewmatrix.box_42.rest_blabel_g,
    &previewmatrix.box_42.rest_blabel_b, &previewmatrix.box_42.push_blabel_r, &previewmatrix.box_42.push_blabel_g, &previewmatrix.box_42.push_blabel_b,
    &previewmatrix.box_42.x,             &previewmatrix.box_42.y,             &previewmatrix.box_42.width,         &previewmatrix.box_42.height,
//Pointer block for box_43, index = 368 to index = 383
    &previewmatrix.box_43.rest_button_r, &previewmatrix.box_43.rest_button_g, &previewmatrix.box_43.rest_button_b, &previewmatrix.box_43.push_button_r,
    &previewmatrix.box_43.push_button_g, &previewmatrix.box_43.push_button_b, &previewmatrix.box_43.rest_blabel_r, &previewmatrix.box_43.rest_blabel_g,
    &previewmatrix.box_43.rest_blabel_b, &previewmatrix.box_43.push_blabel_r, &previewmatrix.box_43.push_blabel_g, &previewmatrix.box_43.push_blabel_b,
    &previewmatrix.box_43.x,             &previewmatrix.box_43.y,             &previewmatrix.box_43.width,         &previewmatrix.box_43.height,
//Pointer block for box_44, index = 384 to index = 399
    &previewmatrix.box_44.rest_button_r, &previewmatrix.box_44.rest_button_g, &previewmatrix.box_44.rest_button_b, &previewmatrix.box_44.push_button_r,
    &previewmatrix.box_44.push_button_g, &previewmatrix.box_44.push_button_b, &previewmatrix.box_44.rest_blabel_r, &previewmatrix.box_44.rest_blabel_g,
    &previewmatrix.box_44.rest_blabel_b, &previewmatrix.box_44.push_blabel_r, &previewmatrix.box_44.push_blabel_g, &previewmatrix.box_44.push_blabel_b,
    &previewmatrix.box_44.x,             &previewmatrix.box_44.y,             &previewmatrix.box_44.width,         &previewmatrix.box_44.height,
//Pointer block for box_50, index = 400 to index = 415
    &previewmatrix.box_50.rest_button_r, &previewmatrix.box_50.rest_button_g, &previewmatrix.box_50.rest_button_b, &previewmatrix.box_50.push_button_r,
    &previewmatrix.box_50.push_button_g, &previewmatrix.box_50.push_button_b, &previewmatrix.box_50.rest_blabel_r, &previewmatrix.box_50.rest_blabel_g,
    &previewmatrix.box_50.rest_blabel_b, &previewmatrix.box_50.push_blabel_r, &previewmatrix.box_50.push_blabel_g, &previewmatrix.box_50.push_blabel_b,
    &previewmatrix.box_50.x,             &previewmatrix.box_50.y,             &previewmatrix.box_50.width,         &previewmatrix.box_50.height,
//Pointer block for box_51, index = 416 to index = 431
    &previewmatrix.box_51.rest_button_r, &previewmatrix.box_51.rest_button_g, &previewmatrix.box_51.rest_button_b, &previewmatrix.box_51.push_button_r,
    &previewmatrix.box_51.push_button_g, &previewmatrix.box_51.push_button_b, &previewmatrix.box_51.rest_blabel_r, &previewmatrix.box_51.rest_blabel_g,
    &previewmatrix.box_51.rest_blabel_b, &previewmatrix.box_51.push_blabel_r, &previewmatrix.box_51.push_blabel_g, &previewmatrix.box_51.push_blabel_b,
    &previewmatrix.box_51.x,             &previewmatrix.box_51.y,             &previewmatrix.box_51.width,         &previewmatrix.box_51.height,
//Pointer block for box_52, index = 432 to index = 447
    &previewmatrix.box_52.rest_button_r, &previewmatrix.box_52.rest_button_g, &previewmatrix.box_52.rest_button_b, &previewmatrix.box_52.push_button_r,
    &previewmatrix.box_52.push_button_g, &previewmatrix.box_52.push_button_b, &previewmatrix.box_52.rest_blabel_r, &previewmatrix.box_52.rest_blabel_g,
    &previewmatrix.box_52.rest_blabel_b, &previewmatrix.box_52.push_blabel_r, &previewmatrix.box_52.push_blabel_g, &previewmatrix.box_52.push_blabel_b,
    &previewmatrix.box_52.x,             &previewmatrix.box_52.y,             &previewmatrix.box_52.width,         &previewmatrix.box_52.height,
//Pointer block for box_53, index = 448 to index = 463
    &previewmatrix.box_53.rest_button_r, &previewmatrix.box_53.rest_button_g, &previewmatrix.box_53.rest_button_b, &previewmatrix.box_53.push_button_r,
    &previewmatrix.box_53.push_button_g, &previewmatrix.box_53.push_button_b, &previewmatrix.box_53.rest_blabel_r, &previewmatrix.box_53.rest_blabel_g,
    &previewmatrix.box_53.rest_blabel_b, &previewmatrix.box_53.push_blabel_r, &previewmatrix.box_53.push_blabel_g, &previewmatrix.box_53.push_blabel_b,
    &previewmatrix.box_53.x,             &previewmatrix.box_53.y,             &previewmatrix.box_53.width,         &previewmatrix.box_53.height,
//Pointer block for box_54, index = 464 to index = 479
    &previewmatrix.box_54.rest_button_r, &previewmatrix.box_54.rest_button_g, &previewmatrix.box_54.rest_button_b, &previewmatrix.box_54.push_button_r,
    &previewmatrix.box_54.push_button_g, &previewmatrix.box_54.push_button_b, &previewmatrix.box_54.rest_blabel_r, &previewmatrix.box_54.rest_blabel_g,
    &previewmatrix.box_54.rest_blabel_b, &previewmatrix.box_54.push_blabel_r, &previewmatrix.box_54.push_blabel_g, &previewmatrix.box_54.push_blabel_b,
    &previewmatrix.box_54.x,             &previewmatrix.box_54.y,             &previewmatrix.box_54.width,         &previewmatrix.box_54.height
};
/* Stores nickname of preview matrix boxes based on their index */
extern char *previewmatrix_link_index_to_nickname[30] = {
    "box_00", "box_01", "box_02", "box_03", "box_04",
    "box_10", "box_11", "box_12", "box_13", "box_14",
    "box_20", "box_21", "box_22", "box_23", "box_24",
    "box_30", "box_31", "box_32", "box_33", "box_34",
    "box_40", "box_41", "box_42", "box_43", "box_44",
    "box_50", "box_51", "box_52", "box_53", "box_54"
};
/* Stores label of preview matrix boxes based on their index */
extern char *previewmatrix_link_index_to_label[30] = {
    "", "", "", "", "",
    "", "", "", "", "",
    "", "", "", "", "",
    "", "", "", "", "",
    "", "", "", "", "",
    "", "", "", "", ""
};

/* 0 = default, 1 = green, 2 = yellow, 3 = grey */
extern int previewmatrix_link_index_to_state[30] = {
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0
};
#endif // !ELEMENTINFOS_H