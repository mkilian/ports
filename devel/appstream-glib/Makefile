# $OpenBSD: Makefile,v 1.45 2018/10/17 11:53:36 ajacoutot Exp $

COMMENT=		library for AppStream metadata

DISTNAME=		appstream-glib-0.7.14
EXTRACT_SUFX=		.tar.xz

SHARED_LIBS += appstream-glib            3.5 # 8.0.10
SHARED_LIBS += appstream-builder         3.3 # 8.0.10

CATEGORIES=		devel

MAINTAINER=		Antoine Jacoutot <ajacoutot@openbsd.org>

HOMEPAGE=		http://people.freedesktop.org/~hughsient/appstream-glib/

# LGPLv2.1
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += archive c cairo fontconfig freetype gdk-3
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += intl json-glib-1.0 pango-1.0 soup-2.4 uuid yaml

MASTER_SITES=		http://people.freedesktop.org/~hughsient/appstream-glib/releases/

MODULES=		devel/meson \
			textproc/intltool \
			x11/gnome

MODGNOME_TOOLS=		docbook gobject-introspection

# C11
COMPILER=		base-clang ports-clang
COMPILER_LANGS=		c

BUILD_DEPENDS=		devel/gperf

LIB_DEPENDS=		archivers/libarchive \
			devel/json-glib \
			devel/libsoup \
			devel/libyaml \
			sysutils/e2fsprogs \
			x11/gtk+3

CONFIGURE_ARGS=		-Drpm=false

# requires libstemmer
CONFIGURE_ARGS +=	-Dstemmer=false

# needed for `make test'
PORTHOME=		${WRKDIST}

pre-configure:
	${SUBST_CMD} ${WRKSRC}/client/as-compose.c
	cd ${WRKSRC} && sed -i "s,/usr/share,${LOCALBASE}/share,g" \
		client/as-util.c \
		libappstream-glib/as-utils.c \
		libappstream-glib/as-self-test.c \
		libappstream-builder/plugins/asb-plugin-desktop.c \
		libappstream-builder/plugins/asb-plugin-hardcoded.c \
		libappstream-builder/plugins/asb-plugin-shell-extension.c \
		libappstream-builder/plugins/asb-plugin-appdata.c \
		libappstream-builder/plugins/asb-plugin-font.c \
		libappstream-builder/plugins/asb-plugin-gettext.c \
		libappstream-builder/plugins/asb-plugin-icon.c \
		libappstream-builder/asb-utils.c \
		libappstream-builder/asb-self-test.c
###

.include <bsd.port.mk>
