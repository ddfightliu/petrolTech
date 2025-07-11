-- Generated [
-- Format      : ECLIPSE keywords (ASCII)
-- Exported by : Petrel 2019.2 Schlumberger
-- User name   : JLiu38
-- Date        : Saturday, August 17 2019 00:15:23
-- Project     : ECLIPSE_CONVERT.pet
-- Generated ]

EQUIL                                  -- Generated : Petrel
          7000       3035.7         8200            0         7000            0 1 0 0 /

RSVD                                   -- Generated : Petrel
          7000        0.973
          9000        0.973
  /

AQUALIST
  _V9_PI50
  1 /
  /

AQUFETP
  1 8200 1*  1.000000e+009 1.0E-5 50 1 0.0 /
  /

AQUANCON
--        Aquifer name,      Simulation name,             LGR name,                      Time,  Bin index,  Bin value,  Aquifer identification number
--         AQU_V9_PI50,             _V9_PI50,                     ,        Initial properties,          0,       4000,                              1
--        End of table
  1 6 6 25 25 1 3 I- 1* 1* NO /
  1 3 3 24 24 1 3 I- 1* 1* NO /
  1 6 6 25 25 8 12 I- 1* 1* NO /
  1 3 3 24 24 9 12 I- 1* 1* NO /
  1 17 17 25 25 1 3 I+ 1* 1* NO /
  1 22 22 24 24 1 12 I+ 1* 1* NO /
  1 17 17 25 25 5 12 I+ 1* 1* NO /
  1 6 17 25 25 1 3 J+ 1* 1* NO /
  1 3 5 24 24 1 3 J+ 1* 1* NO /
  1 18 22 24 24 1 12 J+ 1* 1* NO /
  1 15 17 25 25 5 12 J+ 1* 1* NO /
  1 12 14 25 25 6 12 J+ 1* 1* NO /
  1 8 11 25 25 7 12 J+ 1* 1* NO /
  1 6 7 25 25 8 12 J+ 1* 1* NO /
  1 5 5 24 24 8 12 J+ 1* 1* NO /
  1 3 4 24 24 9 12 J+ 1* 1* NO /
  /

RPTRST
  BASIC=3 FLOWS /

RPTSOL
  RESTART=2 FIP /

