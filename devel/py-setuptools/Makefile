# $OpenBSD: Makefile,v 1.32 2018/07/30 08:15:30 jasper Exp $

COMMENT=	simplified packaging system for Python modules

MODPY_EGG_VERSION=	40.0.0
DISTNAME=		setuptools-${MODPY_EGG_VERSION}
PKGNAME=		py-${DISTNAME:S/c/./}
EPOCH=			0
CATEGORIES=		devel
PKG_ARCH=		*
EXTRACT_SUFX=		.zip

HOMEPAGE=		https://setuptools.readthedocs.io/en/latest/

# MIT
PERMIT_PACKAGE_CDROM=	Yes

MODULES=		lang/python

MODPY_PI=		Yes
MODPY_SETUPTOOLS=	Yes

FLAVORS =		python3
FLAVOR ?=

# Override automatic py-setuptools depend to avoid recursion
MODPY_SETUPUTILS_DEPEND=

NO_TEST =		Yes

.include <bsd.port.mk>
