# $OpenBSD: Makefile,v 1.2 2019/02/07 23:27:34 bcallah Exp $

COMMENT =	lightweight Qt5 notes manager
PKGNAME =	feathernotes-${GH_TAGNAME:S/^V//}
CATEGORIES =	misc x11

GH_ACCOUNT =	tsujan
GH_PROJECT =	FeatherNotes
GH_TAGNAME =	V0.4.6

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5PrintSupport
WANTLIB += Qt5Svg Qt5Widgets Qt5X11Extras Qt5Xml X11 c m

MODULES =	devel/qmake \
		x11/qt5

LIB_DEPENDS =	x11/qt5/qtsvg \
		x11/qt5/qtx11extras

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-mime-info \
		x11/gtk+3,-guic

NO_TEST =	Yes

WRKDIST =	${WRKDIR}/${GH_PROJECT}-${GH_TAGNAME:S/^V//}

.include <bsd.port.mk>
