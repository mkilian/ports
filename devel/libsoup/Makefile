# $OpenBSD: Makefile,v 1.116 2019/01/01 11:39:57 ajacoutot Exp $

COMMENT =		HTTP client/server library for GNOME

GNOME_PROJECT =		libsoup
GNOME_VERSION =		2.64.2

SHARED_LIBS +=  soup-2.4             10.2     # 1.8.0
SHARED_LIBS +=  soup-gnome-2.4       8.0      # 1.8.0

API_VERSION =		2.4
SUBST_VARS =		API_VERSION

CATEGORIES =		devel www

MAINTAINER =		Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
			Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2
PERMIT_PACKAGE_CDROM=   Yes

WANTLIB += gio-2.0 glib-2.0 gobject-2.0 intl psl sqlite3 xml2

MODULES =		devel/meson \
			lang/python \
			x11/gnome

MODGNOME_TOOLS =	gobject-introspection vala
MODPY_RUNDEP =		No
MODPY_VERSION =		${MODPY_DEFAULT_VERSION_3}

RUN_DEPENDS =		net/glib2-networking

LIB_DEPENDS =		databases/sqlite3 \
			devel/glib2 \
			net/libpsl \
			textproc/libxml

CONFIGURE_ARGS =	-Dgssapi=false \
			-Dtests=false \
			-Dtls_check=false \
			-Dvapi=true

.include <bsd.port.mk>
