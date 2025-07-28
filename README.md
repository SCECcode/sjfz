# The San Jacinto Fault Zone velocity model (sjfz)

<a href="https://github.com/sceccode/sjfz.git"><img src="https://github.com/sceccode/sjfz/wiki/images/sjfz_logo.png"></a>

[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
![GitHub repo size](https://img.shields.io/github/repo-size/sceccode/sjfz)
[![sjfz-ucvm-ci Actions Status](https://github.com/SCECcode/sjfz/workflows/sjfz-ucvm-ci/badge.svg)](https://github.com/SCECcode/sjfz/actions)

The San Jacinto Fault Zone Velocity Model

This San Jacinto Fault Zone velocity model was obtained using seismic tomography methods based on P and S arrival times to develop Vp, Vs and Vp/Vs models. This model was developed using a Vp/Vs inversion method based on double-difference (DD) tomography, which was adopted for the body wave part of our joint inversion to simultaneously invert 3-D wave speed models and seismic event locations using both absolute and differential arrival times. These methods were applied to a southern California plate boundary region using a data set that includes 247 472 P- and 105 448 S-wave phase picks recorded at 139 stations from 5493 events augmented by 151 575 differential travel times for better constraining the structure in the source regions. This model also incorporated 30 377 Rayleigh wave group travel times with periods ranging from 3 to 12 s.

Fang, H., H. Yao, H. Zhang, C. Thurber, Y. Ben-Zion, and R. D. van der Hilst, 2019. Vp/Vs tomography in the southern California plate boundary region using body- and surface-wave traveltime data, Geophys. J. Int., 216, 609–620, doi: 10.1093/gji/ggy458.

## Installation

This package is intended to be installed as part of the UCVM framework,
version 25.7 or higher. 

## Contact the authors

If you would like to contact the authors regarding this software,
please e-mail software@scec.org. Note this e-mail address should
be used for questions regarding the software itself (e.g. how
do I link the library properly?). Questions regarding the model's
science (e.g. on what paper is the SJFZ based?) should be directed
to the model's authors, located in the AUTHORS file.

## To build in standalone mode

To install this package on your computer, please run the following commands:

<pre>
  aclocal
  autoconf
  automake --add-missing
  ./configure --prefix=/dir/to/install
  make
  make install
</pre>

### sjfz_query

ASCII query interface(C api) accepts points from stdin with format (lat, lon, dep (m)) and write
data material p roperties to stdout.
