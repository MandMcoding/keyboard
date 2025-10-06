#include QMK_KEYBOARD_H
#include "unicode.h"
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

// M = Macro, E = Emoji
enum custom_keycodes{
	M_STR1 = SAFE_RANGE,
	EJOY,
	EFIRE,
	ETHUMBS,
	EO7,
	ETHINK,
	ESKULL,
	ETROLL,
	EMEATBALL,
	EGUN,
	ECRY,
	EPROUD,
	ENERD,
	ESHOCK,
	EICE,
	ECLOWN,
	EHEART,

	ECOCK,
	ELEB,
	EUAE,

	    UC_PLUS_MINUS,
    UC_SUM,
    UC_SQRT,
    UC_INTEGRAL,
    UC_MICRO,
    UC_LTE,
    UC_GTE,
    UC_DIVIDE,
    UC_APPROX,
    UC_OHM,
    UC_PARTIAL,
    UC_FUNCTION,
    UC_DELTA,
    UC_RING,
    UC_PI,
    UC_INFINITY,
    UC_NOT_EQUAL,
    UC_EMPTY,
    UC_PRODUCT,

    // Greek lowercase
    UC_EPSILON,
    UC_RHO,
    UC_TAU,
    UC_THETA,
    UC_LAMBDA,
    UC_BETA,
    UC_OMEGA,
    UC_PHI,
    UC_ALPHA,

		//more math
		UC_IN,
		VEC,
		R,
		Z,
		QED,
		THEREPHORE,

	SUBSET,
	EQ_SUBSET,
	PERP,
	FORALL,
	THERE_EXISTS,
	DNE,
	AND,
	OR,
	INTERSECT,
	UNION,
	VERT_ELLIP,
	IMPLIES,
	IFF,
	UC_NOT_IN,
	BCK_ELLIP,
	ELLIP,
	FWD_ELLIP,
	BECAUSE,
	NOT_SUBSET,
	NOT_EQ_SUBSET,
	PARALLEL,
};

void matrix_init_user(void) {
  set_unicode_input_mode(UNICODE_MODE_MACOS);
}

const uint32_t PROGMEM unicode_map[] = { 
	  [EJOY] = 0x1F602,//😂
[EFIRE] = 0x1F525, //🔥
[ETHUMBS] = 0x1F44D, //👍
[EO7] = 0x1FAE1,//🫡
[ETHINK] = 0x1F914,//🤔
[ESKULL] = 0x1F480, //💀
[ETROLL] = 0x1F9CC, //🧌
[EMEATBALL] = 0x2604, //☄️
[EGUN] = 0x1F52B, //🔫
[ECRY] = 0x1F62D, //😭
[EPROUD] = 0x1F979, //🥹
[ENERD] = 0x1F913, //🤓
[ESHOCK] = 0x1F631, //😱
[EICE] = 0x1F976, //🥶
[ECLOWN] = 0x1F921, //🤡
[ECOCK] = 0x1FAB3, //🪳
[EHEART] = 0x2764,

//flags
[EUAE] = 0x1F1EA, //🇦🇪
[ELEB] = 0X1F1E7, //🇱🇧

[UC_PLUS_MINUS]  = 0x00B1, // ±
    [UC_SUM]         = 0x2211, // ∑
    [UC_SQRT]        = 0x221A, // √
    [UC_INTEGRAL]    = 0x222B, // ∫
    [UC_MICRO]       = 0x00B5, // µ
    [UC_LTE]         = 0x2264, // ≤
    [UC_GTE]         = 0x2265, // ≥
    [UC_DIVIDE]      = 0x00F7, // ÷
    [UC_APPROX]      = 0x2248, // ≈
    [UC_OHM]         = 0x2126, // Ω
    [UC_PARTIAL]     = 0x2202, // ∂
    [UC_FUNCTION]    = 0x0192, // ƒ
    [UC_DELTA]       = 0x2206, // ∆
    [UC_RING]        = 0x02DA, // ˚
    [UC_PI]          = 0x03C0, // π
    [UC_INFINITY]    = 0x221E, // ∞
    [UC_NOT_EQUAL]   = 0x2260, // ≠
    [UC_EMPTY]     = 0x2205, // Ø
    [UC_PRODUCT]     = 0x220F, // ∏

    [UC_EPSILON]     = 0x03B5, // ε
    [UC_RHO]         = 0x03C1, // ρ
    [UC_TAU]         = 0x03C4, // τ
    [UC_THETA]       = 0x03B8, // θ
    [UC_LAMBDA]      = 0x03BB, // λ
    [UC_BETA]        = 0x03B2, // β
    [UC_OMEGA]       = 0x03C9, // ω
    [UC_PHI]         = 0x03C6, // φ
    [UC_ALPHA]       = 0x03B1, // α

		[UC_IN] = 0x2208, //∈
		[VEC] = 0x20D7, ///⃗
		[R] = 0x211D, //ℝ
		[Z] = 0x2124, // ℤ
		[QED] = 0x220E, //∎
		[THEREPHORE] = 0x2234, //∴


	[SUBSET] = 0x2282	, //⊂
	[EQ_SUBSET] = 0x2286,
	[PERP] = 0x2AE0,
	[FORALL] = 0x2200,
	[THERE_EXISTS] = 0x2203,
	[DNE] = 0x2204,
	[AND] = 0x2227,
	[OR] = 0x2228,
	[INTERSECT] = 0x2229,
	[UNION] = 0x222A,
	[VERT_ELLIP] = 0x22EE,
	[IMPLIES] = 0x21D2,
	[IFF] = 0x21D4,
	[UC_NOT_IN] = 0x2209,
	[BCK_ELLIP] = 0x22EF,
	[ELLIP] = 0x2026,
	[FWD_ELLIP] = 0x22F0,
	[BECAUSE] = 0x2235,
	[NOT_SUBSET] = 0x2284,
	[NOT_EQ_SUBSET] = 0x2288,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		//base layer QWERTY
    [0] = LAYOUT_split_3x6_3(
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 		KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ESC, 
		KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, 		KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
		KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, 		KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, 
					TT(1), KC_SPC, KC_BSPC, 			KC_RGUI, KC_RALT, KC_ENT),
		//Common symbols/numbers/arrows
    [1] = LAYOUT_split_3x6_3(
		KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, 		KC_7, KC_8, KC_9, KC_PMNS, KC_PAST, KC_PSLS, 
		KC_TRNS, KC_GRV, KC_AMPR, KC_BSLS, KC_LCBR, KC_RCBR,	KC_4, KC_5, KC_6, KC_PPLS, KC_UP, KC_PEQL, 
		TT(2), TT(3), KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, 		KC_1, KC_2, KC_3, KC_LEFT, KC_DOWN, KC_RGHT, 
						KC_TRNS, KC_UNDS, KC_TRNS, 						KC_SCLN, KC_0, KC_PDOT),
		//Gigachad layer, mwheel, arrows, mouse, sys, emojis!
    [2] = LAYOUT_split_3x6_3(
		MS_BTN1, MS_BTN2, EJOY, EFIRE, ETHUMBS, EO7, 			KC_VOLD, KC_VOLU, KC_MUTE, QK_MACRO_0, KC_LSCR, KC_SLEP, 
		ETHINK, ESKULL, ETROLL, EMEATBALL, EGUN, EPROUD, 					KC_BRID, KC_BRIU, MS_WHLD, MS_WHLL, MS_UP, KC_LCAP, 
		KC_TRNS, ECRY, ECLOWN, ECOCK, EICE, EHEART,					KC_UP, MS_WHLR, MS_WHLU, MS_LEFT, MS_DOWN, MS_RGHT, 

		KC_TRNS, MS_BTN1, KC_TRNS, 						KC_LEFT, KC_DOWN, KC_RGHT),
		//Math!
		[3] = LAYOUT_split_3x6_3(
		UC_MICRO, UC_EPSILON, UC_RHO, UC_TAU,UC_LAMBDA, UC_THETA,					UC_PLUS_MINUS, UC_SUM, UC_SQRT, UC_INTEGRAL, UC_PI, UC_PRODUCT,
		MO(4), UC_PHI, UC_ALPHA, UC_BETA, UC_DELTA, UC_OHM,								UC_FUNCTION, UC_RING, UC_DIVIDE, UC_APPROX, UC_LTE, UC_GTE,
		KC_TRNS, KC_TRNS, UC_PARTIAL, UC_NOT_EQUAL, UC_OMEGA,KC_NO,						UC_IN, UC(0x20D7)/*VEC*/, R, Z, QED, THEREPHORE,

		KC_TRNS, UC_INFINITY, KC_TRNS,			SUBSET, EQ_SUBSET, PERP
		),
		//More MATH!
		[4] = LAYOUT_split_3x6_3(
		FORALL, THERE_EXISTS, DNE, UC_EMPTY,KC_NO,KC_NO, 							ELEB,EUAE,ENERD,KC_NO,KC_NO, M_STR1,
		KC_TRNS, AND, OR, INTERSECT, UNION,KC_NO,					KC_NO,KC_NO, VERT_ELLIP, KC_NO,KC_NO,KC_NO,
		KC_TRNS, KC_TRNS, IMPLIES, IFF, KC_NO,KC_NO,			UC_NOT_IN, BCK_ELLIP, ELLIP, FWD_ELLIP, KC_NO, BECAUSE,

		KC_TRNS, KC_NO, KC_TRNS,						NOT_SUBSET, NOT_EQ_SUBSET, PARALLEL
		)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_4)SS_UP(X_LSFT)SS_UP(X_LCTL)SS_UP(X_LGUI));
                return false;
						case M_STR1:
								SEND_STRING("helloworldManwillspacewalk1969");
								return false;
						// EMOJIS
            case EJOY:          send_unicode_string("😂"); return false;
            case EFIRE:         send_unicode_string("🔥"); return false;
            case ETHUMBS:       send_unicode_string("👍"); return false;
            case EO7:           send_unicode_string("🫡"); return false;
            case ETHINK:        send_unicode_string("🤔"); return false;
            case ESKULL:        send_unicode_string("💀"); return false;
            case ETROLL:        send_unicode_string("🧌"); return false;
            case EMEATBALL:     send_unicode_string("☄️"); return false;
            case EGUN:          send_unicode_string("🔫"); return false;
            case ECRY:          send_unicode_string("😭"); return false;
            case EPROUD:        send_unicode_string("🥹"); return false;
            case ENERD:         send_unicode_string("🤓"); return false;
            case ESHOCK:        send_unicode_string("😱"); return false;
            case EICE:          send_unicode_string("🥶"); return false;
            case ECLOWN:        send_unicode_string("🤡"); return false;
            case ECOCK:         send_unicode_string("🪳"); return false;
            case EHEART:        send_unicode_string("❤"); return false;

            // FLAGS
            case EUAE:          send_unicode_string("🇦🇪"); return false;
            case ELEB:          send_unicode_string("🇱🇧"); return false;

            // MATH SYMBOLS
            case UC_PLUS_MINUS: send_unicode_string("±"); return false;
            case UC_SUM:         send_unicode_string("∑"); return false;
            case UC_SQRT:        send_unicode_string("√"); return false;
            case UC_INTEGRAL:    send_unicode_string("∫"); return false;
            case UC_MICRO:       send_unicode_string("µ"); return false;
            case UC_LTE:         send_unicode_string("≤"); return false;
            case UC_GTE:         send_unicode_string("≥"); return false;
            case UC_DIVIDE:      send_unicode_string("÷"); return false;
            case UC_APPROX:      send_unicode_string("≈"); return false;
            case UC_OHM:         send_unicode_string("Ω"); return false;
            case UC_PARTIAL:     send_unicode_string("∂"); return false;
            case UC_FUNCTION:    send_unicode_string("ƒ"); return false;
            case UC_DELTA:       send_unicode_string("∆"); return false;
            case UC_RING:        send_unicode_string("˚"); return false;
            case UC_PI:          send_unicode_string("π"); return false;
            case UC_INFINITY:    send_unicode_string("∞"); return false;
            case UC_NOT_EQUAL:   send_unicode_string("≠"); return false;
            case UC_EMPTY:       send_unicode_string("∅"); return false;
            case UC_PRODUCT:     send_unicode_string("∏"); return false;

            // GREEK LETTERS
            case UC_EPSILON:     send_unicode_string("ε"); return false;
            case UC_RHO:         send_unicode_string("ρ"); return false;
            case UC_TAU:         send_unicode_string("τ"); return false;
            case UC_THETA:       send_unicode_string("θ"); return false;
            case UC_LAMBDA:      send_unicode_string("λ"); return false;
            case UC_BETA:        send_unicode_string("β"); return false;
            case UC_OMEGA:       send_unicode_string("ω"); return false;
            case UC_PHI:         send_unicode_string("φ"); return false;
            case UC_ALPHA:       send_unicode_string("α"); return false;

            // LOGIC & SET THEORY
            case UC_IN:              send_unicode_string("∈"); return false;
            case R:                  send_unicode_string("ℝ"); return false;
            case Z:                  send_unicode_string("ℤ"); return false;
            case QED:                send_unicode_string("∎"); return false;
            case THEREPHORE:         send_unicode_string("∴"); return false;
            case SUBSET:             send_unicode_string("⊂"); return false;
            case EQ_SUBSET:          send_unicode_string("⊆"); return false;
            case PERP:               send_unicode_string("⫠"); return false;
            case FORALL:             send_unicode_string("∀"); return false;
            case THERE_EXISTS:       send_unicode_string("∃"); return false;
            case DNE:                send_unicode_string("∄"); return false;
            case AND:                send_unicode_string("∧"); return false;
            case OR:                 send_unicode_string("∨"); return false;
            case INTERSECT:          send_unicode_string("∩"); return false;
            case UNION:              send_unicode_string("∪"); return false;
            case VERT_ELLIP:         send_unicode_string("⋮"); return false;
            case IMPLIES:            send_unicode_string("⇒"); return false;
            case IFF:                send_unicode_string("⇔"); return false;
            case UC_NOT_IN:          send_unicode_string("∉"); return false;
            case BCK_ELLIP:          send_unicode_string("⋯"); return false;
            case ELLIP:              send_unicode_string("…"); return false;
            case FWD_ELLIP:          send_unicode_string("⋰"); return false;
            case BECAUSE:            send_unicode_string("∵"); return false;
            case NOT_SUBSET:         send_unicode_string("⊄"); return false;
            case NOT_EQ_SUBSET:      send_unicode_string("⊈"); return false;
        }
    }

    return true;
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

