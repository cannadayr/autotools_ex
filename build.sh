#!/bin/sh
autoscan &&
autoheader &&
aclocal &&
automake --add-missing &&
autoconf
