# $OpenBSD: Makefile,v 1.2 2019/02/23 17:57:43 mariani Exp $

COMMENT=		kernels used by spyder on its ipython console

MODPY_EGG_VERSION=	0.4.2
DISTNAME=		spyder-kernels-${MODPY_EGG_VERSION}
PKGNAME=		${MODPY_PY_PREFIX}${DISTNAME}

PORTROACH=		limit:^0

HOMEPAGE=		https://github.com/spyder-ide/spyder-kernels

FLAVORS =	python3
FLAVOR ?=

RUN_DEPENDS +=	devel/py-cloudpickle${MODPY_FLAVOR} \
		devel/py-ipykernel${MODPY_FLAVOR}>=4.8.2 \
		devel/py-jupyter_client${MODPY_FLAVOR}>=5.2.3 \
		devel/py-wurlitzer${MODPY_FLAVOR} \
		net/py-zmq${MODPY_FLAVOR}

NO_TEST =	Yes

.include <bsd.port.mk>
