# $OpenBSD: Makefile,v 1.1.1.1 2018/11/19 09:55:47 bentley Exp $

COMMENT =		reorder separable/discontinuous multiwords

V =			0.3.2
DISTNAME =		apertium-separable-$V

CATEGORIES =		textproc

HOMEPAGE =		https://www.apertium.org/

MAINTAINER =		Anthony J. Bentley <anthony@anjbe.name>

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += ${COMPILER_LIBCXX} apertium3 c lttoolbox3 m pcre xml2 z

MASTER_SITES =		https://github.com/apertium/apertium-separable/releases/download/v$V/

# c++20
COMPILER =		base-clang ports-gcc

LIB_DEPENDS =		textproc/apertium>=3.5.1 \
			textproc/lttoolbox>=3.4.2

USE_GMAKE =		Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
