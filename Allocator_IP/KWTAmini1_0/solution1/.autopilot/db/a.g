#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/tingyuan/Temporary/vivado-outputs/KWTAmini1_0/solution1/.autopilot/db/a.g.bc ${1+"$@"}