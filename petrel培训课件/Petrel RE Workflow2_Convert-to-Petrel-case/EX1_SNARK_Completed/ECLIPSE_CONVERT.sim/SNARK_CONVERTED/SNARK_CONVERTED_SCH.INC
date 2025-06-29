-- Generated [
-- Format      : ECLIPSE keywords (ASCII)
-- Exported by : Petrel 2019.2 Schlumberger
-- User name   : JLiu38
-- Date        : Saturday, August 17 2019 00:15:23
-- Project     : ECLIPSE_CONVERT.pet
-- Generated ]

RPTSCHED                               -- Generated : Petrel
  FIP WELLS /

RPTRST                                 -- Generated : Petrel
  BASIC=3 FLOWS FREQ /

RPTRST                                 -- Generated : Petrel
  BASIC=3 FLOWS FREQ /

WELSPECS                               -- Generated : Petrel
--'PROD1' is the simulation well name used to describe flow from 'PROD1'
--'PROD2' is the simulation well name used to describe flow from 'PROD2'
--'PROD3' is the simulation well name used to describe flow from 'PROD3'
--'PROD4' is the simulation well name used to describe flow from 'PROD4'
--'PRODUCER' is the simulation well name used to describe flow from 'PRODUCER'
--
  PROD1 CENTER 13 8 1* OIL /
  PROD2 CENTER 7 20 1* OIL /
  PROD3 CENTER 16 16 1* OIL /
  PROD4 CENTER 17 21 1* OIL /
  PRODUCER WEST 6 8 1* OIL /
  /

WLIST                                  -- Generated : Petrel
  '*WL_1' NEW
  PROD1 PROD2 PROD3 PROD4 PRODUCER /
  '*WELLS F' NEW
  PROD1 PROD2 PROD3 PROD4 PRODUCER /
  /

COMPDAT                                -- Generated : Petrel
  PROD1 13 8 1 1 OPEN 1* 6.7279 0.625 12485.6 7.5 1* Z 88.1786 /
  PROD1 13 8 2 2 OPEN 1* 0.10701 0.625 198.581 7.5 1* Z 88.133 /
  PROD1 13 8 3 3 OPEN 1* 0.0061668 0.625 11.4434 7.5 1* Z 88.0903 /
  PROD1 13 8 8 8 OPEN 1* 13.437 0.625 24937.3 7.5 1* Z 88.223 /
  PROD1 13 8 9 9 OPEN 1* 12.537 0.625 23268.3 7.5 1* Z 88.2859 /
  PROD1 13 8 10 10 OPEN 1* 1.0653 0.625 1977.1 7.5 1* Z 88.2509 /
  PROD1 13 8 11 11 OPEN 1* 0.016854 0.625 31.2775 7.5 1* Z 88.1766 /
  PROD1 13 8 12 12 OPEN 1* 0.02371 0.625 44.0011 7.5 1* Z 88.184 /
  PROD2 7 20 1 1 OPEN 1* 15.087 0.625 27971.6 7.5 1* Z 87.0753 /
  PROD2 7 20 2 2 OPEN 1* 7.4983 0.625 13901.9 7.5 1* Z 87.0681 /
  PROD2 7 20 3 3 OPEN 1* 0.0046384 0.625 8.59877 7.5 1* Z 86.9555 /
  PROD2 7 20 8 8 OPEN 1* 0.70293 0.625 1303.18 7.5 1* Z 87.0192 /
  PROD2 7 20 9 9 OPEN 1* 2.448 0.625 4538.42 7.5 1* Z 87.0212 /
  PROD2 7 20 10 10 OPEN 1* 2.8678 0.625 5316.71 7.5 1* Z 87.0228 /
  PROD3 16 16 2 2 OPEN 1* 4.2994 0.625 7967.9 7.5 1* Z 86.6093 /
  PROD3 16 16 3 3 OPEN 1* 0.0086831 0.625 16.0914 7.5 1* Z 86.5646 /
  PROD3 16 16 6 6 OPEN 1* 2.5527 0.625 4731 7.5 1* Z 86.6532 /
  PROD3 16 16 7 7 OPEN 1* 11.452 0.625 21225.9 7.5 1* Z 86.7357 /
  PROD3 16 16 8 8 OPEN 1* 14.109 0.625 26150.6 7.5 1* Z 86.7376 /
  PROD3 16 16 9 9 OPEN 1* 4.6187 0.625 8560.5 7.5 1* Z 86.723 /
  PROD4 17 21 1 1 OPEN 1* 19.552 0.625 36239.3 7.5 1* Z 86.7474 /
  PROD4 17 21 2 2 OPEN 1* 5.4056 0.625 10019.1 7.5 1* Z 86.7311 /
  PRODUCER 6 8 1 1 OPEN 1* 6.704 0.625 12463 7.5 1* Z 90.2248 /
  PRODUCER 6 8 2 2 OPEN 1* 4.252 0.625 7904.53 7.5 1* Z 90.2117 /
  PRODUCER 6 8 3 3 OPEN 1* 0.0037059 0.625 6.88769 7.5 1* Z 89.9315 /
  PRODUCER 6 8 8 8 OPEN 1* 0.0020833 0.625 3.87277 7.5 1* Z 90.1771 /
  PRODUCER 6 8 9 9 OPEN 1* 3.811 0.625 7084.46 7.5 1* Z 90.1709 /
  PRODUCER 6 8 10 10 OPEN 1* 0.0084126 0.625 15.6355 7.5 1* Z 89.9356 /
  /

GRUPTREE                               -- Generated : Petrel
  'GROUP 1' FIELD /
  CENTER FIELD /
  WEST FIELD /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4576.3 1* 4507 3* 2923.9 /
  PROD2 OPEN ORAT 3286 0 3133.6 3* 3049.9 /
  PROD3 OPEN ORAT 3970.7 0 3651.8 3* 3249.2 /
  PROD4 OPEN ORAT 1553.2 0 1441.5 3* 3248.8 /
  PRODUCER OPEN ORAT 1783.1 1* 1760.9 3* 3133.8 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4576.3 1* 4507 3* 0 /
  PROD2 OPEN ORAT 3286 0 3133.6 3* 0 /
  PROD3 OPEN ORAT 3970.7 0 3651.8 3* 0 /
  PROD4 OPEN ORAT 1553.2 0 1441.5 3* 0 /
  PRODUCER OPEN ORAT 1783.1 1* 1760.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4576.3 1* 4507 3* 0 /
  PROD2 OPEN ORAT 3286 0 3133.6 3* 0 /
  PROD3 OPEN ORAT 3970.7 0 3651.8 3* 0 /
  PROD4 OPEN ORAT 1553.2 0 1441.5 3* 0 /
  PRODUCER OPEN ORAT 1783.1 1* 1760.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4496.4 1* 4388.1 3* 3068.9 /
  PROD2 OPEN ORAT 3263.1 0 3173.4 3* 2941.8 /
  PROD3 OPEN ORAT 3877.6 0 3709.5 3* 2909.7 /
  PROD4 OPEN ORAT 1511.9 0 1525 3* 2942.1 /
  PRODUCER OPEN ORAT 1776.7 1* 1741.8 3* 3102.9 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4496.4 1* 4388.1 3* 0 /
  PROD2 OPEN ORAT 3263.1 0 3173.4 3* 0 /
  PROD3 OPEN ORAT 3877.6 0 3709.5 3* 0 /
  PROD4 OPEN ORAT 1511.9 0 1525 3* 0 /
  PRODUCER OPEN ORAT 1776.7 1* 1741.8 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4496.4 1* 4388.1 3* 0 /
  PROD2 OPEN ORAT 3263.1 0 3173.4 3* 0 /
  PROD3 OPEN ORAT 3877.6 0 3709.5 3* 0 /
  PROD4 OPEN ORAT 1511.9 0 1525 3* 0 /
  PRODUCER OPEN ORAT 1776.7 1* 1741.8 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4542.1 1* 4511.1 3* 3012.8 /
  PROD2 OPEN ORAT 3250.4 0 3371.2 3* 2874.4 /
  PROD3 OPEN ORAT 3889 0 3696.9 3* 2981 /
  PROD4 OPEN ORAT 1529.7 0 1511 3* 2869.2 /
  PRODUCER OPEN ORAT 1730.5 1* 1753.3 3* 3135.6 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4542.1 1* 4511.1 3* 0 /
  PROD2 OPEN ORAT 3250.4 0 3371.2 3* 0 /
  PROD3 OPEN ORAT 3889 0 3696.9 3* 0 /
  PROD4 OPEN ORAT 1529.7 0 1511 3* 0 /
  PRODUCER OPEN ORAT 1730.5 1* 1753.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4542.1 1* 4511.1 3* 0 /
  PROD2 OPEN ORAT 3250.4 0 3371.2 3* 0 /
  PROD3 OPEN ORAT 3889 0 3696.9 3* 0 /
  PROD4 OPEN ORAT 1529.7 0 1511 3* 0 /
  PRODUCER OPEN ORAT 1730.5 1* 1753.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4423 1* 4380.5 3* 2910 /
  PROD2 OPEN ORAT 3342.4 0 3282 3* 2992.4 /
  PROD3 OPEN ORAT 3853.1 0 3648.7 3* 2836.3 /
  PROD4 OPEN ORAT 1539.6 0 1418.2 3* 2776.3 /
  PRODUCER OPEN ORAT 1763.3 1* 1637.3 3* 2820.6 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4423 1* 4380.5 3* 0 /
  PROD2 OPEN ORAT 3342.4 0 3282 3* 0 /
  PROD3 OPEN ORAT 3853.1 0 3648.7 3* 0 /
  PROD4 OPEN ORAT 1539.6 0 1418.2 3* 0 /
  PRODUCER OPEN ORAT 1763.3 1* 1637.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 1998 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4423 1* 4380.5 3* 0 /
  PROD2 OPEN ORAT 3342.4 0 3282 3* 0 /
  PROD3 OPEN ORAT 3853.1 0 3648.7 3* 0 /
  PROD4 OPEN ORAT 1539.6 0 1418.2 3* 0 /
  PRODUCER OPEN ORAT 1763.3 1* 1637.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4435.6 1* 4462.9 3* 2616.3 /
  PROD2 OPEN ORAT 3339.3 0 3127.2 3* 2828.1 /
  PROD3 OPEN ORAT 3988.8 0 3736.3 3* 2747.5 /
  PROD4 OPEN ORAT 1483.2 0.1 1423.6 3* 2723.2 /
  PRODUCER OPEN ORAT 1745.1 1* 1690.4 3* 2981.7 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4435.6 1* 4462.9 3* 0 /
  PROD2 OPEN ORAT 3339.3 0 3127.2 3* 0 /
  PROD3 OPEN ORAT 3988.8 0 3736.3 3* 0 /
  PROD4 OPEN ORAT 1483.2 0.1 1423.6 3* 0 /
  PRODUCER OPEN ORAT 1745.1 1* 1690.4 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4435.6 1* 4462.9 3* 0 /
  PROD2 OPEN ORAT 3339.3 0 3127.2 3* 0 /
  PROD3 OPEN ORAT 3988.8 0 3736.3 3* 0 /
  PROD4 OPEN ORAT 1483.2 0.1 1423.6 3* 0 /
  PRODUCER OPEN ORAT 1745.1 1* 1690.4 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4412.6 1* 4424.7 3* 2749.1 /
  PROD2 OPEN ORAT 3232.2 0 3210.9 3* 2704 /
  PROD3 OPEN ORAT 3900.5 0 3889.3 3* 2844 /
  PROD4 OPEN ORAT 1480.3 0.1 1546.5 3* 2681.3 /
  PRODUCER OPEN ORAT 1777.9 1* 1699.8 3* 2695.8 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4412.6 1* 4424.7 3* 0 /
  PROD2 OPEN ORAT 3232.2 0 3210.9 3* 0 /
  PROD3 OPEN ORAT 3900.5 0 3889.3 3* 0 /
  PROD4 OPEN ORAT 1480.3 0.1 1546.5 3* 0 /
  PRODUCER OPEN ORAT 1777.9 1* 1699.8 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4412.6 1* 4424.7 3* 0 /
  PROD2 OPEN ORAT 3232.2 0 3210.9 3* 0 /
  PROD3 OPEN ORAT 3900.5 0 3889.3 3* 0 /
  PROD4 OPEN ORAT 1480.3 0.1 1546.5 3* 0 /
  PRODUCER OPEN ORAT 1777.9 1* 1699.8 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4566.7 1* 4541.6 3* 2476.7 /
  PROD2 OPEN ORAT 3223.4 0 3366 3* 2572.1 /
  PROD3 OPEN ORAT 3957.2 0 3834 3* 2567.6 /
  PROD4 OPEN ORAT 1540.1 0.1 1540.6 3* 2791.8 /
  PRODUCER OPEN ORAT 1779.1 1* 1730.7 3* 2757 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4566.7 1* 4541.6 3* 0 /
  PROD2 OPEN ORAT 3223.4 0 3366 3* 0 /
  PROD3 OPEN ORAT 3957.2 0 3834 3* 0 /
  PROD4 OPEN ORAT 1540.1 0.1 1540.6 3* 0 /
  PRODUCER OPEN ORAT 1779.1 1* 1730.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4566.7 1* 4541.6 3* 0 /
  PROD2 OPEN ORAT 3223.4 0 3366 3* 0 /
  PROD3 OPEN ORAT 3957.2 0 3834 3* 0 /
  PROD4 OPEN ORAT 1540.1 0.1 1540.6 3* 0 /
  PRODUCER OPEN ORAT 1779.1 1* 1730.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4591.2 1* 4411 3* 2423.9 /
  PROD2 OPEN ORAT 3360.6 0 3237.9 3* 2516.5 /
  PROD3 OPEN ORAT 3836.8 0 3899 3* 2643.5 /
  PROD4 OPEN ORAT 1527.4 0.1 1416.2 3* 2733.8 /
  PRODUCER OPEN ORAT 1795 1* 1800.3 3* 2560.9 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4591.2 1* 4411 3* 0 /
  PROD2 OPEN ORAT 3360.6 0 3237.9 3* 0 /
  PROD3 OPEN ORAT 3836.8 0 3899 3* 0 /
  PROD4 OPEN ORAT 1527.4 0.1 1416.2 3* 0 /
  PRODUCER OPEN ORAT 1795 1* 1800.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 1999 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4591.2 1* 4411 3* 0 /
  PROD2 OPEN ORAT 3360.6 0 3237.9 3* 0 /
  PROD3 OPEN ORAT 3836.8 0 3899 3* 0 /
  PROD4 OPEN ORAT 1527.4 0.1 1416.2 3* 0 /
  PRODUCER OPEN ORAT 1795 1* 1800.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4412.2 1* 4438.2 3* 2474.3 /
  PROD2 OPEN ORAT 3291.5 0.1 3240.3 3* 2415.6 /
  PROD3 OPEN ORAT 3887.9 0 3975.4 3* 2608.9 /
  PROD4 OPEN ORAT 1519.5 0.1 1424.1 3* 2456.8 /
  PRODUCER OPEN ORAT 1772.8 1* 1778.7 3* 2646.9 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4412.2 1* 4438.2 3* 0 /
  PROD2 OPEN ORAT 3291.5 0.1 3240.3 3* 0 /
  PROD3 OPEN ORAT 3887.9 0 3975.4 3* 0 /
  PROD4 OPEN ORAT 1519.5 0.1 1424.1 3* 0 /
  PRODUCER OPEN ORAT 1772.8 1* 1778.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4412.2 1* 4438.2 3* 0 /
  PROD2 OPEN ORAT 3291.5 0.1 3240.3 3* 0 /
  PROD3 OPEN ORAT 3887.9 0 3975.4 3* 0 /
  PROD4 OPEN ORAT 1519.5 0.1 1424.1 3* 0 /
  PRODUCER OPEN ORAT 1772.8 1* 1778.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4597.5 1* 4421.5 3* 2441 /
  PROD2 OPEN ORAT 3269.5 0.3 3148.9 3* 2442.5 /
  PROD3 OPEN ORAT 3919.6 0 3953.4 3* 2364.2 /
  PROD4 OPEN ORAT 1464.9 0.2 1450.9 3* 2478.3 /
  PRODUCER OPEN ORAT 1804.1 1* 1725.3 3* 2445 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4597.5 1* 4421.5 3* 0 /
  PROD2 OPEN ORAT 3269.5 0.3 3148.9 3* 0 /
  PROD3 OPEN ORAT 3919.6 0 3953.4 3* 0 /
  PROD4 OPEN ORAT 1464.9 0.2 1450.9 3* 0 /
  PRODUCER OPEN ORAT 1804.1 1* 1725.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4597.5 1* 4421.5 3* 0 /
  PROD2 OPEN ORAT 3269.5 0.3 3148.9 3* 0 /
  PROD3 OPEN ORAT 3919.6 0 3953.4 3* 0 /
  PROD4 OPEN ORAT 1464.9 0.2 1450.9 3* 0 /
  PRODUCER OPEN ORAT 1804.1 1* 1725.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4497.5 1* 4401 3* 2232.2 /
  PROD2 OPEN ORAT 3192.4 0.6 3168.1 3* 2448.6 /
  PROD3 OPEN ORAT 3998.4 0 3935.5 3* 2317.9 /
  PROD4 OPEN ORAT 1452.4 0.3 1459.3 3* 2394.4 /
  PRODUCER OPEN ORAT 1776.5 1* 1688.9 3* 2456.3 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4497.5 1* 4401 3* 0 /
  PROD2 OPEN ORAT 3192.4 0.6 3168.1 3* 0 /
  PROD3 OPEN ORAT 3998.4 0 3935.5 3* 0 /
  PROD4 OPEN ORAT 1452.4 0.3 1459.3 3* 0 /
  PRODUCER OPEN ORAT 1776.5 1* 1688.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4497.5 1* 4401 3* 0 /
  PROD2 OPEN ORAT 3192.4 0.6 3168.1 3* 0 /
  PROD3 OPEN ORAT 3998.4 0 3935.5 3* 0 /
  PROD4 OPEN ORAT 1452.4 0.3 1459.3 3* 0 /
  PRODUCER OPEN ORAT 1776.5 1* 1688.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4453 1* 4284.5 3* 2222.2 /
  PROD2 OPEN ORAT 3244 0.9 3144.7 3* 2254.4 /
  PROD3 OPEN ORAT 4043.4 0 3855 3* 2207.1 /
  PROD4 OPEN ORAT 1475.8 0.4 1385.8 3* 2319.7 /
  PRODUCER OPEN ORAT 1816.5 1* 1829.7 3* 2319.7 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4453 1* 4284.5 3* 0 /
  PROD2 OPEN ORAT 3244 0.9 3144.7 3* 0 /
  PROD3 OPEN ORAT 4043.4 0 3855 3* 0 /
  PROD4 OPEN ORAT 1475.8 0.4 1385.8 3* 0 /
  PRODUCER OPEN ORAT 1816.5 1* 1829.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2000 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4453 1* 4284.5 3* 0 /
  PROD2 OPEN ORAT 3244 0.9 3144.7 3* 0 /
  PROD3 OPEN ORAT 4043.4 0 3855 3* 0 /
  PROD4 OPEN ORAT 1475.8 0.4 1385.8 3* 0 /
  PRODUCER OPEN ORAT 1816.5 1* 1829.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4473 1* 4329.9 3* 2193.6 /
  PROD2 OPEN ORAT 3167.8 1.6 3115.9 3* 2183.5 /
  PROD3 OPEN ORAT 3976.7 0 3660.6 3* 2159.1 /
  PROD4 OPEN ORAT 1423.4 0.5 1353.8 3* 2151.3 /
  PRODUCER OPEN ORAT 1841.1 1* 1692.9 3* 2313.9 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4473 1* 4329.9 3* 0 /
  PROD2 OPEN ORAT 3167.8 1.6 3115.9 3* 0 /
  PROD3 OPEN ORAT 3976.7 0 3660.6 3* 0 /
  PROD4 OPEN ORAT 1423.4 0.5 1353.8 3* 0 /
  PRODUCER OPEN ORAT 1841.1 1* 1692.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4473 1* 4329.9 3* 0 /
  PROD2 OPEN ORAT 3167.8 1.6 3115.9 3* 0 /
  PROD3 OPEN ORAT 3976.7 0 3660.6 3* 0 /
  PROD4 OPEN ORAT 1423.4 0.5 1353.8 3* 0 /
  PRODUCER OPEN ORAT 1841.1 1* 1692.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4617.4 1* 4532.8 3* 2100.3 /
  PROD2 OPEN ORAT 3252.5 2.9 3086.5 3* 2167.9 /
  PROD3 OPEN ORAT 3935.2 0 3982.9 3* 2225 /
  PROD4 OPEN ORAT 1414 0.7 1309 3* 2147.8 /
  PRODUCER OPEN ORAT 1846.4 1* 1833.9 3* 2243.6 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4617.4 1* 4532.8 3* 0 /
  PROD2 OPEN ORAT 3252.5 2.9 3086.5 3* 0 /
  PROD3 OPEN ORAT 3935.2 0 3982.9 3* 0 /
  PROD4 OPEN ORAT 1414 0.7 1309 3* 0 /
  PRODUCER OPEN ORAT 1846.4 1* 1833.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4617.4 1* 4532.8 3* 0 /
  PROD2 OPEN ORAT 3252.5 2.9 3086.5 3* 0 /
  PROD3 OPEN ORAT 3935.2 0 3982.9 3* 0 /
  PROD4 OPEN ORAT 1414 0.7 1309 3* 0 /
  PRODUCER OPEN ORAT 1846.4 1* 1833.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4498.5 1* 4625.6 3* 1953.2 /
  PROD2 OPEN ORAT 3177.8 4.1 3121.5 3* 2121.8 /
  PROD3 OPEN ORAT 3927.4 0 3886.8 3* 2130 /
  PROD4 OPEN ORAT 1343.5 0.8 1327.4 3* 2133.2 /
  PRODUCER OPEN ORAT 1839.3 1* 1784.3 3* 2190.8 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4498.5 1* 4625.6 3* 0 /
  PROD2 OPEN ORAT 3177.8 4.1 3121.5 3* 0 /
  PROD3 OPEN ORAT 3927.4 0 3886.8 3* 0 /
  PROD4 OPEN ORAT 1343.5 0.8 1327.4 3* 0 /
  PRODUCER OPEN ORAT 1839.3 1* 1784.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4498.5 1* 4625.6 3* 0 /
  PROD2 OPEN ORAT 3177.8 4.1 3121.5 3* 0 /
  PROD3 OPEN ORAT 3927.4 0 3886.8 3* 0 /
  PROD4 OPEN ORAT 1343.5 0.8 1327.4 3* 0 /
  PRODUCER OPEN ORAT 1839.3 1* 1784.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4482.6 1* 4483.4 3* 1928.1 /
  PROD2 OPEN ORAT 3285.8 5.6 3102.1 3* 2034.1 /
  PROD3 OPEN ORAT 4066.8 0 3893.4 3* 2077.5 /
  PROD4 OPEN ORAT 1351.9 1 1331.3 3* 2046.1 /
  PRODUCER OPEN ORAT 1837.6 1* 1817.9 3* 2090.3 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4482.6 1* 4483.4 3* 0 /
  PROD2 OPEN ORAT 3285.8 5.6 3102.1 3* 0 /
  PROD3 OPEN ORAT 4066.8 0 3893.4 3* 0 /
  PROD4 OPEN ORAT 1351.9 1 1331.3 3* 0 /
  PRODUCER OPEN ORAT 1837.6 1* 1817.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2001 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4482.6 1* 4483.4 3* 0 /
  PROD2 OPEN ORAT 3285.8 5.6 3102.1 3* 0 /
  PROD3 OPEN ORAT 4066.8 0 3893.4 3* 0 /
  PROD4 OPEN ORAT 1351.9 1 1331.3 3* 0 /
  PRODUCER OPEN ORAT 1837.6 1* 1817.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4538 1* 4385.8 3* 1894.4 /
  PROD2 OPEN ORAT 3155.5 8.4 3281.3 3* 1947.8 /
  PROD3 OPEN ORAT 4002.7 0 3744 3* 1944.5 /
  PROD4 OPEN ORAT 1261.4 1.6 1207.4 3* 2074.4 /
  PRODUCER OPEN ORAT 1920.7 1* 1825.3 3* 2186.8 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4538 1* 4385.8 3* 0 /
  PROD2 OPEN ORAT 3155.5 8.4 3281.3 3* 0 /
  PROD3 OPEN ORAT 4002.7 0 3744 3* 0 /
  PROD4 OPEN ORAT 1261.4 1.6 1207.4 3* 0 /
  PRODUCER OPEN ORAT 1920.7 1* 1825.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4538 1* 4385.8 3* 0 /
  PROD2 OPEN ORAT 3155.5 8.4 3281.3 3* 0 /
  PROD3 OPEN ORAT 4002.7 0 3744 3* 0 /
  PROD4 OPEN ORAT 1261.4 1.6 1207.4 3* 0 /
  PRODUCER OPEN ORAT 1920.7 1* 1825.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4706.8 1* 4485.4 3* 1797.4 /
  PROD2 OPEN ORAT 3271.2 10.8 3233.7 3* 1881.5 /
  PROD3 OPEN ORAT 4035.5 0 3834.1 3* 1895.8 /
  PROD4 OPEN ORAT 1182.4 2.3 1139.7 3* 1914.5 /
  PRODUCER OPEN ORAT 1921.3 1* 1909 3* 2097 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4706.8 1* 4485.4 3* 0 /
  PROD2 OPEN ORAT 3271.2 10.8 3233.7 3* 0 /
  PROD3 OPEN ORAT 4035.5 0 3834.1 3* 0 /
  PROD4 OPEN ORAT 1182.4 2.3 1139.7 3* 0 /
  PRODUCER OPEN ORAT 1921.3 1* 1909 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4706.8 1* 4485.4 3* 0 /
  PROD2 OPEN ORAT 3271.2 10.8 3233.7 3* 0 /
  PROD3 OPEN ORAT 4035.5 0 3834.1 3* 0 /
  PROD4 OPEN ORAT 1182.4 2.3 1139.7 3* 0 /
  PRODUCER OPEN ORAT 1921.3 1* 1909 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4771.7 1* 4460.1 3* 1822.7 /
  PROD2 OPEN ORAT 3248.1 13.9 3086 3* 1756.2 /
  PROD3 OPEN ORAT 3979.5 0 3978.8 3* 1783.7 /
  PROD4 OPEN ORAT 1140 3 1064.4 3* 1887.7 /
  PRODUCER OPEN ORAT 1953.7 1* 1829 3* 2030.5 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4771.7 1* 4460.1 3* 0 /
  PROD2 OPEN ORAT 3248.1 13.9 3086 3* 0 /
  PROD3 OPEN ORAT 3979.5 0 3978.8 3* 0 /
  PROD4 OPEN ORAT 1140 3 1064.4 3* 0 /
  PRODUCER OPEN ORAT 1953.7 1* 1829 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4771.7 1* 4460.1 3* 0 /
  PROD2 OPEN ORAT 3248.1 13.9 3086 3* 0 /
  PROD3 OPEN ORAT 3979.5 0 3978.8 3* 0 /
  PROD4 OPEN ORAT 1140 3 1064.4 3* 0 /
  PRODUCER OPEN ORAT 1953.7 1* 1829 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4687.2 1* 4617.7 3* 1796.3 /
  PROD2 OPEN ORAT 3161.9 15.5 3078.1 3* 1750.8 /
  PROD3 OPEN ORAT 4080.7 0 4046 3* 1801.5 /
  PROD4 OPEN ORAT 1046.3 3.9 970.1 3* 1808.3 /
  PRODUCER OPEN ORAT 1993.5 1* 1922.2 3* 2005.8 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4687.2 1* 4617.7 3* 0 /
  PROD2 OPEN ORAT 3161.9 15.5 3078.1 3* 0 /
  PROD3 OPEN ORAT 4080.7 0 4046 3* 0 /
  PROD4 OPEN ORAT 1046.3 3.9 970.1 3* 0 /
  PRODUCER OPEN ORAT 1993.5 1* 1922.2 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2002 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4687.2 1* 4617.7 3* 0 /
  PROD2 OPEN ORAT 3161.9 15.5 3078.1 3* 0 /
  PROD3 OPEN ORAT 4080.7 0 4046 3* 0 /
  PROD4 OPEN ORAT 1046.3 3.9 970.1 3* 0 /
  PRODUCER OPEN ORAT 1993.5 1* 1922.2 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4849.6 1* 4719.9 3* 1630.6 /
  PROD2 OPEN ORAT 3326.3 19.3 3277 3* 1702.2 /
  PROD3 OPEN ORAT 4137.5 0 4053.2 3* 1724.6 /
  PROD4 OPEN ORAT 945.1 4 952.5 3* 1827.4 /
  PRODUCER OPEN ORAT 1957.7 1* 1982.6 3* 1842.4 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4849.6 1* 4719.9 3* 0 /
  PROD2 OPEN ORAT 3326.3 19.3 3277 3* 0 /
  PROD3 OPEN ORAT 4137.5 0 4053.2 3* 0 /
  PROD4 OPEN ORAT 945.1 4 952.5 3* 0 /
  PRODUCER OPEN ORAT 1957.7 1* 1982.6 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4849.6 1* 4719.9 3* 0 /
  PROD2 OPEN ORAT 3326.3 19.3 3277 3* 0 /
  PROD3 OPEN ORAT 4137.5 0 4053.2 3* 0 /
  PROD4 OPEN ORAT 945.1 4 952.5 3* 0 /
  PRODUCER OPEN ORAT 1957.7 1* 1982.6 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4823.9 1* 4772.9 3* 1524.4 /
  PROD2 OPEN ORAT 3211.1 23.3 3314.2 3* 1553 /
  PROD3 OPEN ORAT 4048.5 0.1 3963.5 3* 1717.1 /
  PROD4 OPEN ORAT 901.2 4.8 874.2 3* 1629.2 /
  PRODUCER OPEN ORAT 2017 1* 1996 3* 1797.8 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4823.9 1* 4772.9 3* 0 /
  PROD2 OPEN ORAT 3211.1 23.3 3314.2 3* 0 /
  PROD3 OPEN ORAT 4048.5 0.1 3963.5 3* 0 /
  PROD4 OPEN ORAT 901.2 4.8 874.2 3* 0 /
  PRODUCER OPEN ORAT 2017 1* 1996 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4823.9 1* 4772.9 3* 0 /
  PROD2 OPEN ORAT 3211.1 23.3 3314.2 3* 0 /
  PROD3 OPEN ORAT 4048.5 0.1 3963.5 3* 0 /
  PROD4 OPEN ORAT 901.2 4.8 874.2 3* 0 /
  PRODUCER OPEN ORAT 2017 1* 1996 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4855.7 1* 4798.9 3* 1500.7 /
  PROD2 OPEN ORAT 3234 26.6 3029.3 3* 1506 /
  PROD3 OPEN ORAT 3951.1 0.2 4033.4 3* 1618.9 /
  PROD4 OPEN ORAT 824.7 5.5 848.5 3* 1549.1 /
  PRODUCER OPEN ORAT 2023.6 1* 1905.2 3* 1781.6 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4855.7 1* 4798.9 3* 0 /
  PROD2 OPEN ORAT 3234 26.6 3029.3 3* 0 /
  PROD3 OPEN ORAT 3951.1 0.2 4033.4 3* 0 /
  PROD4 OPEN ORAT 824.7 5.5 848.5 3* 0 /
  PRODUCER OPEN ORAT 2023.6 1* 1905.2 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4855.7 1* 4798.9 3* 0 /
  PROD2 OPEN ORAT 3234 26.6 3029.3 3* 0 /
  PROD3 OPEN ORAT 3951.1 0.2 4033.4 3* 0 /
  PROD4 OPEN ORAT 824.7 5.5 848.5 3* 0 /
  PRODUCER OPEN ORAT 2023.6 1* 1905.2 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4741.2 1* 4941.2 3* 1445.5 /
  PROD2 OPEN ORAT 3238.1 28.6 3143.2 3* 1550.1 /
  PROD3 OPEN ORAT 4118.2 0.3 4059.4 3* 1488.5 /
  PROD4 OPEN ORAT 775.4 7.8 751.6 3* 1630.6 /
  PRODUCER OPEN ORAT 2006.3 1* 2059.3 3* 1604.6 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4741.2 1* 4941.2 3* 0 /
  PROD2 OPEN ORAT 3238.1 28.6 3143.2 3* 0 /
  PROD3 OPEN ORAT 4118.2 0.3 4059.4 3* 0 /
  PROD4 OPEN ORAT 775.4 7.8 751.6 3* 0 /
  PRODUCER OPEN ORAT 2006.3 1* 2059.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2003 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4741.2 1* 4941.2 3* 0 /
  PROD2 OPEN ORAT 3238.1 28.6 3143.2 3* 0 /
  PROD3 OPEN ORAT 4118.2 0.3 4059.4 3* 0 /
  PROD4 OPEN ORAT 775.4 7.8 751.6 3* 0 /
  PRODUCER OPEN ORAT 2006.3 1* 2059.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4871.7 1* 4979 3* 1392.3 /
  PROD2 OPEN ORAT 3280.4 32.2 3119.8 3* 1398.1 /
  PROD3 OPEN ORAT 4053.2 0.5 3895.5 3* 1500.2 /
  PROD4 OPEN ORAT 714.6 9.4 725.6 3* 1511.4 /
  PRODUCER OPEN ORAT 2129.1 1* 2078.1 3* 1630.8 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4871.7 1* 4979 3* 0 /
  PROD2 OPEN ORAT 3280.4 32.2 3119.8 3* 0 /
  PROD3 OPEN ORAT 4053.2 0.5 3895.5 3* 0 /
  PROD4 OPEN ORAT 714.6 9.4 725.6 3* 0 /
  PRODUCER OPEN ORAT 2129.1 1* 2078.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4871.7 1* 4979 3* 0 /
  PROD2 OPEN ORAT 3280.4 32.2 3119.8 3* 0 /
  PROD3 OPEN ORAT 4053.2 0.5 3895.5 3* 0 /
  PROD4 OPEN ORAT 714.6 9.4 725.6 3* 0 /
  PRODUCER OPEN ORAT 2129.1 1* 2078.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4868.1 1* 4668.8 3* 1362.4 /
  PROD2 OPEN ORAT 3292.9 34.3 3043.4 3* 1400.8 /
  PROD3 OPEN ORAT 3991.3 0.7 3831.9 3* 1435.6 /
  PROD4 OPEN ORAT 655.4 10.9 655.4 3* 1435.2 /
  PRODUCER OPEN ORAT 2060 1* 2011.7 3* 1490.2 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4868.1 1* 4668.8 3* 0 /
  PROD2 OPEN ORAT 3292.9 34.3 3043.4 3* 0 /
  PROD3 OPEN ORAT 3991.3 0.7 3831.9 3* 0 /
  PROD4 OPEN ORAT 655.4 10.9 655.4 3* 0 /
  PRODUCER OPEN ORAT 2060 1* 2011.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4868.1 1* 4668.8 3* 0 /
  PROD2 OPEN ORAT 3292.9 34.3 3043.4 3* 0 /
  PROD3 OPEN ORAT 3991.3 0.7 3831.9 3* 0 /
  PROD4 OPEN ORAT 655.4 10.9 655.4 3* 0 /
  PRODUCER OPEN ORAT 2060 1* 2011.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5015.1 1* 4752.8 3* 1327.1 /
  PROD2 OPEN ORAT 3287.1 40.3 3365 3* 1357.8 /
  PROD3 OPEN ORAT 3911.2 0.8 3985.9 3* 1321.7 /
  PROD4 OPEN ORAT 595.3 11.7 568.9 3* 1425.5 /
  PRODUCER OPEN ORAT 2177.1 1* 2033.4 3* 1502.1 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5015.1 1* 4752.8 3* 0 /
  PROD2 OPEN ORAT 3287.1 40.3 3365 3* 0 /
  PROD3 OPEN ORAT 3911.2 0.8 3985.9 3* 0 /
  PROD4 OPEN ORAT 595.3 11.7 568.9 3* 0 /
  PRODUCER OPEN ORAT 2177.1 1* 2033.4 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5015.1 1* 4752.8 3* 0 /
  PROD2 OPEN ORAT 3287.1 40.3 3365 3* 0 /
  PROD3 OPEN ORAT 3911.2 0.8 3985.9 3* 0 /
  PROD4 OPEN ORAT 595.3 11.7 568.9 3* 0 /
  PRODUCER OPEN ORAT 2177.1 1* 2033.4 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4911 1* 4674.5 3* 1210.4 /
  PROD2 OPEN ORAT 3322.6 41.6 3237.5 3* 1333.2 /
  PROD3 OPEN ORAT 3919.4 0.9 4062.5 3* 1248.2 /
  PROD4 OPEN ORAT 566.4 13.7 525.3 3* 1284.9 /
  PRODUCER OPEN ORAT 2183 1* 2086 3* 1403.1 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4911 1* 4674.5 3* 0 /
  PROD2 OPEN ORAT 3322.6 41.6 3237.5 3* 0 /
  PROD3 OPEN ORAT 3919.4 0.9 4062.5 3* 0 /
  PROD4 OPEN ORAT 566.4 13.7 525.3 3* 0 /
  PRODUCER OPEN ORAT 2183 1* 2086 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2004 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4911 1* 4674.5 3* 0 /
  PROD2 OPEN ORAT 3322.6 41.6 3237.5 3* 0 /
  PROD3 OPEN ORAT 3919.4 0.9 4062.5 3* 0 /
  PROD4 OPEN ORAT 566.4 13.7 525.3 3* 0 /
  PRODUCER OPEN ORAT 2183 1* 2086 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5112.6 1* 4763.7 3* 1160.3 /
  PROD2 OPEN ORAT 3306 46.6 3324.1 3* 1271.2 /
  PROD3 OPEN ORAT 3997 1.5 3770.3 3* 1286.7 /
  PROD4 OPEN ORAT 515.3 14.6 529.6 3* 1288 /
  PRODUCER OPEN ORAT 2178.2 1* 2072.7 3* 1447.2 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5112.6 1* 4763.7 3* 0 /
  PROD2 OPEN ORAT 3306 46.6 3324.1 3* 0 /
  PROD3 OPEN ORAT 3997 1.5 3770.3 3* 0 /
  PROD4 OPEN ORAT 515.3 14.6 529.6 3* 0 /
  PRODUCER OPEN ORAT 2178.2 1* 2072.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5112.6 1* 4763.7 3* 0 /
  PROD2 OPEN ORAT 3306 46.6 3324.1 3* 0 /
  PROD3 OPEN ORAT 3997 1.5 3770.3 3* 0 /
  PROD4 OPEN ORAT 515.3 14.6 529.6 3* 0 /
  PRODUCER OPEN ORAT 2178.2 1* 2072.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5070.1 1* 4651.1 3* 1191.1 /
  PROD2 OPEN ORAT 3316.2 48.7 3112.3 3* 1136.5 /
  PROD3 OPEN ORAT 3949.3 2 3727.6 3* 1171.2 /
  PROD4 OPEN ORAT 483.8 15.5 470.1 3* 1196.6 /
  PRODUCER OPEN ORAT 2227.9 1* 2158.1 3* 1369.1 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5070.1 1* 4651.1 3* 0 /
  PROD2 OPEN ORAT 3316.2 48.7 3112.3 3* 0 /
  PROD3 OPEN ORAT 3949.3 2 3727.6 3* 0 /
  PROD4 OPEN ORAT 483.8 15.5 470.1 3* 0 /
  PRODUCER OPEN ORAT 2227.9 1* 2158.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5070.1 1* 4651.1 3* 0 /
  PROD2 OPEN ORAT 3316.2 48.7 3112.3 3* 0 /
  PROD3 OPEN ORAT 3949.3 2 3727.6 3* 0 /
  PROD4 OPEN ORAT 483.8 15.5 470.1 3* 0 /
  PRODUCER OPEN ORAT 2227.9 1* 2158.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4965.1 1* 4973.4 3* 1140.7 /
  PROD2 OPEN ORAT 3375.7 49.1 3222.2 3* 1166.3 /
  PROD3 OPEN ORAT 3960.5 2.4 3698.6 3* 1120 /
  PROD4 OPEN ORAT 472.6 18.1 436.4 3* 1194.7 /
  PRODUCER OPEN ORAT 2262.9 1* 2202.1 3* 1295.3 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4965.1 1* 4973.4 3* 0 /
  PROD2 OPEN ORAT 3375.7 49.1 3222.2 3* 0 /
  PROD3 OPEN ORAT 3960.5 2.4 3698.6 3* 0 /
  PROD4 OPEN ORAT 472.6 18.1 436.4 3* 0 /
  PRODUCER OPEN ORAT 2262.9 1* 2202.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4965.1 1* 4973.4 3* 0 /
  PROD2 OPEN ORAT 3375.7 49.1 3222.2 3* 0 /
  PROD3 OPEN ORAT 3960.5 2.4 3698.6 3* 0 /
  PROD4 OPEN ORAT 472.6 18.1 436.4 3* 0 /
  PRODUCER OPEN ORAT 2262.9 1* 2202.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5091.5 1* 4870.5 3* 1072 /
  PROD2 OPEN ORAT 3308.4 56.1 3222.6 3* 1081.2 /
  PROD3 OPEN ORAT 3837.7 2.9 3888.9 3* 1123.5 /
  PROD4 OPEN ORAT 429.8 20.1 434.1 3* 1115 /
  PRODUCER OPEN ORAT 2245.5 1* 2144.9 3* 1226.1 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5091.5 1* 4870.5 3* 0 /
  PROD2 OPEN ORAT 3308.4 56.1 3222.6 3* 0 /
  PROD3 OPEN ORAT 3837.7 2.9 3888.9 3* 0 /
  PROD4 OPEN ORAT 429.8 20.1 434.1 3* 0 /
  PRODUCER OPEN ORAT 2245.5 1* 2144.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2005 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5091.5 1* 4870.5 3* 0 /
  PROD2 OPEN ORAT 3308.4 56.1 3222.6 3* 0 /
  PROD3 OPEN ORAT 3837.7 2.9 3888.9 3* 0 /
  PROD4 OPEN ORAT 429.8 20.1 434.1 3* 0 /
  PRODUCER OPEN ORAT 2245.5 1* 2144.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5028.8 1* 4781.5 3* 1041.9 /
  PROD2 OPEN ORAT 3480.4 56.4 3407 3* 1081.1 /
  PROD3 OPEN ORAT 3843.6 3.2 3797.4 3* 1057.9 /
  PROD4 OPEN ORAT 399.1 20.8 412.8 3* 1111 /
  PRODUCER OPEN ORAT 2318.2 1* 2149.7 3* 1159.3 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5028.8 1* 4781.5 3* 0 /
  PROD2 OPEN ORAT 3480.4 56.4 3407 3* 0 /
  PROD3 OPEN ORAT 3843.6 3.2 3797.4 3* 0 /
  PROD4 OPEN ORAT 399.1 20.8 412.8 3* 0 /
  PRODUCER OPEN ORAT 2318.2 1* 2149.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 5028.8 1* 4781.5 3* 0 /
  PROD2 OPEN ORAT 3480.4 56.4 3407 3* 0 /
  PROD3 OPEN ORAT 3843.6 3.2 3797.4 3* 0 /
  PROD4 OPEN ORAT 399.1 20.8 412.8 3* 0 /
  PRODUCER OPEN ORAT 2318.2 1* 2149.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4975.3 1* 4680.6 3* 951.2 /
  PROD2 OPEN ORAT 3272.5 61.5 2976.1 3* 1035.4 /
  PROD3 OPEN ORAT 4146.5 3.5 3790.5 3* 1065.3 /
  PROD4 OPEN ORAT 426.6 21.9 422 3* 1132 /
  PRODUCER OPEN ORAT 2392.6 1* 2387.1 3* 1152.3 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4975.3 1* 4680.6 3* 0 /
  PROD2 OPEN ORAT 3272.5 61.5 2976.1 3* 0 /
  PROD3 OPEN ORAT 4146.5 3.5 3790.5 3* 0 /
  PROD4 OPEN ORAT 426.6 21.9 422 3* 0 /
  PRODUCER OPEN ORAT 2392.6 1* 2387.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4975.3 1* 4680.6 3* 0 /
  PROD2 OPEN ORAT 3272.5 61.5 2976.1 3* 0 /
  PROD3 OPEN ORAT 4146.5 3.5 3790.5 3* 0 /
  PROD4 OPEN ORAT 426.6 21.9 422 3* 0 /
  PRODUCER OPEN ORAT 2392.6 1* 2387.1 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4065 1* 3966 3* 961.3 /
  PROD2 OPEN ORAT 2951.8 64.6 2774.2 3* 1010.5 /
  PROD3 OPEN ORAT 4862 4.1 4474.4 3* 1038.8 /
  PROD4 OPEN ORAT 481.2 24.2 471.3 3* 1070.6 /
  PRODUCER OPEN ORAT 2670.3 1* 2637.6 3* 993.1 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4065 1* 3966 3* 0 /
  PROD2 OPEN ORAT 2951.8 64.6 2774.2 3* 0 /
  PROD3 OPEN ORAT 4862 4.1 4474.4 3* 0 /
  PROD4 OPEN ORAT 481.2 24.2 471.3 3* 0 /
  PRODUCER OPEN ORAT 2670.3 1* 2637.6 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 4065 1* 3966 3* 0 /
  PROD2 OPEN ORAT 2951.8 64.6 2774.2 3* 0 /
  PROD3 OPEN ORAT 4862 4.1 4474.4 3* 0 /
  PROD4 OPEN ORAT 481.2 24.2 471.3 3* 0 /
  PRODUCER OPEN ORAT 2670.3 1* 2637.6 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3530.3 1* 3362.9 3* 931.4 /
  PROD2 OPEN ORAT 2710.6 66.4 2478.5 3* 1009.6 /
  PROD3 OPEN ORAT 5030.2 5.2 4956.5 3* 1040.7 /
  PROD4 OPEN ORAT 589.3 29.5 598.7 3* 1028.8 /
  PRODUCER OPEN ORAT 3036.1 1* 2989.3 3* 1039.2 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3530.3 1* 3362.9 3* 0 /
  PROD2 OPEN ORAT 2710.6 66.4 2478.5 3* 0 /
  PROD3 OPEN ORAT 5030.2 5.2 4956.5 3* 0 /
  PROD4 OPEN ORAT 589.3 29.5 598.7 3* 0 /
  PRODUCER OPEN ORAT 3036.1 1* 2989.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2006 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3530.3 1* 3362.9 3* 0 /
  PROD2 OPEN ORAT 2710.6 66.4 2478.5 3* 0 /
  PROD3 OPEN ORAT 5030.2 5.2 4956.5 3* 0 /
  PROD4 OPEN ORAT 589.3 29.5 598.7 3* 0 /
  PRODUCER OPEN ORAT 3036.1 1* 2989.3 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3421.1 1* 3166.3 3* 908.9 /
  PROD2 OPEN ORAT 2558.3 67.7 2431.1 3* 922.8 /
  PROD3 OPEN ORAT 5092.9 5.4 4608.7 3* 1032.7 /
  PROD4 OPEN ORAT 745.9 36.5 735.3 3* 1082.1 /
  PRODUCER OPEN ORAT 3367.3 1* 3121.5 3* 1022.3 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3421.1 1* 3166.3 3* 0 /
  PROD2 OPEN ORAT 2558.3 67.7 2431.1 3* 0 /
  PROD3 OPEN ORAT 5092.9 5.4 4608.7 3* 0 /
  PROD4 OPEN ORAT 745.9 36.5 735.3 3* 0 /
  PRODUCER OPEN ORAT 3367.3 1* 3121.5 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3421.1 1* 3166.3 3* 0 /
  PROD2 OPEN ORAT 2558.3 67.7 2431.1 3* 0 /
  PROD3 OPEN ORAT 5092.9 5.4 4608.7 3* 0 /
  PROD4 OPEN ORAT 745.9 36.5 735.3 3* 0 /
  PRODUCER OPEN ORAT 3367.3 1* 3121.5 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3252.8 1* 2962.5 3* 956.6 /
  PROD2 OPEN ORAT 2511.3 79.6 2294.5 3* 932.4 /
  PROD3 OPEN ORAT 4968.1 6.1 4755.1 3* 1032.3 /
  PROD4 OPEN ORAT 906.3 42.6 896.4 3* 1034.8 /
  PRODUCER OPEN ORAT 3304.8 1* 3269.5 3* 921.7 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3252.8 1* 2962.5 3* 0 /
  PROD2 OPEN ORAT 2511.3 79.6 2294.5 3* 0 /
  PROD3 OPEN ORAT 4968.1 6.1 4755.1 3* 0 /
  PROD4 OPEN ORAT 906.3 42.6 896.4 3* 0 /
  PRODUCER OPEN ORAT 3304.8 1* 3269.5 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3252.8 1* 2962.5 3* 0 /
  PROD2 OPEN ORAT 2511.3 79.6 2294.5 3* 0 /
  PROD3 OPEN ORAT 4968.1 6.1 4755.1 3* 0 /
  PROD4 OPEN ORAT 906.3 42.6 896.4 3* 0 /
  PRODUCER OPEN ORAT 3304.8 1* 3269.5 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3136.6 1* 2782.9 3* 914.9 /
  PROD2 OPEN ORAT 2476.1 78.9 2308.8 3* 976.8 /
  PROD3 OPEN ORAT 5008.3 7.8 4739.4 3* 983 /
  PROD4 OPEN ORAT 1081.7 52.4 1094.2 3* 999.4 /
  PRODUCER OPEN ORAT 3324.6 1* 3071.9 3* 935.1 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3136.6 1* 2782.9 3* 0 /
  PROD2 OPEN ORAT 2476.1 78.9 2308.8 3* 0 /
  PROD3 OPEN ORAT 5008.3 7.8 4739.4 3* 0 /
  PROD4 OPEN ORAT 1081.7 52.4 1094.2 3* 0 /
  PRODUCER OPEN ORAT 3324.6 1* 3071.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3136.6 1* 2782.9 3* 0 /
  PROD2 OPEN ORAT 2476.1 78.9 2308.8 3* 0 /
  PROD3 OPEN ORAT 5008.3 7.8 4739.4 3* 0 /
  PROD4 OPEN ORAT 1081.7 52.4 1094.2 3* 0 /
  PRODUCER OPEN ORAT 3324.6 1* 3071.9 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3180.3 1* 2994.2 3* 910.5 /
  PROD2 OPEN ORAT 2416.3 80.9 2235.1 3* 929.1 /
  PROD3 OPEN ORAT 5025.5 8.7 4583.9 3* 978 /
  PROD4 OPEN ORAT 1298.9 62.6 1257 3* 954.3 /
  PRODUCER OPEN ORAT 3159.1 1* 2746.7 3* 935.6 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3180.3 1* 2994.2 3* 0 /
  PROD2 OPEN ORAT 2416.3 80.9 2235.1 3* 0 /
  PROD3 OPEN ORAT 5025.5 8.7 4583.9 3* 0 /
  PROD4 OPEN ORAT 1298.9 62.6 1257 3* 0 /
  PRODUCER OPEN ORAT 3159.1 1* 2746.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2007 /
  /

WCONHIST                               -- Generated : Petrel
  PROD1 OPEN ORAT 3180.3 1* 2994.2 3* 0 /
  PROD2 OPEN ORAT 2416.3 80.9 2235.1 3* 0 /
  PROD3 OPEN ORAT 5025.5 8.7 4583.9 3* 0 /
  PROD4 OPEN ORAT 1298.9 62.6 1257 3* 0 /
  PRODUCER OPEN ORAT 3159.1 1* 2746.7 3* 0 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2008 /
  /

