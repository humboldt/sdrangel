#--------------------------------------------------------
#
# Pro file for Android and Windows builds with Qt Creator
#
#--------------------------------------------------------

TEMPLATE = subdirs
SUBDIRS = sdrbase
SUBDIRS += lz4
CONFIG(MINGW64)SUBDIRS += nanomsg
SUBDIRS += fcdhid
SUBDIRS += fcdlib
SUBDIRS += librtlsdr
SUBDIRS += libhackrf
SUBDIRS += libairspy
SUBDIRS += libbladerf
SUBDIRS += mbelib
SUBDIRS += dsdcc
SUBDIRS += serialdv
SUBDIRS += plugins/samplesource/filesource
CONFIG(MINGW64)SUBDIRS += plugins/samplesource/sdrdaemon
SUBDIRS += plugins/samplesource/rtlsdr
SUBDIRS += plugins/samplesource/hackrf
SUBDIRS += plugins/samplesource/airspy
SUBDIRS += plugins/samplesource/bladerf
SUBDIRS += plugins/channel/chanalyzer
SUBDIRS += plugins/channel/demodam
SUBDIRS += plugins/channel/demodbfm
SUBDIRS += plugins/channel/demoddsd
SUBDIRS += plugins/channel/demodlora
SUBDIRS += plugins/channel/demodnfm
SUBDIRS += plugins/channel/demodssb
SUBDIRS += plugins/channel/demodwfm
SUBDIRS += plugins/channel/tcpsrc
SUBDIRS += plugins/channel/udpsrc

# Main app must be last
CONFIG += ordered
SUBDIRS += app
