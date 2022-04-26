#!/bin/sh

# Symlink config files to appropriate places
# ln -s ferris_qmk_keymap ~/qmk_firmware/keyboards/ferris/keymaps/samuelfchen

mv ~/.zshrc ~/.zshrc.old
mv ~/.gitconfig ~/.gitconfig.old
ln -s $(realpath .zshrc) ~/.zshrc
ln -s $(realpath .gitconfig) ~/.gitconfig
