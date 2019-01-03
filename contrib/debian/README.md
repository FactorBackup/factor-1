
Debian
====================
This directory contains files used to package litedashd/litedash-qt
for Debian-based Linux systems. If you compile litedashd/litedash-qt yourself, there are some useful files here.

## litedash: URI support ##


litedash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install litedash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your litedash-qt binary to `/usr/bin`
and the `../../share/pixmaps/litedash128.png` to `/usr/share/pixmaps`

litedash-qt.protocol (KDE)

