#!/bin/env sh

qmk flash -c -kb crkbd/rev1 -km manna-harbour_miryoku \
    -e CONVERT_TO=rp2040_ce \
    -e MIRYOKU_ALPHAS=QWERTY \
    -e MIRYOKU_NAV=VI

# https://docs.qmk.fm/feature_converters#converters
