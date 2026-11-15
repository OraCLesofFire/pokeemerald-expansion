# Poryscript

[Poryscript](https://github.com/huderlem/poryscript) is a friendlier scripting
language for map/event scripts. The Makefile compiles every `data/**/*.pory`
file into a `.inc` file with the same name, right next to it
(for example `data/maps/CedarForest/scripts.pory` -> `scripts.inc`).

Maps without a `scripts.pory` keep using their hand-written `scripts.inc`,
so the two styles can live side by side.

## Install (WSL / Linux)

The binary is not tracked in git. From the repo root:

```sh
cd /tmp
curl -LO https://github.com/huderlem/poryscript/releases/latest/download/poryscript-linux.zip
unzip -o poryscript-linux.zip
cp poryscript-linux/poryscript ~/path/to/pokeemerald-expansion/tools/poryscript/
chmod +x ~/path/to/pokeemerald-expansion/tools/poryscript/poryscript
```

`font_config.json` and `command_config.json` in this folder are tracked and
come from the same release (3.6.1). Keep them when updating the binary unless
the changelog says otherwise.

## Important

Once a map has a `scripts.pory`, its `scripts.inc` is generated: edit the
`.pory` only, because the `.inc` is overwritten on the next build.
