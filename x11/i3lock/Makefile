# $OpenBSD: Makefile,v 1.4 2018/10/21 12:07:30 jasper Exp $

COMMENT =		improved screen locker

GH_ACCOUNT =		i3
GH_PROJECT =		i3lock
GH_TAGNAME =		2.11.1

CATEGORIES =		x11

HOMEPAGE =		https://i3wm.org/i3lock/

MAINTAINER =		Jasper Lievisse Adriaanse <jasper@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		https://i3wm.org/i3lock/
EXTRACT_SUFX =		.tar.bz2

WANTLIB += c cairo ev m xcb xcb-image xcb-shm xcb-randr iconv xcb-xrm
WANTLIB += xcb-util xcb-xinerama xcb-xkb xkbcommon xkbcommon-x11

LIB_DEPENDS =		devel/libev \
			graphics/cairo \
			x11/xkbcommon

AUTOCONF_VERSION =	2.69
CONFIGURE_STYLE =	autoconf
CONFIGURE_ENV =		LDFLAGS="-L${LOCALBASE}/lib" \
			CPPFLAGS="-I${LOCALBASE}/include"

USE_GMAKE =		Yes

.include <bsd.port.mk>
