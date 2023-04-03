# Coloured Battle Text Effectiveness

This is an implementaion based of a somewhat outdated (some stuff got shifted around since then) pokecommunity post about [**Coloured Type Effectiveness In-Battle Text**](https://www.pokecommunity.com/showpost.php?p=10167016&postcount=83). It shows a different colored text of the element of a move in-battle (By Default: Super Effective - Green, Not Very Effective - Red, Not Effective at all - Faded Gray). It also supports Inverse and Double/Multi Battles.

The colours of the text can be edited in "src/battle_message.c". Just search for the line with the comment "//For coloured battle text" in the struct "gTextOnWindowsInfo_Normal" .


## To do
1. Moves like Counter, Mirror Coat, Metal Burst, Seismic Toss, Night Shade, etc can show as super effective, not very effective,etc. I'll fix this later.  ---- DONE
2. Compatibility with type-immune abilities (I kinda have mixed feelings with this since it automatically reveals the opponents ability to you).
3. Fix smh visual bugs

## Note
I had a previous implementation similar to [**what I referenced earlier**](https://www.pokecommunity.com/showpost.php?p=10167016&postcount=83). You can pull all previous commits till the comit with this SHA a6f851da02e0ffe1b91612f13461b8481bdf51d6.



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
