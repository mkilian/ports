# $OpenBSD: Makefile,v 1.3 2019/02/22 07:24:34 semarie Exp $

MODPY_EGG_VERSION =	5.0.2
TRYTON_MODULE =		account_deposit

TRYTON_DEPENDS +=	account \
			account_invoice \
			company \
			party

RUN_DEPENDS +=		devel/py-dateutil${MODPY_FLAVOR} \
			databases/py-sql${MODPY_FLAVOR}

.include <bsd.port.mk>
