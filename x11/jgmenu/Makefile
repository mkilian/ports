# $OpenBSD: Makefile,v 1.1.1.1 2019/02/03 15:47:09 bcallah Exp $

COMMENT =	freedesktop-compliant menu for openbox and tint2
CATEGORIES =	x11

GH_ACCOUNT =	johanmalm
GH_PROJECT =	jgmenu
GH_TAGNAME =	v2.0

# GPLv2 only
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += X11 Xrandr c cairo gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 iconv intl lzma m menu-cache pango-1.0
WANTLIB += pangocairo-1.0 png16 pthread rsvg-2 xml2 z

MODULES =		lang/python
MODPY_VERSION =		${MODPY_DEFAULT_VERSION_3}
MODPY_BUILDDEP =	No
MODPY_SETUPTOOLS =	No

LIB_DEPENDS =	x11/gnome/librsvg \
		x11/menu-cache

RUN_DEPENDS =	devel/desktop-file-utils \
                x11/gtk+3,-guic

CONFIGURE_STYLE =	none

USE_GMAKE =	Yes
MAKE_FLAGS =	VERBOSE=1

.include <bsd.port.mk>
