# $OpenBSD: Makefile,v 1.47 2019/01/06 14:01:06 jasper Exp $

COMMENT=		GNOME desktop calculator

GNOME_PROJECT=		gnome-calculator
GNOME_VERSION=		3.30.1

CATEGORIES=		math

# GPLv3+
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += atk-1.0 c gdk-3 gio-2.0 glib-2.0 gobject-2.0 gtk-3
WANTLIB += gtksourceview-3.0 intl mpc mpfr soup-2.4 xml2

MODULES=		devel/dconf \
			devel/meson \
			x11/gnome

LIB_DEPENDS+=		devel/libmpc \
			devel/mpfr \
			devel/libsoup \
			x11/gtksourceview3

MODGNOME_TOOLS=		desktop-file-utils vala yelp

.include <bsd.port.mk>
