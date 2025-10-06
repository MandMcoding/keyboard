# My Piantor Keyboard

Pic, 
link to website talking about it

--- 

# HOW TO INSTALL

1. Take the beekeeb_piantor_new_numpad.uf2 file
2. Hold BOOTSEL or whatever to reset the board
3. and while holding Plug your keyboard in.
4. See the new drive that pops up
5. Drag and drop the .ufs file in there

# HOW TO UPDATE KEYMAP (on macos):

1. Change the files (keymap.c, config.h, rules.mk)
2. If you don't have qmk installed

`brew install qmk/qmk/qmk`

`qmk setup`

3. then go to the piantor folder in qmk, normally

`~/qmk_firmware/keyboards/beekeeb/piantor/keymaps/`

4. add a new folder for your new layout
5. compile new layout to get .uf2 file

`qmk compile -kb beekeeb/piantor -km $KEYMAP`

6. plug that girl in and do the install process again

---

## Use a unicode hex input layout in your mac software. I'm not sure about the rest

```
Base Layer (0) – QWERTY

┌────┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬────┐
│Tab │ Q │ W │ E │ R │ T │   │ Y │ U │ I │ O │ P │Esc │
├────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼────┼────┤
│Shft│ A │ S │ D │ F │ G │   │ H │ J │ K │ L │ ;  │ '  │
├────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼────┼────┤
│Ctrl│ Z │ X │ C │ V │ B │   │ N │ M │ , │ . │ /  │Ent │
└────┴───┴───┴───┴───┴───┘   └───┴───┴───┴───┴────┴────┘
           ┌────┬────┬────┐   ┌────┬────┬────┐
           │TT1 │Spc │Bspc│   │Gui │Alt │Ent │
           └────┴────┴────┘   └────┴────┴────┘

Symbols / Numpad / Arrows (1)

┌────┬────┬────┬────┬────┬────┐   ┌────┬────┬────┬────┬────┬────┐
│ !  │ @  │ #  │ $  │ %  │ ^  │   │ 7  │ 8  │ 9  │ -  │ *  │ /  │
├────┼────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼────┤
│ •  │ `  │ &  │ \  │ {  │ }  │   │ 4  │ 5  │ 6  │ +  │ ↑  │ =  │
├────┼────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼────┤
│TT2 │TT3 │ [  │ ]  │ (  │ )  │   │ 1  │ 2  │ 3  │ ←  │ ↓  │ →  │
└────┴────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴────┘
           ┌────┬────┬────┐        ┌────┬────┬────┐
           │ •  │ _  │ •  │        │ ;  │ 0│ .  │
           └────┴────┴────┘        └────┴────┴────┘

Gigachad – Mouse, System, Emojis (2)

┌──────┬──────┬────┬────┬────┬────┐   ┌────┬────┬────┬────────┬─────┬─────┐
│MB1   │MB2   │😂  │🔥  │👍  │🫡  │    │Vol-│Vol+│Mute│Macro0  │PrtSc│Sleep│
├──────┼──────┼────┼────┼────┼────┤   ├────┼────┼────┼────────┼─────┼─────┤
│🤔    │💀    │🧌  │☄️  │🔫  │🥹  │     │Br- │Br+ │WhlD│WhlL│ ↑  │Caps │
├──────┼──────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼─────┤
│ •    │😭    │🤡  │🪳  │🥶  │❤   │    │ ↑  │WhlR│WhlU│ ←  │ ↓  │ →   │
└──────┴──────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴─────┘
           ┌────┬────┬────┐             ┌────┬────┬────┐
           │ •  │MB1 │ •  │             │ ←  │ ↓  │ →  │
           └────┴────┴────┘             └────┴────┴────┘
Math (3)

┌────┬────┬────┬────┬────┬────┐   ┌────┬────┬────┬────┬────┬────┐
│ µ  │ ε  │ ρ  │ τ  │ λ  │ θ  │   │ ±  │ ∑  │ √  │ ∫  │ π  │ ∏  │
├────┼────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼────┤
│MO4 │ φ  │ α  │ β  │ ∆  │ Ω  │   │ ƒ  │ ˚  │ ÷  │ ≈  │ ≤  │ ≥  │
├────┼────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼────┤
│ •  │ •  │ ∂  │ ≠  │ ω  │ —  │   │ ∈  │ ⃗  │ ℝ  │ ℤ  │ ∎  │ ∴  │
└────┴────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴────┘
           ┌────┬────┬────┐        ┌────┬────┬────┐
           │ •  │ ∞  │ •  │        │ ⊂  │ ⊆  │ ⫠  │
           └────┴────┴────┘        └────┴────┴────┘

More Math / Logic (4)

┌────┬────┬────┬────┬────┬────┐   ┌────┬────┬────┬────┬────┬──────────┐
│ ∀  │ ∃  │ ∄  │ ∅  │ —  │ —  │   │ 🇱🇧 │ 🇦🇪 │ 🤓 │ —  │ —  │ "helloworld…"│
├────┼────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼──────────┤
│ •  │ ∧  │ ∨  │ ∩  │ ∪  │ —  │   │ —  │ —  │ ⋮  │ —  │ —  │ —        │
├────┼────┼────┼────┼────┼────┤   ├────┼────┼────┼────┼────┼──────────┤
│ •  │ •  │ ⇒  │ ⇔  │ —  │ —  │   │ ∉  │ ⋯  │ …  │ ⋰  │ —  │ ∵        │
└────┴────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴──────────┘
           ┌────┬────┬────┐        ┌────┬────┬────┐
           │ •  │ —  │ •  │        │ ⊄  │ ⊈  │ ∥  │
           └────┴────┴────┘        └────┴────┴────┘
```

# Notes

- TT1/TT2/TT3 = TT(layer) (tap TAPPING_TOGGLE times to toggle; hold for momentary). Your config sets TAPPING_TOGGLE 3 → triple-tap to toggle. 
- Base thumbs: TT1 → layer 1; on layer 1 row3 left: TT2 → layer 2; TT3 → layer 3. 
- MO4 = MO(4) momentarily activates layer 4 while held.
- Macro0 (QK_MACRO_0) sends macOS screenshot region chord: ⌘+⌃+⇧+4. The string macro "helloworldManwillspacewalk1969" is on layer 4 (M_STR1).
- Mouse keys: MB1/MB2 = mouse buttons; WhlU/D/L/R = scroll; arrows and media/brightness are on the right half of layer 2.
- Unicode mode is set to macOS, and all the emoji/math/logic keys output the shown symbols.
