# Multi Start Menus
This branch allows you to fit as many options on the start menu as you wish after the flag FLAG_IS_MULTI_START_MENU_ENABLED is set.
There are some important things you need to keep in mind though:

In the file "start_menu.h",

1. NUM_OF_START_MENUS creates as many menus as you need.
2. NUM_OF_START_MENU_OPTIONS is the max amount of options that can stay on one menu (it is not advised to go beyond 8).
3. FINAL_START_MENU_OPTION is the last option in the Menu actions ENUM you want to be printed out, e.g MENU_ACTION_PYRAMID_BAG.
4. IS_MULTI_START_MENU_ENABLED is set by the flag FLAG_IS_MULTI_START_MENU_ENABLED and is self explanatory.
5. FILL_STARTMENU_PAGE if "defined" forces pages to be full when possible. If you want that, just uncomment the line out.

Any necessary custom conditions can be added in BuildNormalStartMenu() in start_menu.c.
Remember, to activate the multi start menus, set the flag FLAG_IS_MULTI_START_MENU_ENABLED.

IF YOU DO NOT INCREASE "FINAL_START_MENU_OPTION" OR REDUCE "NUM_OF_START_MENU_OPTIONS" AFTER IMPLEMENTING THIS, IT WILL NOT WORK. I delibrately chose to use "MENU_ACTION_EXIT" (which is 7 saying you didn't change anything) and since it isn't higher than "NUM_OF_START_MENU_OPTIONS" (which is 8 by default), ONE page is still enough.

## Todo
1. If NUM_OF_START_MENU_OPTIONS is too low(which it probably won't), the menu might bug out albeit not in a bad way.
2. All menus save the location of the cursor.  ---- FIXED (partially)
3. Find a "saner" way to generate the value of previousAmountOfOptionsNeeded without the user needing to load the second to last page.
4. FILL_STARTMENU_PAGE is really buggy and one-dimensional atm lol. You can use it, but to be safe, make sure NUM_OF_START_MENU_OPTIONS isn't 7 while using it.

PS: Don't bother trying to give yourself more menus than you need.



# Pokémon Emerald

This is a decompilation of Pokémon Emerald.

It builds the following ROM:

* [**pokeemerald.gba**](https://datomatic.no-intro.org/index.php?page=show_record&s=23&n=1961) `sha1: f3ae088181bf583e55daf962a92bb46f4f1d07b7`

To set up the repository, see [INSTALL.md](INSTALL.md).


## See also

Other disassembly and/or decompilation projects:
* [**Pokémon Red and Blue**](https://github.com/pret/pokered)
* [**Pokémon Gold and Silver (Space World '97 demo)**](https://github.com/pret/pokegold-spaceworld)
* [**Pokémon Yellow**](https://github.com/pret/pokeyellow)
* [**Pokémon Trading Card Game**](https://github.com/pret/poketcg)
* [**Pokémon Pinball**](https://github.com/pret/pokepinball)
* [**Pokémon Stadium**](https://github.com/pret/pokestadium)
* [**Pokémon Gold and Silver**](https://github.com/pret/pokegold)
* [**Pokémon Crystal**](https://github.com/pret/pokecrystal)
* [**Pokémon Ruby and Sapphire**](https://github.com/pret/pokeruby)
* [**Pokémon Pinball: Ruby & Sapphire**](https://github.com/pret/pokepinballrs)
* [**Pokémon FireRed and LeafGreen**](https://github.com/pret/pokefirered)
* [**Pokémon Mystery Dungeon: Red Rescue Team**](https://github.com/pret/pmd-red)


## Contacts

You can find us on [Discord](https://discord.gg/d5dubZ3) and [IRC](https://web.libera.chat/?#pret).
