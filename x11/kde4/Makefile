# $OpenBSD: Makefile,v 1.65 2019/02/21 08:07:46 ajacoutot Exp $

# Build dependency tree of main building blocks:
# OUTSIDE: akonadi, attica, automoc, cagibi, phonon, qimageblitz,
# libqaccessibilityclient, kwebkitpart, libktorrent
#
# smokegen
# +-> smokeqt
# |   +-> qyoto ->------------------------------------->-----+
# |   +-> ruby-qt ->----------------------------------->----+|
# |   +-> p5-qt ->------------------------------------->---+||
# |                                                        |||
# +->-------------------------------------------------->-+ |||
#                                                        | |||
# devel/kf5/oxygen-icons                                 | |||
# +-> libs                                               | |||
#     +-> pure resources: base-artwork, l10n, wallpapers | |||
#     |                                                  | |||
#     +-> baseapps <---------------<-+                   | |||
#     |   +-> konsole                |                   | |||
#     |                              |                   | |||
#     |-> kfilemetadata -->-----+    |                   | |||
#     +-> pimlibs               |    |                   | |||
#     |   +-> libkfbapi         |    |                   | |||
#     |   +-> libkgapi          |    |                   | |||
#     |   +-> pim-runtime       |    |                   | |||
#     |   +-> baloo <>-------<>-+-->-+                   | |||
#     |       +-> nepomuk-core                           | |||
#     |           +-> kactivities                        | |||
#     |               +-> runtime                        | |||
#     |           +-> pim                |               | |||
#     |           +-> py-kde                             | |||
#     |                                                  | |||
#     +-> nepomuk-core                                   | |||
#     |   +-> kactivities -->--+------->-+               | |||
#     |   +-> runtime <--+---<-+         |               | |||
#     |   +-> pimlibs ->-+               |               | |||
#     |       +-> pim-runtime            |               | |||
#     |       +-> pim                    |               | |||
#     |       +-> py-kde                 |               | |||
#     |           +-> some games         |               | |||
#     |           +-> workspace <------<-+               | |||
#     |           |   +-> former admin   |               | |||
#     |           |   +-> artwork        |               | |||
#     |           |   +-> former network |               | |||
#     |           |                      |               | |||
#     |           | +-<----------------<-+               | |||
#     |           | |                                    | |||
#     |           +-+-> kate ->-+                        | |||
#     |                         |                        | |||
#     +-> smokekde <-+-<--------+-<-+-<---(smokegen)---<-+ |||
#     |   |          |              |                      |||
#     |   |          +-<- smokeqt <-+                      |||
#     |   |                                                |||
#     |   +-> p5-kde <--------------------(p5-qt)----------+||
#     |   +-> korundum <------------------(ruby-qt)---------+|
#     |   +-> kimono <--------------------(qyoto)------------+
#     |
#     +-> libkdeedu
#     |   +-> former kdeedu
#     |
#     +-> libkdegames, libkmahjongg
#     |   +-> former kdegames (see also py-kde above)
#     |
#     +-> other libk*
#     |   +-> former kdegraphics
#     |   +-> former kdemultimedia
#     |
#     +-> former kdeaccessibility
#     +-> former kdesdk
#     +-> former kdetoys
#     +-> former kdeutils

SUBDIR =
# don't even try to keep these sorted

# libraries
SUBDIR += libs
SUBDIR += pimlibs

# extra base
SUBDIR += baloo
SUBDIR += baloo-widgets
SUBDIR += kactivities
SUBDIR += kfilemetadata
#SUBDIR += kqtquickcharts	x11/kde-applications
SUBDIR += nepomuk-core
SUBDIR += nepomuk-widgets
SUBDIR += runtime
SUBDIR += pim-runtime
SUBDIR += workspace
SUBDIR += baseapps
#SUBDIR += kate			x11/kde-applications
#SUBDIR += konsole		x11/kde-applications

# bindings and wrappers
SUBDIR += kross-interpreters
SUBDIR += smokegen
SUBDIR += smokeqt
SUBDIR += p5-qt
SUBDIR += ruby-qt
SUBDIR += qyoto
SUBDIR += smokekde
SUBDIR += py-kde
SUBDIR += p5-kde
SUBDIR += korundum
SUBDIR += kimono

# fat packages
SUBDIR += pim
SUBDIR += webdev

# former kdeaccessibility
SUBDIR += jovie
SUBDIR += kaccessible
SUBDIR += kmousetool
#SUBDIR += kmag			x11/kde-applications
SUBDIR += kmouth

# former kdeutils
#SUBDIR += ark			x11/kde-applications
SUBDIR += filelight
#SUBDIR += kcalc		x11/kde-applications
SUBDIR += kcharselect
SUBDIR += kdf
SUBDIR += kfloppy
SUBDIR += kgpg
SUBDIR += kremotecontrol
SUBDIR += ktimer
SUBDIR += kwalletmanager
SUBDIR += print-manager
SUBDIR += superkaramba
SUBDIR += sweeper

# former kdeedu
#SUBDIR += artikulate		x11/kde-applications
#SUBDIR += blinken		x11/kde-applications
#SUBDIR += cantor		x11/kde-applications
#SUBDIR += analitza		x11/kde-applications
#SUBDIR += kalgebra		x11/kde-applications
#SUBDIR += kalzium	XXX not in ports
#SUBDIR += kanagram		x11/kde-applications
#SUBDIR += kbruch		x11/kde-applications
SUBDIR += kgeography
#SUBDIR += khangman		x11/kde-applications
#SUBDIR += kig			x11/kde-applications
#SUBDIR += kiten		x11/kde-applications
#SUBDIR += klettres		x11/kde-applications
#SUBDIR += kmplot		x11/kde-applications
SUBDIR += kstars
#SUBDIR += ktouch		x11/kde-applications
SUBDIR += kturtle
SUBDIR += kwordquiz
SUBDIR += libkdeedu
SUBDIR += marble
SUBDIR += pairs
SUBDIR += parley
SUBDIR += rocs
#SUBDIR += step			x11/kde-applications

# former kdegames
#SUBDIR += libkdegames
#SUBDIR += libkmahjongg
#SUBDIR += bomber		x11/kde-applications
#SUBDIR += bovo			x11/kde-applications
#SUBDIR += granatier		x11/kde-applications
#SUBDIR += kajongg		x11/kde-applications
#SUBDIR += kapman		x11/kde-applications
#SUBDIR += katomic		x11/kde-applications
#SUBDIR += kblackbox		x11/kde-applications
#SUBDIR += kblocks		x11/kde-applications
#SUBDIR += kbounce		x11/kde-applications
#SUBDIR += kbreakout		x11/kde-applications
#SUBDIR += kdiamond		x11/kde-applications
#SUBDIR += kfourinline		x11/kde-applications
#SUBDIR += kgoldrunner		x11/kde-applications
#SUBDIR += kigo			x11/kde-applications
#SUBDIR += killbots		x11/kde-applications
#SUBDIR += kiriki		x11/kde-applications
#SUBDIR += kjumpingcube		x11/kde-applications
#SUBDIR += klickety		x11/kde-applications
#SUBDIR += klines		x11/kde-applications
#SUBDIR += kmahjongg		x11/kde-applications
#SUBDIR += kmines		x11/kde-applications
#SUBDIR += knavalbattle		x11/kde-applications
#SUBDIR += knetwalk		x11/kde-applications
#SUBDIR += kolf			x11/kde-applications
#SUBDIR += kollision		x11/kde-applications
#SUBDIR += konquest		x11/kde-applications
SUBDIR += kpat
#SUBDIR += kreversi		x11/kde-applications
#SUBDIR += kshisen		x11/kde-applications
#SUBDIR += ksirk		x11/kde-applications
#SUBDIR += ksnakeduel		x11/kde-applications
#SUBDIR += kspaceduel		x11/kde-applications
#SUBDIR += ksquares		x11/kde-applications
#SUBDIR += ksudoku		x11/kde-applications
#SUBDIR += ktuberling		x11/kde-applications
#SUBDIR += kubrick		x11/kde-applications
#SUBDIR += lskat		x11/kde-applications
#SUBDIR += palapeli		x11/kde-applications
SUBDIR += picmi

# former kdegraphics
SUBDIR += graphics-mobipocket
SUBDIR += graphics-strigi-analyzer
SUBDIR += graphics-thumbnailers
SUBDIR += gwenview
SUBDIR += kamera
SUBDIR += kcolorchooser
SUBDIR += kgamma
SUBDIR += kolourpaint
SUBDIR += kruler
SUBDIR += ksaneplugin
SUBDIR += ksnapshot
SUBDIR += libkdcraw
SUBDIR += libkexiv2
SUBDIR += libkipi
SUBDIR += libksane
#SUBDIR += okular		x11/kde-applications
SUBDIR += svgpart

# former kdemultimedia
SUBDIR += audiocd-kio
#SUBDIR += dragon		x11/kde-applications
SUBDIR += ffmpegthumbs
SUBDIR += juk
SUBDIR += kmix
SUBDIR += kscd
SUBDIR += libkcddb
SUBDIR += libkcompactdisc
SUBDIR += mplayerthumbs

# former kdeadmin
SUBDIR += kcron
#SUBDIR += ksystemlog		x11/kde-applications
SUBDIR += kuser

# former kdenetwork
SUBDIR += kget
SUBDIR += kopete
SUBDIR += kppp
SUBDIR += krdc
SUBDIR += krfb
SUBDIR += network-filesharing
SUBDIR += network-strigi-analyzers
SUBDIR += zeroconf-ioslave

# former kdesdk
#SUBDIR += cervisia			x11/kde-applications
SUBDIR += dev-scripts
SUBDIR += dev-utils
SUBDIR += dolphin-plugins
SUBDIR += kapptemplate
SUBDIR += kcachegrind
#SUBDIR += kompare			x11/kde-applications
#SUBDIR += libkomparediff2		x11/kde-applications
SUBDIR += lokalize
#SUBDIR += okteta			x11/kde-applications
SUBDIR += poxml
SUBDIR += sdk-kioslaves
SUBDIR += sdk-strigi-analyzers
SUBDIR += sdk-thumbnailers
#SUBDIR += umbrello			x11/kde-applications

# former kdetoys
SUBDIR += amor
SUBDIR += ktux
SUBDIR += kteatime

# additional resources
SUBDIR += artwork
SUBDIR += base-artwork
SUBDIR += l10n
SUBDIR += plasma-addons
SUBDIR += wallpapers

.include <bsd.port.subdir.mk>
