# $OpenBSD: Makefile,v 1.17 2018/10/24 14:28:11 sthen Exp $

COMMENT=	SGML parser and entity manager

DISTNAME=	lq-sp-1.3.4.12
REVISION =	3
CATEGORIES=	textproc
HOMEPAGE=	http://www.htmlhelp.com/tools/validator/offline/

MAINTAINER=	Gerardo Santana Gomez Garrido <gerardo.santana@gmail.com>

# BSD-like
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		c m ${COMPILER_LIBCXX} 

COMPILER =		base-clang ports-gcc base-gcc

MASTER_SITES=	${HOMEPAGE}

MAKE_FLAGS=	CXX="${CXX}" \
		CXXFLAGS="${CXXFLAGS} -fno-implicit-templates" \
		RANLIB=${RANLIB}

NO_TEST=	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/nsgmls/lq-nsgmls ${PREFIX}/bin

.include <bsd.port.mk>
