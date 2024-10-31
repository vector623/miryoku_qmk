#!/bin/env sh

qmk flash -c -kb sofle/rev1 -km manna-harbour_miryoku \
    -e CONVERT_TO=rp2040_ce \
    -e MIRYOKU_ALPHAS=QWERTY \
    -e MIRYOKU_NAV=vi
