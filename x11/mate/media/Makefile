# $OpenBSD: Makefile,v 1.10 2018/09/20 11:16:11 robert Exp $

COMMENT=		media tools for the MATE desktop

MATE_PROJECT=		mate-media
MATE_VERSION=		1.20.1

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes
WANTLIB += Xi Xinerama Xrandr Xrender c epoxy expat ffi fontconfig
WANTLIB += freetype gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 gthread-2.0 iconv intl m pcre pixman-1
WANTLIB += png pthread xcb xcb-render xcb-shm z
WANTLIB += atk-1.0 atk-bridge-2.0 atspi cairo-gobject cairo
WANTLIB += canberra-gtk3 canberra dbus-1 gdk-3 graphite2 gtk-3
WANTLIB += harfbuzz ltdl ogg pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 vorbis vorbisfile
WANTLIB += dconf lzma mate-desktop-2 matemixer xml2
WANTLIB += X11-xcb startup-notification-1 xcb-util
WANTLIB += fribidi

MODULES=		devel/dconf \
			x11/gnome

LIB_DEPENDS=		audio/libcanberra,-gtk3 \
			x11/mate/desktop \
			x11/mate/libmatemixer

MODGNOME_TOOLS=		desktop-file-utils gtk-update-icon-cache

FAKE_FLAGS=		desktopdir=${PREFIX}/share/examples/mate-media/xdg/autostart \
			sysconfdir=${PREFIX}/share/examples/mate-media

CONFIGURE_STYLE=	gnu

.include <bsd.port.mk>
