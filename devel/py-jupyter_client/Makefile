# $OpenBSD: Makefile,v 1.7 2018/12/29 11:53:38 mariani Exp $

COMMENT =		Jupyter protocol implementation and client libraries

MODPY_EGG_VERSION =	5.2.4
DISTNAME =		jupyter_client-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		devel

HOMEPAGE =		https://jupyter.org/

MAINTAINER =		Elias M. Mariani <marianielias@gmail.com>

# BSD
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python

MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes

FLAVORS =		python3
FLAVOR ?=

RUN_DEPENDS =		devel/py-dateutil${MODPY_FLAVOR} \
			devel/py-jupyter_core${MODPY_FLAVOR}>=4.3.0 \
			devel/py-traitlets${MODPY_FLAVOR} \
			net/py-zmq${MODPY_FLAVOR} \
			www/py-tornado${MODPY_FLAVOR}
TEST_DEPENDS =		${RUN_DEPENDS} \
			devel/ipython${MODPY_FLAVOR}>=5.1.0 \
			devel/py-ipykernel${MODPY_FLAVOR}>=4.5.2 \
			devel/py-test${MODPY_FLAVOR} \
			shells/bash

.if !${FLAVOR:Mpython3}
TEST_DEPENDS +=		devel/py-mock
.endif

post-install:
	mv ${PREFIX}/bin/jupyter-kernel{,${MODPY_BIN_SUFFIX}}
	mv ${PREFIX}/bin/jupyter-kernelspec{,${MODPY_BIN_SUFFIX}}
	mv ${PREFIX}/bin/jupyter-run{,${MODPY_BIN_SUFFIX}}

do-test:
	cd ${WRKSRC} && ${MODPY_BIN} -m pytest jupyter_client

.include <bsd.port.mk>
