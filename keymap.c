#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer 0 (Default)
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |RShift| Mod  | Alt  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
	[0] = LAYOUT_preonic_1x2uC(
		KC_GRV , KC_1   , KC_2   , KC_3   , KC_4 , KC_5 , KC_6 , KC_7 , KC_8   , KC_9   , KC_0   , KC_BSPC, 
		KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R , KC_T , KC_Y , KC_U , KC_I   , KC_O   , KC_P   , KC_DEL, 
		KC_ESC , KC_A   , KC_S   , KC_D   , KC_F , KC_G , KC_H , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT, 
		KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V , KC_B , KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_ENT,
		KC_LCTL, KC_RSFT, KC_LGUI, KC_LALT, MO(1),    KC_SPC   , MO(2), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT),

/* Layer 1
 * ,-----------------------------------------------------------------------------------.
 * |  Esc |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | CAPS |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  Ins |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   |  |   |  | Home |  End |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Pause| Mod  | Alt  |Lower |    Space    |MO(3) | Mute | Prev | Next | Play |
 * `-----------------------------------------------------------------------------------'
 */
	[1] = LAYOUT_preonic_1x2uC(
			KC_ESC , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
			KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
			KC_CAPS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_INS,
			KC_LSFT, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PIPE, KC_PIPE, KC_HOME, KC_END , KC_ENT,
			KC_LCTL, KC_PAUS, KC_LGUI, KC_LALT, KC_TRNS,     KC_SPC      , MO(3)  , KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY),

/* Layer 2
 * ,-----------------------------------------------------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | PSCR |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |   /  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   \  |   \  | PGUP |PGDOWN|Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Pause| Mod  | Alt  |MO(3) |    Space    |Raise | Mute | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
	[2] = LAYOUT_preonic_1x2uC(
			KC_ESC , KC_1   , KC_2   , KC_3   , KC_4  , KC_5  , KC_6  , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
			KC_GRV , KC_1   , KC_2   , KC_3   , KC_4  , KC_5  , KC_6  , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL,
			KC_PSCR, KC_F1  , KC_F2  , KC_F3  , KC_F4 , KC_F5 , KC_F6 , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_PSLS,
			KC_LSFT, KC_F7  , KC_F8  , KC_F9  , KC_F10, KC_F11, KC_F12, KC_BSLS, KC_BSLS, KC_PGUP, KC_PGDN, KC_ENT,
			KC_LCTL, KC_PAUS, KC_LGUI, KC_LALT, MO(3) ,    KC_SPC     , KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY),

/* Layer 3 (Debug)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Reset |Debug |Aud On|AudOff|      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |TO(4) |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | SCRL |Lower |    Space    |Raise | Left | Down |  Up  | Right|
 * `-----------------------------------------------------------------------------------'
 */
	[3] = LAYOUT_preonic_1x2uC(
			KC_F1, KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6, KC_F7, KC_F8  , KC_F9  , KC_F10 , KC_F11, KC_F12,
			KC_NO, QK_BOOT, DB_TOGG, AU_ON  , AU_OFF , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO,
			KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO,
			KC_NO, KC_NO  , KC_NO  , KC_NO  , TO(4)  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO,
			KC_NO, KC_NO  , KC_NO  , KC_SCRL, KC_TRNS,   KC_SPC    , KC_TRNS, KC_LEFT, KC_DOWN, KC_UP , KC_RGHT),

/* Layer 4 (Numpad)
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |RGBTog| Bri+ |      |      |      |      |      |   /  |   *  |   -  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |      | Bri- |      |      |      |      |      |   7  |   8  |   9  |  +   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   4  |   5  |   6  |  +   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Mod  | Mod  | Mod  | Mod  |      |TO(0) |NMLock|NMLock|   1  |   2  |   3  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Left | Down |  Up  |Right |      |    Space    |NMLock|   0  |   0  |   .  |Enter |
 * `-----------------------------------------------------------------------------------'
 */
	[4] = LAYOUT_preonic_1x2uC(
			KC_ESC , RGB_TOG, RGB_VAI, KC_NO  , KC_NO  , KC_NO, KC_NO , KC_NO , KC_PSLS, KC_PAST, KC_PMNS, KC_BSPC,
			KC_TAB , KC_NO  , RGB_VAD, KC_NO  , KC_NO  , KC_NO, KC_NO , KC_NO , KC_P7  , KC_P8  , KC_P9  , KC_PPLS,
			KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO , KC_NO , KC_P4  , KC_P5  , KC_P6  , KC_PPLS,
			KC_LGUI, KC_LGUI, KC_LGUI, KC_LGUI, KC_TRNS, TO(0), KC_NUM, KC_NUM, KC_P1  , KC_P2  , KC_P3  , KC_PENT,
			KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_NO  ,    KC_SPC    , KC_NUM, KC_P0  , KC_P0  , KC_PDOT, KC_PENT)
};
