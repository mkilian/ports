# $OpenBSD: Makefile,v 1.65 2018/11/20 17:32:36 jca Exp $

COMMENT=	server for streaming various media formats
CATEGORIES=	net audio

DISTNAME=	icecast-2.4.4

HOMEPAGE=	https://icecast.org/

# GPL
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB =  c crypto curl>=2 iconv intl lzma m nghttp2 ogg pthread
WANTLIB += speex>=3 ssl theora>=1 vorbis>=3 xml2 xslt>=3 z

MASTER_SITES=	http://downloads.xiph.org/releases/icecast/


CONFIGURE_STYLE= gnu
CONFIGURE_ARGS+= --with-theora=${LOCALBASE}
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

LIB_DEPENDS =	archivers/xz \
		audio/libvorbis \
		audio/speex \
		multimedia/libtheora \
		net/curl \
		textproc/libxslt

SEPARATE_BUILD=	Yes

.include <bsd.port.mk>
